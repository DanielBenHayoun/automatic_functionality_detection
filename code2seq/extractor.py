import json

import requests

from common import PathContextInformation


class Extractor:
    def __init__(self, config, extractor_api_url, max_path_length, max_path_width):
        self.config = config
        self.max_path_length = max_path_length
        self.max_path_width = max_path_width
        self.extractor_api_url = extractor_api_url
        self.bad_characters_table = str.maketrans('', '', '\t\r\n')

    @staticmethod
    def post_request(url, code_string):
        return requests.post(url, data=json.dumps({"code": code_string, "decompose": True}, separators=(',', ':')))

    def extract_paths(self, code_string):
        print('eial test:\n')
        print('debug-codes_string: ',code_string)
        response = self.post_request(self.extractor_api_url, code_string)
        #print("debug-response: ",response)
        response_array = json.loads(response.text)
        if 'errorType' in response_array:
            raise ValueError(response.text)
        if 'errorMessage' in response_array:
            raise TimeoutError(response.text)
        pc_info_dict = {}
        result = []
        for single_method in response_array:
            
            #print("debug-single_method: ",single_method)
            method_name = single_method['target']
            print("debug-method_name: ",method_name)
            current_result_line_parts = [method_name]
            #print("debug-current_result_line_parts: ",current_result_line_parts)
            contexts = single_method['paths']
            print("debug-AST:",single_method['ast'])
            #print("debug-contexts: ",contexts)
            for context in contexts[:self.config.DATA_NUM_CONTEXTS]:
                print("debug-context:",context)
                pc_info = PathContextInformation(context)
                current_result_line_parts += [str(pc_info)]
                pc_info_dict[(pc_info.token1, pc_info.shortPath, pc_info.token2)] = pc_info
            space_padding = ' ' * (self.config.DATA_NUM_CONTEXTS - len(contexts))
            result_line = ' '.join(current_result_line_parts) + space_padding
            result.append(result_line)
        return result, pc_info_dict
