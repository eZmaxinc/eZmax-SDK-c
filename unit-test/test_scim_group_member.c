#ifndef scim_group_member_TEST
#define scim_group_member_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_group_member_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_group_member.h"
scim_group_member_t* instantiate_scim_group_member(int include_optional);



scim_group_member_t* instantiate_scim_group_member(int include_optional) {
  scim_group_member_t* scim_group_member = NULL;
  if (include_optional) {
    scim_group_member = scim_group_member_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    scim_group_member = scim_group_member_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return scim_group_member;
}


#ifdef scim_group_member_MAIN

void test_scim_group_member(int include_optional) {
    scim_group_member_t* scim_group_member_1 = instantiate_scim_group_member(include_optional);

	cJSON* jsonscim_group_member_1 = scim_group_member_convertToJSON(scim_group_member_1);
	printf("scim_group_member :\n%s\n", cJSON_Print(jsonscim_group_member_1));
	scim_group_member_t* scim_group_member_2 = scim_group_member_parseFromJSON(jsonscim_group_member_1);
	cJSON* jsonscim_group_member_2 = scim_group_member_convertToJSON(scim_group_member_2);
	printf("repeating scim_group_member:\n%s\n", cJSON_Print(jsonscim_group_member_2));
}

int main() {
  test_scim_group_member(1);
  test_scim_group_member(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_group_member_MAIN
#endif // scim_group_member_TEST
