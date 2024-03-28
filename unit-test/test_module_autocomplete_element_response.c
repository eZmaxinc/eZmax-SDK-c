#ifndef module_autocomplete_element_response_TEST
#define module_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_autocomplete_element_response.h"
module_autocomplete_element_response_t* instantiate_module_autocomplete_element_response(int include_optional);



module_autocomplete_element_response_t* instantiate_module_autocomplete_element_response(int include_optional) {
  module_autocomplete_element_response_t* module_autocomplete_element_response = NULL;
  if (include_optional) {
    module_autocomplete_element_response = module_autocomplete_element_response_create(
      40,
      "Purchase",
      true
    );
  } else {
    module_autocomplete_element_response = module_autocomplete_element_response_create(
      40,
      "Purchase",
      true
    );
  }

  return module_autocomplete_element_response;
}


#ifdef module_autocomplete_element_response_MAIN

void test_module_autocomplete_element_response(int include_optional) {
    module_autocomplete_element_response_t* module_autocomplete_element_response_1 = instantiate_module_autocomplete_element_response(include_optional);

	cJSON* jsonmodule_autocomplete_element_response_1 = module_autocomplete_element_response_convertToJSON(module_autocomplete_element_response_1);
	printf("module_autocomplete_element_response :\n%s\n", cJSON_Print(jsonmodule_autocomplete_element_response_1));
	module_autocomplete_element_response_t* module_autocomplete_element_response_2 = module_autocomplete_element_response_parseFromJSON(jsonmodule_autocomplete_element_response_1);
	cJSON* jsonmodule_autocomplete_element_response_2 = module_autocomplete_element_response_convertToJSON(module_autocomplete_element_response_2);
	printf("repeating module_autocomplete_element_response:\n%s\n", cJSON_Print(jsonmodule_autocomplete_element_response_2));
}

int main() {
  test_module_autocomplete_element_response(1);
  test_module_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_autocomplete_element_response_MAIN
#endif // module_autocomplete_element_response_TEST
