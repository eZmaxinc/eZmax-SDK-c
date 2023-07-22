#ifndef module_response_compound_all_of_TEST
#define module_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_response_compound_all_of.h"
module_response_compound_all_of_t* instantiate_module_response_compound_all_of(int include_optional);



module_response_compound_all_of_t* instantiate_module_response_compound_all_of(int include_optional) {
  module_response_compound_all_of_t* module_response_compound_all_of = NULL;
  if (include_optional) {
    module_response_compound_all_of = module_response_compound_all_of_create(
      list_createList()
    );
  } else {
    module_response_compound_all_of = module_response_compound_all_of_create(
      list_createList()
    );
  }

  return module_response_compound_all_of;
}


#ifdef module_response_compound_all_of_MAIN

void test_module_response_compound_all_of(int include_optional) {
    module_response_compound_all_of_t* module_response_compound_all_of_1 = instantiate_module_response_compound_all_of(include_optional);

	cJSON* jsonmodule_response_compound_all_of_1 = module_response_compound_all_of_convertToJSON(module_response_compound_all_of_1);
	printf("module_response_compound_all_of :\n%s\n", cJSON_Print(jsonmodule_response_compound_all_of_1));
	module_response_compound_all_of_t* module_response_compound_all_of_2 = module_response_compound_all_of_parseFromJSON(jsonmodule_response_compound_all_of_1);
	cJSON* jsonmodule_response_compound_all_of_2 = module_response_compound_all_of_convertToJSON(module_response_compound_all_of_2);
	printf("repeating module_response_compound_all_of:\n%s\n", cJSON_Print(jsonmodule_response_compound_all_of_2));
}

int main() {
  test_module_response_compound_all_of(1);
  test_module_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_response_compound_all_of_MAIN
#endif // module_response_compound_all_of_TEST
