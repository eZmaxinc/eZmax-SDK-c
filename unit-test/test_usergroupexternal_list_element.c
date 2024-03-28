#ifndef usergroupexternal_list_element_TEST
#define usergroupexternal_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_list_element.h"
usergroupexternal_list_element_t* instantiate_usergroupexternal_list_element(int include_optional);



usergroupexternal_list_element_t* instantiate_usergroupexternal_list_element(int include_optional) {
  usergroupexternal_list_element_t* usergroupexternal_list_element = NULL;
  if (include_optional) {
    usergroupexternal_list_element = usergroupexternal_list_element_create(
      16,
      "Administrators",
      "5140-1542"
    );
  } else {
    usergroupexternal_list_element = usergroupexternal_list_element_create(
      16,
      "Administrators",
      "5140-1542"
    );
  }

  return usergroupexternal_list_element;
}


#ifdef usergroupexternal_list_element_MAIN

void test_usergroupexternal_list_element(int include_optional) {
    usergroupexternal_list_element_t* usergroupexternal_list_element_1 = instantiate_usergroupexternal_list_element(include_optional);

	cJSON* jsonusergroupexternal_list_element_1 = usergroupexternal_list_element_convertToJSON(usergroupexternal_list_element_1);
	printf("usergroupexternal_list_element :\n%s\n", cJSON_Print(jsonusergroupexternal_list_element_1));
	usergroupexternal_list_element_t* usergroupexternal_list_element_2 = usergroupexternal_list_element_parseFromJSON(jsonusergroupexternal_list_element_1);
	cJSON* jsonusergroupexternal_list_element_2 = usergroupexternal_list_element_convertToJSON(usergroupexternal_list_element_2);
	printf("repeating usergroupexternal_list_element:\n%s\n", cJSON_Print(jsonusergroupexternal_list_element_2));
}

int main() {
  test_usergroupexternal_list_element(1);
  test_usergroupexternal_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_list_element_MAIN
#endif // usergroupexternal_list_element_TEST
