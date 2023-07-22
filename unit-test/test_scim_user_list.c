#ifndef scim_user_list_TEST
#define scim_user_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_user_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_user_list.h"
scim_user_list_t* instantiate_scim_user_list(int include_optional);



scim_user_list_t* instantiate_scim_user_list(int include_optional) {
  scim_user_list_t* scim_user_list = NULL;
  if (include_optional) {
    scim_user_list = scim_user_list_create(
      56,
      56,
      56,
      list_createList(),
      list_createList()
    );
  } else {
    scim_user_list = scim_user_list_create(
      56,
      56,
      56,
      list_createList(),
      list_createList()
    );
  }

  return scim_user_list;
}


#ifdef scim_user_list_MAIN

void test_scim_user_list(int include_optional) {
    scim_user_list_t* scim_user_list_1 = instantiate_scim_user_list(include_optional);

	cJSON* jsonscim_user_list_1 = scim_user_list_convertToJSON(scim_user_list_1);
	printf("scim_user_list :\n%s\n", cJSON_Print(jsonscim_user_list_1));
	scim_user_list_t* scim_user_list_2 = scim_user_list_parseFromJSON(jsonscim_user_list_1);
	cJSON* jsonscim_user_list_2 = scim_user_list_convertToJSON(scim_user_list_2);
	printf("repeating scim_user_list:\n%s\n", cJSON_Print(jsonscim_user_list_2));
}

int main() {
  test_scim_user_list(1);
  test_scim_user_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_user_list_MAIN
#endif // scim_user_list_TEST
