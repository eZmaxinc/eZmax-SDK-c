#ifndef cors_get_object_v2_response_m_payload_TEST
#define cors_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_get_object_v2_response_m_payload.h"
cors_get_object_v2_response_m_payload_t* instantiate_cors_get_object_v2_response_m_payload(int include_optional);

#include "test_cors_response_compound.c"


cors_get_object_v2_response_m_payload_t* instantiate_cors_get_object_v2_response_m_payload(int include_optional) {
  cors_get_object_v2_response_m_payload_t* cors_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    cors_get_object_v2_response_m_payload = cors_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_cors_response_compound(0)
    );
  } else {
    cors_get_object_v2_response_m_payload = cors_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return cors_get_object_v2_response_m_payload;
}


#ifdef cors_get_object_v2_response_m_payload_MAIN

void test_cors_get_object_v2_response_m_payload(int include_optional) {
    cors_get_object_v2_response_m_payload_t* cors_get_object_v2_response_m_payload_1 = instantiate_cors_get_object_v2_response_m_payload(include_optional);

	cJSON* jsoncors_get_object_v2_response_m_payload_1 = cors_get_object_v2_response_m_payload_convertToJSON(cors_get_object_v2_response_m_payload_1);
	printf("cors_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsoncors_get_object_v2_response_m_payload_1));
	cors_get_object_v2_response_m_payload_t* cors_get_object_v2_response_m_payload_2 = cors_get_object_v2_response_m_payload_parseFromJSON(jsoncors_get_object_v2_response_m_payload_1);
	cJSON* jsoncors_get_object_v2_response_m_payload_2 = cors_get_object_v2_response_m_payload_convertToJSON(cors_get_object_v2_response_m_payload_2);
	printf("repeating cors_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsoncors_get_object_v2_response_m_payload_2));
}

int main() {
  test_cors_get_object_v2_response_m_payload(1);
  test_cors_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_get_object_v2_response_m_payload_MAIN
#endif // cors_get_object_v2_response_m_payload_TEST
