// Copyright (C) 2019 Guillaume Valadon <guillaume@valadon.net>
// This program is published under a GPLv2 license

/*
 * Decompile a function with Ghidra
 *
 * analyzeHeadless . Test.gpr -import $BINARY_NAME -postScript GhidraDecompiler.java $FUNCTION_ADDRESS -deleteProject -noanalysis
 *
*/

import ghidra.app.decompiler.ClangLine;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompiledFunction;
import ghidra.app.decompiler.PrettyPrinter;
import ghidra.app.decompiler.component.DecompilerUtils;

import ghidra.app.util.headless.HeadlessScript;

import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.pcode.HighFunction;

import java.util.ArrayList;
import java.util.List;
import java.io.FileWriter;
import java.io.IOException;



public class GhidraDecompiler extends HeadlessScript {
  
  @Override
  public void run() throws Exception {

        // Stop after this headless script
        setHeadlessContinuationOption(HeadlessContinuationOption.ABORT);


        DecompInterface di = new DecompInterface();
        println("Simplification style: " + di.getSimplificationStyle()); // DEBUG
        println("Debug enables: " + di.debugEnabled());
    	// create String array : "functions_name
    	//call get_functions and fill functions_name
        List<Function> results=new ArrayList<Function>();
        this.getFunction(results);	
        for (Function function : results) {
    	println("function name: " + function.getName());
        }
    	//for each function in functions_name do the entire code below
        for (Function f : results){
            //Function f = this.getFunction(functionAddress);
            if (f == null) {
              // System.err.println(String.format("Function not found at 0x%x", functionAddress));
              return;
            }
            WriteToFile writeToFileHandler= new WriteToFile(f.getName());
            // FileWriter file_obj= null;
            // file_obj=new FileWriter("/home/daniel/Desktop/project_deco/func_source"+f.getName());
            // println(String.format("Decompiling %s() at 0x%x", f.getName(), functionAddress));

            println("Program: " + di.openProgram(f.getProgram())); // DEBUG

            // Decompile with a 10-seconds timeout
            DecompileResults dr = di.decompileFunction(f, 10, null);
            println("Decompilation completed: " + dr.decompileCompleted()); // DEBUG

            DecompiledFunction df = dr.getDecompiledFunction();
            println(df.getC());

	    writeToFileHandler.WriteLine(df.getC());
            // Print lines prepend with addresses
            PrettyPrinter pp = new PrettyPrinter(f, dr.getCCodeMarkup());
            ArrayList<ClangLine> lines = pp.getLines();

            for (ClangLine line : lines) {
                long minAddress = Long.MAX_VALUE; 
                long maxAddress = 0; 
                for (int i = 0; i < line.getNumTokens(); i++) {
                    if (line.getToken(i).getMinAddress() == null) {
                        continue; 
                    }
                    long addr = line.getToken(i).getMinAddress().getOffset();
                    minAddress = addr < minAddress ? addr : minAddress;
                    maxAddress = addr > maxAddress ? addr : maxAddress;
                }
                if (maxAddress == 0) {
                    //TODO: write to file
		

                    println(String.format("                      - %sDaniel", line.toString()));
                } else {
                    println(String.format("0x%-8x 0x%-8x - %s", minAddress, maxAddress, line.toString()));

              }
            }
            writeToFileHandler.closeFile();    
        }
    }


    protected Function getFunction(List<Function> results) {
    // Logic from https://github.com/cea-sec/Sibyl/blob/master/ext/ghidra/ExportFunction.java

        Listing listing = currentProgram.getListing();
        FunctionIterator iter = listing.getFunctions(true);
        while (iter.hasNext() && !monitor.isCancelled()) {
            Function f = iter.next();
            if (f.isExternal()) {
                continue;
            }

            Address entry = f.getEntryPoint();
            if (entry != null ) {
    	       results.add(f);
                //return f;
            }
        }
        return null;
    }
      class WriteToFile {
        FileWriter file;
        //TODO: save also file name
        public WriteToFile (String function_name) {
            try {
                String path="/home/daniel/Desktop/project_deco/func_source/";
                String fullName=path.concat(function_name);
                FileWriter functioWriter = new FileWriter(fullName);
                file = functioWriter;
                // myWriter.close();
                System.out.println("Successfully wrote to the file.");
            } catch (IOException e) {
                System.out.println("An error occurred.");
                e.printStackTrace();
            }
        }
        void WriteLine(String line ){
            try{
                file.write(line);
            }catch (IOException e){
                System.out.println("ERROR cannot write to file"); // TODO:print also file name 
            }
        }
        void closeFile(){
            try{
                file.close();
            }catch (IOException e){
                System.out.println("ERROR");
            }
        }
    }

   
}
