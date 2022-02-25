#ifndef ezsigndocument_get_temporary_proof_v1_response_m_payload_TEST
#define ezsigndocument_get_temporary_proof_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_get_temporary_proof_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_get_temporary_proof_v1_response_m_payload.h"
ezsigndocument_get_temporary_proof_v1_response_m_payload_t* instantiate_ezsigndocument_get_temporary_proof_v1_response_m_payload(int include_optional);

#include "test_ezsigndocumentlog_response.c"


ezsigndocument_get_temporary_proof_v1_response_m_payload_t* instantiate_ezsigndocument_get_temporary_proof_v1_response_m_payload(int include_optional) {
  ezsigndocument_get_temporary_proof_v1_response_m_payload_t* ezsigndocument_get_temporary_proof_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigndocument_get_temporary_proof_v1_response_m_payload = ezsigndocument_get_temporary_proof_v1_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_ezsigndocumentlog_response(0)
    );
  } else {
    ezsigndocument_get_temporary_proof_v1_response_m_payload = ezsigndocument_get_temporary_proof_v1_response_m_payload_create(
      NULL
    );
  }

  return ezsigndocument_get_temporary_proof_v1_response_m_payload;
}


#ifdef ezsigndocument_get_temporary_proof_v1_response_m_payload_MAIN

void test_ezsigndocument_get_temporary_proof_v1_response_m_payload(int include_optional) {
    ezsigndocument_get_temporary_proof_v1_response_m_payload_t* ezsigndocument_get_temporary_proof_v1_response_m_payload_1 = instantiate_ezsigndocument_get_temporary_proof_v1_response_m_payload(include_optional);

	cJSON* jsonezsigndocument_get_temporary_proof_v1_response_m_payload_1 = ezsigndocument_get_temporary_proof_v1_response_m_payload_convertToJSON(ezsigndocument_get_temporary_proof_v1_response_m_payload_1);
	printf("ezsigndocument_get_temporary_proof_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigndocument_get_temporary_proof_v1_response_m_payload_1));
	ezsigndocument_get_temporary_proof_v1_response_m_payload_t* ezsigndocument_get_temporary_proof_v1_response_m_payload_2 = ezsigndocument_get_temporary_proof_v1_response_m_payload_parseFromJSON(jsonezsigndocument_get_temporary_proof_v1_response_m_payload_1);
	cJSON* jsonezsigndocument_get_temporary_proof_v1_response_m_payload_2 = ezsigndocument_get_temporary_proof_v1_response_m_payload_convertToJSON(ezsigndocument_get_temporary_proof_v1_response_m_payload_2);
	printf("repeating ezsigndocument_get_temporary_proof_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigndocument_get_temporary_proof_v1_response_m_payload_2));
}

int main() {
  test_ezsigndocument_get_temporary_proof_v1_response_m_payload(1);
  test_ezsigndocument_get_temporary_proof_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_get_temporary_proof_v1_response_m_payload_MAIN
#endif // ezsigndocument_get_temporary_proof_v1_response_m_payload_TEST
