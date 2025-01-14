#ifndef authenticationexternal_request_compound_TEST
#define authenticationexternal_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_request_compound.h"
authenticationexternal_request_compound_t* instantiate_authenticationexternal_request_compound(int include_optional);



authenticationexternal_request_compound_t* instantiate_authenticationexternal_request_compound(int include_optional) {
  authenticationexternal_request_compound_t* authenticationexternal_request_compound = NULL;
  if (include_optional) {
    authenticationexternal_request_compound = authenticationexternal_request_compound_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_request_compound__"Salesforce"
    );
  } else {
    authenticationexternal_request_compound = authenticationexternal_request_compound_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_request_compound__"Salesforce"
    );
  }

  return authenticationexternal_request_compound;
}


#ifdef authenticationexternal_request_compound_MAIN

void test_authenticationexternal_request_compound(int include_optional) {
    authenticationexternal_request_compound_t* authenticationexternal_request_compound_1 = instantiate_authenticationexternal_request_compound(include_optional);

	cJSON* jsonauthenticationexternal_request_compound_1 = authenticationexternal_request_compound_convertToJSON(authenticationexternal_request_compound_1);
	printf("authenticationexternal_request_compound :\n%s\n", cJSON_Print(jsonauthenticationexternal_request_compound_1));
	authenticationexternal_request_compound_t* authenticationexternal_request_compound_2 = authenticationexternal_request_compound_parseFromJSON(jsonauthenticationexternal_request_compound_1);
	cJSON* jsonauthenticationexternal_request_compound_2 = authenticationexternal_request_compound_convertToJSON(authenticationexternal_request_compound_2);
	printf("repeating authenticationexternal_request_compound:\n%s\n", cJSON_Print(jsonauthenticationexternal_request_compound_2));
}

int main() {
  test_authenticationexternal_request_compound(1);
  test_authenticationexternal_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_request_compound_MAIN
#endif // authenticationexternal_request_compound_TEST
