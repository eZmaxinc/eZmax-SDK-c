#ifndef ezsignsignature_sign_v1_response_m_payload_TEST
#define ezsignsignature_sign_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_sign_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_sign_v1_response_m_payload.h"
ezsignsignature_sign_v1_response_m_payload_t* instantiate_ezsignsignature_sign_v1_response_m_payload(int include_optional);

#include "test_custom_timezone_with_code_response.c"


ezsignsignature_sign_v1_response_m_payload_t* instantiate_ezsignsignature_sign_v1_response_m_payload(int include_optional) {
  ezsignsignature_sign_v1_response_m_payload_t* ezsignsignature_sign_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignsignature_sign_v1_response_m_payload = ezsignsignature_sign_v1_response_m_payload_create(
      "2020-12-31 23:59:59",
       // false, not to have infinite recursion
      instantiate_custom_timezone_with_code_response(0)
    );
  } else {
    ezsignsignature_sign_v1_response_m_payload = ezsignsignature_sign_v1_response_m_payload_create(
      "2020-12-31 23:59:59",
      NULL
    );
  }

  return ezsignsignature_sign_v1_response_m_payload;
}


#ifdef ezsignsignature_sign_v1_response_m_payload_MAIN

void test_ezsignsignature_sign_v1_response_m_payload(int include_optional) {
    ezsignsignature_sign_v1_response_m_payload_t* ezsignsignature_sign_v1_response_m_payload_1 = instantiate_ezsignsignature_sign_v1_response_m_payload(include_optional);

	cJSON* jsonezsignsignature_sign_v1_response_m_payload_1 = ezsignsignature_sign_v1_response_m_payload_convertToJSON(ezsignsignature_sign_v1_response_m_payload_1);
	printf("ezsignsignature_sign_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_response_m_payload_1));
	ezsignsignature_sign_v1_response_m_payload_t* ezsignsignature_sign_v1_response_m_payload_2 = ezsignsignature_sign_v1_response_m_payload_parseFromJSON(jsonezsignsignature_sign_v1_response_m_payload_1);
	cJSON* jsonezsignsignature_sign_v1_response_m_payload_2 = ezsignsignature_sign_v1_response_m_payload_convertToJSON(ezsignsignature_sign_v1_response_m_payload_2);
	printf("repeating ezsignsignature_sign_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_response_m_payload_2));
}

int main() {
  test_ezsignsignature_sign_v1_response_m_payload(1);
  test_ezsignsignature_sign_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_sign_v1_response_m_payload_MAIN
#endif // ezsignsignature_sign_v1_response_m_payload_TEST
