#ifndef cors_create_object_v1_response_m_payload_TEST
#define cors_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_create_object_v1_response_m_payload.h"
cors_create_object_v1_response_m_payload_t* instantiate_cors_create_object_v1_response_m_payload(int include_optional);



cors_create_object_v1_response_m_payload_t* instantiate_cors_create_object_v1_response_m_payload(int include_optional) {
  cors_create_object_v1_response_m_payload_t* cors_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    cors_create_object_v1_response_m_payload = cors_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    cors_create_object_v1_response_m_payload = cors_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return cors_create_object_v1_response_m_payload;
}


#ifdef cors_create_object_v1_response_m_payload_MAIN

void test_cors_create_object_v1_response_m_payload(int include_optional) {
    cors_create_object_v1_response_m_payload_t* cors_create_object_v1_response_m_payload_1 = instantiate_cors_create_object_v1_response_m_payload(include_optional);

	cJSON* jsoncors_create_object_v1_response_m_payload_1 = cors_create_object_v1_response_m_payload_convertToJSON(cors_create_object_v1_response_m_payload_1);
	printf("cors_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsoncors_create_object_v1_response_m_payload_1));
	cors_create_object_v1_response_m_payload_t* cors_create_object_v1_response_m_payload_2 = cors_create_object_v1_response_m_payload_parseFromJSON(jsoncors_create_object_v1_response_m_payload_1);
	cJSON* jsoncors_create_object_v1_response_m_payload_2 = cors_create_object_v1_response_m_payload_convertToJSON(cors_create_object_v1_response_m_payload_2);
	printf("repeating cors_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsoncors_create_object_v1_response_m_payload_2));
}

int main() {
  test_cors_create_object_v1_response_m_payload(1);
  test_cors_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_create_object_v1_response_m_payload_MAIN
#endif // cors_create_object_v1_response_m_payload_TEST
