#ifndef inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_TEST
#define inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload.h"
inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t* instantiate_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload(int include_optional);



inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t* instantiate_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload(int include_optional) {
  inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t* inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload = NULL;
  if (include_optional) {
    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload = inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload = inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_create(
      list_createList()
    );
  }

  return inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload;
}


#ifdef inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_MAIN

void test_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload(int include_optional) {
    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t* inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_1 = instantiate_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload(include_optional);

	cJSON* jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_1 = inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_1);
	printf("inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload :\n%s\n", cJSON_Print(jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_1));
	inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t* inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_2 = inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_parseFromJSON(jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_1);
	cJSON* jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_2 = inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_2);
	printf("repeating inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload:\n%s\n", cJSON_Print(jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_2));
}

int main() {
  test_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload(1);
  test_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_MAIN
#endif // inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_TEST
