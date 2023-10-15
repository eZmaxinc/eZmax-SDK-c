#ifndef userlogintype_autocomplete_element_response_TEST
#define userlogintype_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userlogintype_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userlogintype_autocomplete_element_response.h"
userlogintype_autocomplete_element_response_t* instantiate_userlogintype_autocomplete_element_response(int include_optional);



userlogintype_autocomplete_element_response_t* instantiate_userlogintype_autocomplete_element_response(int include_optional) {
  userlogintype_autocomplete_element_response_t* userlogintype_autocomplete_element_response = NULL;
  if (include_optional) {
    userlogintype_autocomplete_element_response = userlogintype_autocomplete_element_response_create(
      2,
      "Email and phone or SMS",
      true
    );
  } else {
    userlogintype_autocomplete_element_response = userlogintype_autocomplete_element_response_create(
      2,
      "Email and phone or SMS",
      true
    );
  }

  return userlogintype_autocomplete_element_response;
}


#ifdef userlogintype_autocomplete_element_response_MAIN

void test_userlogintype_autocomplete_element_response(int include_optional) {
    userlogintype_autocomplete_element_response_t* userlogintype_autocomplete_element_response_1 = instantiate_userlogintype_autocomplete_element_response(include_optional);

	cJSON* jsonuserlogintype_autocomplete_element_response_1 = userlogintype_autocomplete_element_response_convertToJSON(userlogintype_autocomplete_element_response_1);
	printf("userlogintype_autocomplete_element_response :\n%s\n", cJSON_Print(jsonuserlogintype_autocomplete_element_response_1));
	userlogintype_autocomplete_element_response_t* userlogintype_autocomplete_element_response_2 = userlogintype_autocomplete_element_response_parseFromJSON(jsonuserlogintype_autocomplete_element_response_1);
	cJSON* jsonuserlogintype_autocomplete_element_response_2 = userlogintype_autocomplete_element_response_convertToJSON(userlogintype_autocomplete_element_response_2);
	printf("repeating userlogintype_autocomplete_element_response:\n%s\n", cJSON_Print(jsonuserlogintype_autocomplete_element_response_2));
}

int main() {
  test_userlogintype_autocomplete_element_response(1);
  test_userlogintype_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // userlogintype_autocomplete_element_response_MAIN
#endif // userlogintype_autocomplete_element_response_TEST
