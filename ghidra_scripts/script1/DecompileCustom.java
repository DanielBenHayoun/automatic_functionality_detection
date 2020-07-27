import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

import ghidra.app.plugin.core.script.Ingredient;
import ghidra.app.plugin.core.script.IngredientDescription;
import ghidra.app.script.GatherParamPanel;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.Option;
import ghidra.app.util.exporter.CppExporter;

public class DecompileCUSTOM extends GhidraScript implements Ingredient {

	@Override
	public void run() throws Exception {
		println(String.format("DANIELLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL")); // DEBUG
		IngredientDescription[] ingredients = getIngredientDescriptions();
		for (IngredientDescription ingredient : ingredients) {
			state.addParameter(ingredient.getID(), ingredient.getLabel(), ingredient.getType(),
				ingredient.getDefaultValue());
		}
		// if (!state.displayParameterGatherer("Script Options")) {
		// 	return;
		// }

		String[] args = getScriptArgs();


		System.out.println("ARGS: " + Arrays.toString(args));
		println(String.format("DANIELLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL")); // DEBUG
		println(String.format("Array length: %d", args.length)); // DEBUG
		println(String.format("args[0] %s", args[0])); // DEBUG
		// File outputFile = (File) state.getEnvironmentVar("COutputFile");
		File outputFile = new File(args[0]);


		CppExporter cppExporter = new CppExporter();
		List<Option> options = new ArrayList<Option>();
		options.add(new Option(CppExporter.CREATE_HEADER_FILE, new Boolean(false)));
		cppExporter.setOptions(options);
		cppExporter.setExporterServiceProvider(state.getTool());
		cppExporter.export(outputFile, currentProgram, null, monitor);
	}

	@Override
	public IngredientDescription[] getIngredientDescriptions() {
		IngredientDescription[] retVal = new IngredientDescription[] {
			new IngredientDescription("COutputFile", "Output C File", GatherParamPanel.FILE, "") };
		return retVal;
	}

}

