#ifndef scim_group_TEST
#define scim_group_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_group_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_group.h"
scim_group_t* instantiate_scim_group(int include_optional);



scim_group_t* instantiate_scim_group(int include_optional) {
  scim_group_t* scim_group = NULL;
  if (include_optional) {
    scim_group = scim_group_create(
      "0",
      "Administration",
      list_createList()
    );
  } else {
    scim_group = scim_group_create(
      "0",
      "Administration",
      list_createList()
    );
  }

  return scim_group;
}


#ifdef scim_group_MAIN

void test_scim_group(int include_optional) {
    scim_group_t* scim_group_1 = instantiate_scim_group(include_optional);

	cJSON* jsonscim_group_1 = scim_group_convertToJSON(scim_group_1);
	printf("scim_group :\n%s\n", cJSON_Print(jsonscim_group_1));
	scim_group_t* scim_group_2 = scim_group_parseFromJSON(jsonscim_group_1);
	cJSON* jsonscim_group_2 = scim_group_convertToJSON(scim_group_2);
	printf("repeating scim_group:\n%s\n", cJSON_Print(jsonscim_group_2));
}

int main() {
  test_scim_group(1);
  test_scim_group(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_group_MAIN
#endif // scim_group_TEST
