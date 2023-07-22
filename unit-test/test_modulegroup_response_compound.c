#ifndef modulegroup_response_compound_TEST
#define modulegroup_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulegroup_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulegroup_response_compound.h"
modulegroup_response_compound_t* instantiate_modulegroup_response_compound(int include_optional);



modulegroup_response_compound_t* instantiate_modulegroup_response_compound(int include_optional) {
  modulegroup_response_compound_t* modulegroup_response_compound = NULL;
  if (include_optional) {
    modulegroup_response_compound = modulegroup_response_compound_create(
      46,
      "Management",
      list_createList()
    );
  } else {
    modulegroup_response_compound = modulegroup_response_compound_create(
      46,
      "Management",
      list_createList()
    );
  }

  return modulegroup_response_compound;
}


#ifdef modulegroup_response_compound_MAIN

void test_modulegroup_response_compound(int include_optional) {
    modulegroup_response_compound_t* modulegroup_response_compound_1 = instantiate_modulegroup_response_compound(include_optional);

	cJSON* jsonmodulegroup_response_compound_1 = modulegroup_response_compound_convertToJSON(modulegroup_response_compound_1);
	printf("modulegroup_response_compound :\n%s\n", cJSON_Print(jsonmodulegroup_response_compound_1));
	modulegroup_response_compound_t* modulegroup_response_compound_2 = modulegroup_response_compound_parseFromJSON(jsonmodulegroup_response_compound_1);
	cJSON* jsonmodulegroup_response_compound_2 = modulegroup_response_compound_convertToJSON(modulegroup_response_compound_2);
	printf("repeating modulegroup_response_compound:\n%s\n", cJSON_Print(jsonmodulegroup_response_compound_2));
}

int main() {
  test_modulegroup_response_compound(1);
  test_modulegroup_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulegroup_response_compound_MAIN
#endif // modulegroup_response_compound_TEST
