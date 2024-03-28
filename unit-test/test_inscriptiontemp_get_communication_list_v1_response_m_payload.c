#ifndef inscriptiontemp_get_communication_list_v1_response_m_payload_TEST
#define inscriptiontemp_get_communication_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inscriptiontemp_get_communication_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inscriptiontemp_get_communication_list_v1_response_m_payload.h"
inscriptiontemp_get_communication_list_v1_response_m_payload_t* instantiate_inscriptiontemp_get_communication_list_v1_response_m_payload(int include_optional);



inscriptiontemp_get_communication_list_v1_response_m_payload_t* instantiate_inscriptiontemp_get_communication_list_v1_response_m_payload(int include_optional) {
  inscriptiontemp_get_communication_list_v1_response_m_payload_t* inscriptiontemp_get_communication_list_v1_response_m_payload = NULL;
  if (include_optional) {
    inscriptiontemp_get_communication_list_v1_response_m_payload = inscriptiontemp_get_communication_list_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    inscriptiontemp_get_communication_list_v1_response_m_payload = inscriptiontemp_get_communication_list_v1_response_m_payload_create(
      list_createList()
    );
  }

  return inscriptiontemp_get_communication_list_v1_response_m_payload;
}


#ifdef inscriptiontemp_get_communication_list_v1_response_m_payload_MAIN

void test_inscriptiontemp_get_communication_list_v1_response_m_payload(int include_optional) {
    inscriptiontemp_get_communication_list_v1_response_m_payload_t* inscriptiontemp_get_communication_list_v1_response_m_payload_1 = instantiate_inscriptiontemp_get_communication_list_v1_response_m_payload(include_optional);

	cJSON* jsoninscriptiontemp_get_communication_list_v1_response_m_payload_1 = inscriptiontemp_get_communication_list_v1_response_m_payload_convertToJSON(inscriptiontemp_get_communication_list_v1_response_m_payload_1);
	printf("inscriptiontemp_get_communication_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsoninscriptiontemp_get_communication_list_v1_response_m_payload_1));
	inscriptiontemp_get_communication_list_v1_response_m_payload_t* inscriptiontemp_get_communication_list_v1_response_m_payload_2 = inscriptiontemp_get_communication_list_v1_response_m_payload_parseFromJSON(jsoninscriptiontemp_get_communication_list_v1_response_m_payload_1);
	cJSON* jsoninscriptiontemp_get_communication_list_v1_response_m_payload_2 = inscriptiontemp_get_communication_list_v1_response_m_payload_convertToJSON(inscriptiontemp_get_communication_list_v1_response_m_payload_2);
	printf("repeating inscriptiontemp_get_communication_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsoninscriptiontemp_get_communication_list_v1_response_m_payload_2));
}

int main() {
  test_inscriptiontemp_get_communication_list_v1_response_m_payload(1);
  test_inscriptiontemp_get_communication_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // inscriptiontemp_get_communication_list_v1_response_m_payload_MAIN
#endif // inscriptiontemp_get_communication_list_v1_response_m_payload_TEST