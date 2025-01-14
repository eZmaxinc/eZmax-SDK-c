#ifndef authenticationexternal_create_object_v1_request_TEST
#define authenticationexternal_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticationexternal_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticationexternal_create_object_v1_request.h"
authenticationexternal_create_object_v1_request_t* instantiate_authenticationexternal_create_object_v1_request(int include_optional);



authenticationexternal_create_object_v1_request_t* instantiate_authenticationexternal_create_object_v1_request(int include_optional) {
  authenticationexternal_create_object_v1_request_t* authenticationexternal_create_object_v1_request = NULL;
  if (include_optional) {
    authenticationexternal_create_object_v1_request = authenticationexternal_create_object_v1_request_create(
      list_createList()
    );
  } else {
    authenticationexternal_create_object_v1_request = authenticationexternal_create_object_v1_request_create(
      list_createList()
    );
  }

  return authenticationexternal_create_object_v1_request;
}


#ifdef authenticationexternal_create_object_v1_request_MAIN

void test_authenticationexternal_create_object_v1_request(int include_optional) {
    authenticationexternal_create_object_v1_request_t* authenticationexternal_create_object_v1_request_1 = instantiate_authenticationexternal_create_object_v1_request(include_optional);

	cJSON* jsonauthenticationexternal_create_object_v1_request_1 = authenticationexternal_create_object_v1_request_convertToJSON(authenticationexternal_create_object_v1_request_1);
	printf("authenticationexternal_create_object_v1_request :\n%s\n", cJSON_Print(jsonauthenticationexternal_create_object_v1_request_1));
	authenticationexternal_create_object_v1_request_t* authenticationexternal_create_object_v1_request_2 = authenticationexternal_create_object_v1_request_parseFromJSON(jsonauthenticationexternal_create_object_v1_request_1);
	cJSON* jsonauthenticationexternal_create_object_v1_request_2 = authenticationexternal_create_object_v1_request_convertToJSON(authenticationexternal_create_object_v1_request_2);
	printf("repeating authenticationexternal_create_object_v1_request:\n%s\n", cJSON_Print(jsonauthenticationexternal_create_object_v1_request_2));
}

int main() {
  test_authenticationexternal_create_object_v1_request(1);
  test_authenticationexternal_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticationexternal_create_object_v1_request_MAIN
#endif // authenticationexternal_create_object_v1_request_TEST
