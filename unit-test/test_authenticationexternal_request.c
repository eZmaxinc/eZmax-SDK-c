#ifndef authenticationexternal_request_TEST
#define authenticationexternal_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_request.h"
authenticationexternal_request_t* instantiate_authenticationexternal_request(int include_optional);



authenticationexternal_request_t* instantiate_authenticationexternal_request(int include_optional) {
  authenticationexternal_request_t* authenticationexternal_request = NULL;
  if (include_optional) {
    authenticationexternal_request = authenticationexternal_request_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_request__"Salesforce"
    );
  } else {
    authenticationexternal_request = authenticationexternal_request_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_request__"Salesforce"
    );
  }

  return authenticationexternal_request;
}


#ifdef authenticationexternal_request_MAIN

void test_authenticationexternal_request(int include_optional) {
    authenticationexternal_request_t* authenticationexternal_request_1 = instantiate_authenticationexternal_request(include_optional);

	cJSON* jsonauthenticationexternal_request_1 = authenticationexternal_request_convertToJSON(authenticationexternal_request_1);
	printf("authenticationexternal_request :\n%s\n", cJSON_Print(jsonauthenticationexternal_request_1));
	authenticationexternal_request_t* authenticationexternal_request_2 = authenticationexternal_request_parseFromJSON(jsonauthenticationexternal_request_1);
	cJSON* jsonauthenticationexternal_request_2 = authenticationexternal_request_convertToJSON(authenticationexternal_request_2);
	printf("repeating authenticationexternal_request:\n%s\n", cJSON_Print(jsonauthenticationexternal_request_2));
}

int main() {
  test_authenticationexternal_request(1);
  test_authenticationexternal_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_request_MAIN
#endif // authenticationexternal_request_TEST
