#ifndef authenticationexternal_autocomplete_element_response_TEST
#define authenticationexternal_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_autocomplete_element_response.h"
authenticationexternal_autocomplete_element_response_t* instantiate_authenticationexternal_autocomplete_element_response(int include_optional);



authenticationexternal_autocomplete_element_response_t* instantiate_authenticationexternal_autocomplete_element_response(int include_optional) {
  authenticationexternal_autocomplete_element_response_t* authenticationexternal_autocomplete_element_response = NULL;
  if (include_optional) {
    authenticationexternal_autocomplete_element_response = authenticationexternal_autocomplete_element_response_create(
      56,
      "Authentification",
      1
    );
  } else {
    authenticationexternal_autocomplete_element_response = authenticationexternal_autocomplete_element_response_create(
      56,
      "Authentification",
      1
    );
  }

  return authenticationexternal_autocomplete_element_response;
}


#ifdef authenticationexternal_autocomplete_element_response_MAIN

void test_authenticationexternal_autocomplete_element_response(int include_optional) {
    authenticationexternal_autocomplete_element_response_t* authenticationexternal_autocomplete_element_response_1 = instantiate_authenticationexternal_autocomplete_element_response(include_optional);

	cJSON* jsonauthenticationexternal_autocomplete_element_response_1 = authenticationexternal_autocomplete_element_response_convertToJSON(authenticationexternal_autocomplete_element_response_1);
	printf("authenticationexternal_autocomplete_element_response :\n%s\n", cJSON_Print(jsonauthenticationexternal_autocomplete_element_response_1));
	authenticationexternal_autocomplete_element_response_t* authenticationexternal_autocomplete_element_response_2 = authenticationexternal_autocomplete_element_response_parseFromJSON(jsonauthenticationexternal_autocomplete_element_response_1);
	cJSON* jsonauthenticationexternal_autocomplete_element_response_2 = authenticationexternal_autocomplete_element_response_convertToJSON(authenticationexternal_autocomplete_element_response_2);
	printf("repeating authenticationexternal_autocomplete_element_response:\n%s\n", cJSON_Print(jsonauthenticationexternal_autocomplete_element_response_2));
}

int main() {
  test_authenticationexternal_autocomplete_element_response(1);
  test_authenticationexternal_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_autocomplete_element_response_MAIN
#endif // authenticationexternal_autocomplete_element_response_TEST
