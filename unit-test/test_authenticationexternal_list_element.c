#ifndef authenticationexternal_list_element_TEST
#define authenticationexternal_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_list_element.h"
authenticationexternal_list_element_t* instantiate_authenticationexternal_list_element(int include_optional);



authenticationexternal_list_element_t* instantiate_authenticationexternal_list_element(int include_optional) {
  authenticationexternal_list_element_t* authenticationexternal_list_element = NULL;
  if (include_optional) {
    authenticationexternal_list_element = authenticationexternal_list_element_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_list_element__"Salesforce",
      true
    );
  } else {
    authenticationexternal_list_element = authenticationexternal_list_element_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_list_element__"Salesforce",
      true
    );
  }

  return authenticationexternal_list_element;
}


#ifdef authenticationexternal_list_element_MAIN

void test_authenticationexternal_list_element(int include_optional) {
    authenticationexternal_list_element_t* authenticationexternal_list_element_1 = instantiate_authenticationexternal_list_element(include_optional);

	cJSON* jsonauthenticationexternal_list_element_1 = authenticationexternal_list_element_convertToJSON(authenticationexternal_list_element_1);
	printf("authenticationexternal_list_element :\n%s\n", cJSON_Print(jsonauthenticationexternal_list_element_1));
	authenticationexternal_list_element_t* authenticationexternal_list_element_2 = authenticationexternal_list_element_parseFromJSON(jsonauthenticationexternal_list_element_1);
	cJSON* jsonauthenticationexternal_list_element_2 = authenticationexternal_list_element_convertToJSON(authenticationexternal_list_element_2);
	printf("repeating authenticationexternal_list_element:\n%s\n", cJSON_Print(jsonauthenticationexternal_list_element_2));
}

int main() {
  test_authenticationexternal_list_element(1);
  test_authenticationexternal_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_list_element_MAIN
#endif // authenticationexternal_list_element_TEST
