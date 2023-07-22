#ifndef module_response_compound_TEST
#define module_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_response_compound.h"
module_response_compound_t* instantiate_module_response_compound(int include_optional);



module_response_compound_t* instantiate_module_response_compound(int include_optional) {
  module_response_compound_t* module_response_compound = NULL;
  if (include_optional) {
    module_response_compound = module_response_compound_create(
      40,
      46,
      "Purchases",
      "Purchase",
      true,
      true,
      list_createList()
    );
  } else {
    module_response_compound = module_response_compound_create(
      40,
      46,
      "Purchases",
      "Purchase",
      true,
      true,
      list_createList()
    );
  }

  return module_response_compound;
}


#ifdef module_response_compound_MAIN

void test_module_response_compound(int include_optional) {
    module_response_compound_t* module_response_compound_1 = instantiate_module_response_compound(include_optional);

	cJSON* jsonmodule_response_compound_1 = module_response_compound_convertToJSON(module_response_compound_1);
	printf("module_response_compound :\n%s\n", cJSON_Print(jsonmodule_response_compound_1));
	module_response_compound_t* module_response_compound_2 = module_response_compound_parseFromJSON(jsonmodule_response_compound_1);
	cJSON* jsonmodule_response_compound_2 = module_response_compound_convertToJSON(module_response_compound_2);
	printf("repeating module_response_compound:\n%s\n", cJSON_Print(jsonmodule_response_compound_2));
}

int main() {
  test_module_response_compound(1);
  test_module_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_response_compound_MAIN
#endif // module_response_compound_TEST
