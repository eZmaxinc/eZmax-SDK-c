#ifndef modulegroup_response_compound_all_of_TEST
#define modulegroup_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulegroup_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulegroup_response_compound_all_of.h"
modulegroup_response_compound_all_of_t* instantiate_modulegroup_response_compound_all_of(int include_optional);



modulegroup_response_compound_all_of_t* instantiate_modulegroup_response_compound_all_of(int include_optional) {
  modulegroup_response_compound_all_of_t* modulegroup_response_compound_all_of = NULL;
  if (include_optional) {
    modulegroup_response_compound_all_of = modulegroup_response_compound_all_of_create(
      list_createList()
    );
  } else {
    modulegroup_response_compound_all_of = modulegroup_response_compound_all_of_create(
      list_createList()
    );
  }

  return modulegroup_response_compound_all_of;
}


#ifdef modulegroup_response_compound_all_of_MAIN

void test_modulegroup_response_compound_all_of(int include_optional) {
    modulegroup_response_compound_all_of_t* modulegroup_response_compound_all_of_1 = instantiate_modulegroup_response_compound_all_of(include_optional);

	cJSON* jsonmodulegroup_response_compound_all_of_1 = modulegroup_response_compound_all_of_convertToJSON(modulegroup_response_compound_all_of_1);
	printf("modulegroup_response_compound_all_of :\n%s\n", cJSON_Print(jsonmodulegroup_response_compound_all_of_1));
	modulegroup_response_compound_all_of_t* modulegroup_response_compound_all_of_2 = modulegroup_response_compound_all_of_parseFromJSON(jsonmodulegroup_response_compound_all_of_1);
	cJSON* jsonmodulegroup_response_compound_all_of_2 = modulegroup_response_compound_all_of_convertToJSON(modulegroup_response_compound_all_of_2);
	printf("repeating modulegroup_response_compound_all_of:\n%s\n", cJSON_Print(jsonmodulegroup_response_compound_all_of_2));
}

int main() {
  test_modulegroup_response_compound_all_of(1);
  test_modulegroup_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulegroup_response_compound_all_of_MAIN
#endif // modulegroup_response_compound_all_of_TEST
