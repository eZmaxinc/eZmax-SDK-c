#ifndef modulegroup_response_TEST
#define modulegroup_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulegroup_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulegroup_response.h"
modulegroup_response_t* instantiate_modulegroup_response(int include_optional);



modulegroup_response_t* instantiate_modulegroup_response(int include_optional) {
  modulegroup_response_t* modulegroup_response = NULL;
  if (include_optional) {
    modulegroup_response = modulegroup_response_create(
      46,
      "Management"
    );
  } else {
    modulegroup_response = modulegroup_response_create(
      46,
      "Management"
    );
  }

  return modulegroup_response;
}


#ifdef modulegroup_response_MAIN

void test_modulegroup_response(int include_optional) {
    modulegroup_response_t* modulegroup_response_1 = instantiate_modulegroup_response(include_optional);

	cJSON* jsonmodulegroup_response_1 = modulegroup_response_convertToJSON(modulegroup_response_1);
	printf("modulegroup_response :\n%s\n", cJSON_Print(jsonmodulegroup_response_1));
	modulegroup_response_t* modulegroup_response_2 = modulegroup_response_parseFromJSON(jsonmodulegroup_response_1);
	cJSON* jsonmodulegroup_response_2 = modulegroup_response_convertToJSON(modulegroup_response_2);
	printf("repeating modulegroup_response:\n%s\n", cJSON_Print(jsonmodulegroup_response_2));
}

int main() {
  test_modulegroup_response(1);
  test_modulegroup_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulegroup_response_MAIN
#endif // modulegroup_response_TEST
