#ifndef usergroup_list_element_TEST
#define usergroup_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroup_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroup_list_element.h"
usergroup_list_element_t* instantiate_usergroup_list_element(int include_optional);



usergroup_list_element_t* instantiate_usergroup_list_element(int include_optional) {
  usergroup_list_element_t* usergroup_list_element = NULL;
  if (include_optional) {
    usergroup_list_element = usergroup_list_element_create(
      2,
      "Administration"
    );
  } else {
    usergroup_list_element = usergroup_list_element_create(
      2,
      "Administration"
    );
  }

  return usergroup_list_element;
}


#ifdef usergroup_list_element_MAIN

void test_usergroup_list_element(int include_optional) {
    usergroup_list_element_t* usergroup_list_element_1 = instantiate_usergroup_list_element(include_optional);

	cJSON* jsonusergroup_list_element_1 = usergroup_list_element_convertToJSON(usergroup_list_element_1);
	printf("usergroup_list_element :\n%s\n", cJSON_Print(jsonusergroup_list_element_1));
	usergroup_list_element_t* usergroup_list_element_2 = usergroup_list_element_parseFromJSON(jsonusergroup_list_element_1);
	cJSON* jsonusergroup_list_element_2 = usergroup_list_element_convertToJSON(usergroup_list_element_2);
	printf("repeating usergroup_list_element:\n%s\n", cJSON_Print(jsonusergroup_list_element_2));
}

int main() {
  test_usergroup_list_element(1);
  test_usergroup_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroup_list_element_MAIN
#endif // usergroup_list_element_TEST
