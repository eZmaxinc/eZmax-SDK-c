#ifndef apikey_create_object_v2_response_all_of_TEST
#define apikey_create_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_create_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_create_object_v2_response_all_of.h"
apikey_create_object_v2_response_all_of_t* instantiate_apikey_create_object_v2_response_all_of(int include_optional);

#include "test_apikey_create_object_v2_response_m_payload.c"


apikey_create_object_v2_response_all_of_t* instantiate_apikey_create_object_v2_response_all_of(int include_optional) {
  apikey_create_object_v2_response_all_of_t* apikey_create_object_v2_response_all_of = NULL;
  if (include_optional) {
    apikey_create_object_v2_response_all_of = apikey_create_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_apikey_create_object_v2_response_m_payload(0)
    );
  } else {
    apikey_create_object_v2_response_all_of = apikey_create_object_v2_response_all_of_create(
      NULL
    );
  }

  return apikey_create_object_v2_response_all_of;
}


#ifdef apikey_create_object_v2_response_all_of_MAIN

void test_apikey_create_object_v2_response_all_of(int include_optional) {
    apikey_create_object_v2_response_all_of_t* apikey_create_object_v2_response_all_of_1 = instantiate_apikey_create_object_v2_response_all_of(include_optional);

	cJSON* jsonapikey_create_object_v2_response_all_of_1 = apikey_create_object_v2_response_all_of_convertToJSON(apikey_create_object_v2_response_all_of_1);
	printf("apikey_create_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonapikey_create_object_v2_response_all_of_1));
	apikey_create_object_v2_response_all_of_t* apikey_create_object_v2_response_all_of_2 = apikey_create_object_v2_response_all_of_parseFromJSON(jsonapikey_create_object_v2_response_all_of_1);
	cJSON* jsonapikey_create_object_v2_response_all_of_2 = apikey_create_object_v2_response_all_of_convertToJSON(apikey_create_object_v2_response_all_of_2);
	printf("repeating apikey_create_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonapikey_create_object_v2_response_all_of_2));
}

int main() {
  test_apikey_create_object_v2_response_all_of(1);
  test_apikey_create_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_create_object_v2_response_all_of_MAIN
#endif // apikey_create_object_v2_response_all_of_TEST
