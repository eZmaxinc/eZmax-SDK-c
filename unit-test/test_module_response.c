#ifndef module_response_TEST
#define module_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_response.h"
module_response_t* instantiate_module_response(int include_optional);



module_response_t* instantiate_module_response(int include_optional) {
  module_response_t* module_response = NULL;
  if (include_optional) {
    module_response = module_response_create(
      40,
      46,
      "Purchases",
      "Purchase",
      true,
      true
    );
  } else {
    module_response = module_response_create(
      40,
      46,
      "Purchases",
      "Purchase",
      true,
      true
    );
  }

  return module_response;
}


#ifdef module_response_MAIN

void test_module_response(int include_optional) {
    module_response_t* module_response_1 = instantiate_module_response(include_optional);

	cJSON* jsonmodule_response_1 = module_response_convertToJSON(module_response_1);
	printf("module_response :\n%s\n", cJSON_Print(jsonmodule_response_1));
	module_response_t* module_response_2 = module_response_parseFromJSON(jsonmodule_response_1);
	cJSON* jsonmodule_response_2 = module_response_convertToJSON(module_response_2);
	printf("repeating module_response:\n%s\n", cJSON_Print(jsonmodule_response_2));
}

int main() {
  test_module_response(1);
  test_module_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_response_MAIN
#endif // module_response_TEST
