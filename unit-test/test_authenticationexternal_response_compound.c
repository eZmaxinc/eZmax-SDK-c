#ifndef authenticationexternal_response_compound_TEST
#define authenticationexternal_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_response_compound.h"
authenticationexternal_response_compound_t* instantiate_authenticationexternal_response_compound(int include_optional);

#include "test_common_audit.c"


authenticationexternal_response_compound_t* instantiate_authenticationexternal_response_compound(int include_optional) {
  authenticationexternal_response_compound_t* authenticationexternal_response_compound = NULL;
  if (include_optional) {
    authenticationexternal_response_compound = authenticationexternal_response_compound_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_response_compound__"Salesforce",
      true,
      "http://www.website.com/authorize.php",
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    authenticationexternal_response_compound = authenticationexternal_response_compound_create(
      56,
      "Authentification",
      ezmax_api_definition__full_authenticationexternal_response_compound__"Salesforce",
      true,
      "http://www.website.com/authorize.php",
      NULL
    );
  }

  return authenticationexternal_response_compound;
}


#ifdef authenticationexternal_response_compound_MAIN

void test_authenticationexternal_response_compound(int include_optional) {
    authenticationexternal_response_compound_t* authenticationexternal_response_compound_1 = instantiate_authenticationexternal_response_compound(include_optional);

	cJSON* jsonauthenticationexternal_response_compound_1 = authenticationexternal_response_compound_convertToJSON(authenticationexternal_response_compound_1);
	printf("authenticationexternal_response_compound :\n%s\n", cJSON_Print(jsonauthenticationexternal_response_compound_1));
	authenticationexternal_response_compound_t* authenticationexternal_response_compound_2 = authenticationexternal_response_compound_parseFromJSON(jsonauthenticationexternal_response_compound_1);
	cJSON* jsonauthenticationexternal_response_compound_2 = authenticationexternal_response_compound_convertToJSON(authenticationexternal_response_compound_2);
	printf("repeating authenticationexternal_response_compound:\n%s\n", cJSON_Print(jsonauthenticationexternal_response_compound_2));
}

int main() {
  test_authenticationexternal_response_compound(1);
  test_authenticationexternal_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_response_compound_MAIN
#endif // authenticationexternal_response_compound_TEST
