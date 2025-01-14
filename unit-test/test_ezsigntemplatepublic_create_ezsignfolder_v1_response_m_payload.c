#ifndef ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_TEST
#define ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload.h"
ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t* instantiate_ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload(int include_optional);



ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t* instantiate_ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload(int include_optional) {
  ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t* ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create(
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}"
    );
  } else {
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create(
      "https://prod.ezsignsigner.ca-central-1.ezmax.com/ezsigntemplatepublic/{sEzmaxcustomerCode}/{sEzsigntemplatepublicReferenceID}"
    );
  }

  return ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload;
}


#ifdef ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_MAIN

void test_ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload(int include_optional) {
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t* ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_1 = instantiate_ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_1 = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_1);
	printf("ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_1));
	ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t* ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_2 = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_2 = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload(1);
  test_ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_MAIN
#endif // ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_TEST
