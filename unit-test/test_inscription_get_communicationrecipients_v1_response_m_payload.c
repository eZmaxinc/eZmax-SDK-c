#ifndef inscription_get_communicationrecipients_v1_response_m_payload_TEST
#define inscription_get_communicationrecipients_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inscription_get_communicationrecipients_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inscription_get_communicationrecipients_v1_response_m_payload.h"
inscription_get_communicationrecipients_v1_response_m_payload_t* instantiate_inscription_get_communicationrecipients_v1_response_m_payload(int include_optional);



inscription_get_communicationrecipients_v1_response_m_payload_t* instantiate_inscription_get_communicationrecipients_v1_response_m_payload(int include_optional) {
  inscription_get_communicationrecipients_v1_response_m_payload_t* inscription_get_communicationrecipients_v1_response_m_payload = NULL;
  if (include_optional) {
    inscription_get_communicationrecipients_v1_response_m_payload = inscription_get_communicationrecipients_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    inscription_get_communicationrecipients_v1_response_m_payload = inscription_get_communicationrecipients_v1_response_m_payload_create(
      list_createList()
    );
  }

  return inscription_get_communicationrecipients_v1_response_m_payload;
}


#ifdef inscription_get_communicationrecipients_v1_response_m_payload_MAIN

void test_inscription_get_communicationrecipients_v1_response_m_payload(int include_optional) {
    inscription_get_communicationrecipients_v1_response_m_payload_t* inscription_get_communicationrecipients_v1_response_m_payload_1 = instantiate_inscription_get_communicationrecipients_v1_response_m_payload(include_optional);

	cJSON* jsoninscription_get_communicationrecipients_v1_response_m_payload_1 = inscription_get_communicationrecipients_v1_response_m_payload_convertToJSON(inscription_get_communicationrecipients_v1_response_m_payload_1);
	printf("inscription_get_communicationrecipients_v1_response_m_payload :\n%s\n", cJSON_Print(jsoninscription_get_communicationrecipients_v1_response_m_payload_1));
	inscription_get_communicationrecipients_v1_response_m_payload_t* inscription_get_communicationrecipients_v1_response_m_payload_2 = inscription_get_communicationrecipients_v1_response_m_payload_parseFromJSON(jsoninscription_get_communicationrecipients_v1_response_m_payload_1);
	cJSON* jsoninscription_get_communicationrecipients_v1_response_m_payload_2 = inscription_get_communicationrecipients_v1_response_m_payload_convertToJSON(inscription_get_communicationrecipients_v1_response_m_payload_2);
	printf("repeating inscription_get_communicationrecipients_v1_response_m_payload:\n%s\n", cJSON_Print(jsoninscription_get_communicationrecipients_v1_response_m_payload_2));
}

int main() {
  test_inscription_get_communicationrecipients_v1_response_m_payload(1);
  test_inscription_get_communicationrecipients_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // inscription_get_communicationrecipients_v1_response_m_payload_MAIN
#endif // inscription_get_communicationrecipients_v1_response_m_payload_TEST
