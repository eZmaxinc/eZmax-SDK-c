#ifndef ezsigntemplatepublic_reset_url_v1_response_m_payload_TEST
#define ezsigntemplatepublic_reset_url_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_reset_url_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_reset_url_v1_response_m_payload.h"
ezsigntemplatepublic_reset_url_v1_response_m_payload_t* instantiate_ezsigntemplatepublic_reset_url_v1_response_m_payload(int include_optional);



ezsigntemplatepublic_reset_url_v1_response_m_payload_t* instantiate_ezsigntemplatepublic_reset_url_v1_response_m_payload(int include_optional) {
  ezsigntemplatepublic_reset_url_v1_response_m_payload_t* ezsigntemplatepublic_reset_url_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepublic_reset_url_v1_response_m_payload = ezsigntemplatepublic_reset_url_v1_response_m_payload_create(
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}"
    );
  } else {
    ezsigntemplatepublic_reset_url_v1_response_m_payload = ezsigntemplatepublic_reset_url_v1_response_m_payload_create(
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}"
    );
  }

  return ezsigntemplatepublic_reset_url_v1_response_m_payload;
}


#ifdef ezsigntemplatepublic_reset_url_v1_response_m_payload_MAIN

void test_ezsigntemplatepublic_reset_url_v1_response_m_payload(int include_optional) {
    ezsigntemplatepublic_reset_url_v1_response_m_payload_t* ezsigntemplatepublic_reset_url_v1_response_m_payload_1 = instantiate_ezsigntemplatepublic_reset_url_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepublic_reset_url_v1_response_m_payload_1 = ezsigntemplatepublic_reset_url_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_reset_url_v1_response_m_payload_1);
	printf("ezsigntemplatepublic_reset_url_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_reset_url_v1_response_m_payload_1));
	ezsigntemplatepublic_reset_url_v1_response_m_payload_t* ezsigntemplatepublic_reset_url_v1_response_m_payload_2 = ezsigntemplatepublic_reset_url_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepublic_reset_url_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepublic_reset_url_v1_response_m_payload_2 = ezsigntemplatepublic_reset_url_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_reset_url_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepublic_reset_url_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_reset_url_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepublic_reset_url_v1_response_m_payload(1);
  test_ezsigntemplatepublic_reset_url_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_reset_url_v1_response_m_payload_MAIN
#endif // ezsigntemplatepublic_reset_url_v1_response_m_payload_TEST
