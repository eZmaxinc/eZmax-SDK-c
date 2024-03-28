#ifndef usergroupexternal_autocomplete_element_response_TEST
#define usergroupexternal_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_autocomplete_element_response.h"
usergroupexternal_autocomplete_element_response_t* instantiate_usergroupexternal_autocomplete_element_response(int include_optional);



usergroupexternal_autocomplete_element_response_t* instantiate_usergroupexternal_autocomplete_element_response(int include_optional) {
  usergroupexternal_autocomplete_element_response_t* usergroupexternal_autocomplete_element_response = NULL;
  if (include_optional) {
    usergroupexternal_autocomplete_element_response = usergroupexternal_autocomplete_element_response_create(
      16,
      "Administrators",
      true
    );
  } else {
    usergroupexternal_autocomplete_element_response = usergroupexternal_autocomplete_element_response_create(
      16,
      "Administrators",
      true
    );
  }

  return usergroupexternal_autocomplete_element_response;
}


#ifdef usergroupexternal_autocomplete_element_response_MAIN

void test_usergroupexternal_autocomplete_element_response(int include_optional) {
    usergroupexternal_autocomplete_element_response_t* usergroupexternal_autocomplete_element_response_1 = instantiate_usergroupexternal_autocomplete_element_response(include_optional);

	cJSON* jsonusergroupexternal_autocomplete_element_response_1 = usergroupexternal_autocomplete_element_response_convertToJSON(usergroupexternal_autocomplete_element_response_1);
	printf("usergroupexternal_autocomplete_element_response :\n%s\n", cJSON_Print(jsonusergroupexternal_autocomplete_element_response_1));
	usergroupexternal_autocomplete_element_response_t* usergroupexternal_autocomplete_element_response_2 = usergroupexternal_autocomplete_element_response_parseFromJSON(jsonusergroupexternal_autocomplete_element_response_1);
	cJSON* jsonusergroupexternal_autocomplete_element_response_2 = usergroupexternal_autocomplete_element_response_convertToJSON(usergroupexternal_autocomplete_element_response_2);
	printf("repeating usergroupexternal_autocomplete_element_response:\n%s\n", cJSON_Print(jsonusergroupexternal_autocomplete_element_response_2));
}

int main() {
  test_usergroupexternal_autocomplete_element_response(1);
  test_usergroupexternal_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_autocomplete_element_response_MAIN
#endif // usergroupexternal_autocomplete_element_response_TEST
