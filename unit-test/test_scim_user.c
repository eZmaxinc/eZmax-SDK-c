#ifndef scim_user_TEST
#define scim_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_user.h"
scim_user_t* instantiate_scim_user(int include_optional);



scim_user_t* instantiate_scim_user(int include_optional) {
  scim_user_t* scim_user = NULL;
  if (include_optional) {
    scim_user = scim_user_create(
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    scim_user = scim_user_create(
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return scim_user;
}


#ifdef scim_user_MAIN

void test_scim_user(int include_optional) {
    scim_user_t* scim_user_1 = instantiate_scim_user(include_optional);

	cJSON* jsonscim_user_1 = scim_user_convertToJSON(scim_user_1);
	printf("scim_user :\n%s\n", cJSON_Print(jsonscim_user_1));
	scim_user_t* scim_user_2 = scim_user_parseFromJSON(jsonscim_user_1);
	cJSON* jsonscim_user_2 = scim_user_convertToJSON(scim_user_2);
	printf("repeating scim_user:\n%s\n", cJSON_Print(jsonscim_user_2));
}

int main() {
  test_scim_user(1);
  test_scim_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_user_MAIN
#endif // scim_user_TEST
