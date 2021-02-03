#ifndef apikey_create_object_v1_response_m_payload_TEST
#define apikey_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_create_object_v1_response_m_payload.h"
apikey_create_object_v1_response_m_payload_t* instantiate_apikey_create_object_v1_response_m_payload(int include_optional);



apikey_create_object_v1_response_m_payload_t* instantiate_apikey_create_object_v1_response_m_payload(int include_optional) {
  apikey_create_object_v1_response_m_payload_t* apikey_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    apikey_create_object_v1_response_m_payload = apikey_create_object_v1_response_m_payload_create(
      list_create()
    );
  } else {
    apikey_create_object_v1_response_m_payload = apikey_create_object_v1_response_m_payload_create(
      list_create()
    );
  }

  return apikey_create_object_v1_response_m_payload;
}


#ifdef apikey_create_object_v1_response_m_payload_MAIN

void test_apikey_create_object_v1_response_m_payload(int include_optional) {
    apikey_create_object_v1_response_m_payload_t* apikey_create_object_v1_response_m_payload_1 = instantiate_apikey_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonapikey_create_object_v1_response_m_payload_1 = apikey_create_object_v1_response_m_payload_convertToJSON(apikey_create_object_v1_response_m_payload_1);
	printf("apikey_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonapikey_create_object_v1_response_m_payload_1));
	apikey_create_object_v1_response_m_payload_t* apikey_create_object_v1_response_m_payload_2 = apikey_create_object_v1_response_m_payload_parseFromJSON(jsonapikey_create_object_v1_response_m_payload_1);
	cJSON* jsonapikey_create_object_v1_response_m_payload_2 = apikey_create_object_v1_response_m_payload_convertToJSON(apikey_create_object_v1_response_m_payload_2);
	printf("repeating apikey_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonapikey_create_object_v1_response_m_payload_2));
}

int main() {
  test_apikey_create_object_v1_response_m_payload(1);
  test_apikey_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_create_object_v1_response_m_payload_MAIN
#endif // apikey_create_object_v1_response_m_payload_TEST
