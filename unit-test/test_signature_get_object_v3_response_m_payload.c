#ifndef signature_get_object_v3_response_m_payload_TEST
#define signature_get_object_v3_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_get_object_v3_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_get_object_v3_response_m_payload.h"
signature_get_object_v3_response_m_payload_t* instantiate_signature_get_object_v3_response_m_payload(int include_optional);

#include "test_signature_response_compound_v3.c"


signature_get_object_v3_response_m_payload_t* instantiate_signature_get_object_v3_response_m_payload(int include_optional) {
  signature_get_object_v3_response_m_payload_t* signature_get_object_v3_response_m_payload = NULL;
  if (include_optional) {
    signature_get_object_v3_response_m_payload = signature_get_object_v3_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_signature_response_compound_v3(0)
    );
  } else {
    signature_get_object_v3_response_m_payload = signature_get_object_v3_response_m_payload_create(
      NULL
    );
  }

  return signature_get_object_v3_response_m_payload;
}


#ifdef signature_get_object_v3_response_m_payload_MAIN

void test_signature_get_object_v3_response_m_payload(int include_optional) {
    signature_get_object_v3_response_m_payload_t* signature_get_object_v3_response_m_payload_1 = instantiate_signature_get_object_v3_response_m_payload(include_optional);

	cJSON* jsonsignature_get_object_v3_response_m_payload_1 = signature_get_object_v3_response_m_payload_convertToJSON(signature_get_object_v3_response_m_payload_1);
	printf("signature_get_object_v3_response_m_payload :\n%s\n", cJSON_Print(jsonsignature_get_object_v3_response_m_payload_1));
	signature_get_object_v3_response_m_payload_t* signature_get_object_v3_response_m_payload_2 = signature_get_object_v3_response_m_payload_parseFromJSON(jsonsignature_get_object_v3_response_m_payload_1);
	cJSON* jsonsignature_get_object_v3_response_m_payload_2 = signature_get_object_v3_response_m_payload_convertToJSON(signature_get_object_v3_response_m_payload_2);
	printf("repeating signature_get_object_v3_response_m_payload:\n%s\n", cJSON_Print(jsonsignature_get_object_v3_response_m_payload_2));
}

int main() {
  test_signature_get_object_v3_response_m_payload(1);
  test_signature_get_object_v3_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_get_object_v3_response_m_payload_MAIN
#endif // signature_get_object_v3_response_m_payload_TEST
