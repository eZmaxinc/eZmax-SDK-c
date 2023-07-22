#ifndef scim_authentication_scheme_TEST
#define scim_authentication_scheme_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_authentication_scheme_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_authentication_scheme.h"
scim_authentication_scheme_t* instantiate_scim_authentication_scheme(int include_optional);



scim_authentication_scheme_t* instantiate_scim_authentication_scheme(int include_optional) {
  scim_authentication_scheme_t* scim_authentication_scheme = NULL;
  if (include_optional) {
    scim_authentication_scheme = scim_authentication_scheme_create(
      "Bearer token in the Authorization header",
      "Bearer",
      ezmax_api_definition__full_scim_authentication_scheme_TYPE_"oauthbearertoken"
    );
  } else {
    scim_authentication_scheme = scim_authentication_scheme_create(
      "Bearer token in the Authorization header",
      "Bearer",
      ezmax_api_definition__full_scim_authentication_scheme_TYPE_"oauthbearertoken"
    );
  }

  return scim_authentication_scheme;
}


#ifdef scim_authentication_scheme_MAIN

void test_scim_authentication_scheme(int include_optional) {
    scim_authentication_scheme_t* scim_authentication_scheme_1 = instantiate_scim_authentication_scheme(include_optional);

	cJSON* jsonscim_authentication_scheme_1 = scim_authentication_scheme_convertToJSON(scim_authentication_scheme_1);
	printf("scim_authentication_scheme :\n%s\n", cJSON_Print(jsonscim_authentication_scheme_1));
	scim_authentication_scheme_t* scim_authentication_scheme_2 = scim_authentication_scheme_parseFromJSON(jsonscim_authentication_scheme_1);
	cJSON* jsonscim_authentication_scheme_2 = scim_authentication_scheme_convertToJSON(scim_authentication_scheme_2);
	printf("repeating scim_authentication_scheme:\n%s\n", cJSON_Print(jsonscim_authentication_scheme_2));
}

int main() {
  test_scim_authentication_scheme(1);
  test_scim_authentication_scheme(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_authentication_scheme_MAIN
#endif // scim_authentication_scheme_TEST
