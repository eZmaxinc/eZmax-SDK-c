#ifndef authenticationexternal_edit_object_v1_request_TEST
#define authenticationexternal_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_edit_object_v1_request.h"
authenticationexternal_edit_object_v1_request_t* instantiate_authenticationexternal_edit_object_v1_request(int include_optional);

#include "test_authenticationexternal_request_compound.c"


authenticationexternal_edit_object_v1_request_t* instantiate_authenticationexternal_edit_object_v1_request(int include_optional) {
  authenticationexternal_edit_object_v1_request_t* authenticationexternal_edit_object_v1_request = NULL;
  if (include_optional) {
    authenticationexternal_edit_object_v1_request = authenticationexternal_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_authenticationexternal_request_compound(0)
    );
  } else {
    authenticationexternal_edit_object_v1_request = authenticationexternal_edit_object_v1_request_create(
      NULL
    );
  }

  return authenticationexternal_edit_object_v1_request;
}


#ifdef authenticationexternal_edit_object_v1_request_MAIN

void test_authenticationexternal_edit_object_v1_request(int include_optional) {
    authenticationexternal_edit_object_v1_request_t* authenticationexternal_edit_object_v1_request_1 = instantiate_authenticationexternal_edit_object_v1_request(include_optional);

	cJSON* jsonauthenticationexternal_edit_object_v1_request_1 = authenticationexternal_edit_object_v1_request_convertToJSON(authenticationexternal_edit_object_v1_request_1);
	printf("authenticationexternal_edit_object_v1_request :\n%s\n", cJSON_Print(jsonauthenticationexternal_edit_object_v1_request_1));
	authenticationexternal_edit_object_v1_request_t* authenticationexternal_edit_object_v1_request_2 = authenticationexternal_edit_object_v1_request_parseFromJSON(jsonauthenticationexternal_edit_object_v1_request_1);
	cJSON* jsonauthenticationexternal_edit_object_v1_request_2 = authenticationexternal_edit_object_v1_request_convertToJSON(authenticationexternal_edit_object_v1_request_2);
	printf("repeating authenticationexternal_edit_object_v1_request:\n%s\n", cJSON_Print(jsonauthenticationexternal_edit_object_v1_request_2));
}

int main() {
  test_authenticationexternal_edit_object_v1_request(1);
  test_authenticationexternal_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_edit_object_v1_request_MAIN
#endif // authenticationexternal_edit_object_v1_request_TEST
