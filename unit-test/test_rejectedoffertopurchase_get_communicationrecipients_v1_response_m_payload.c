#ifndef rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_TEST
#define rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload.h"
rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_t* instantiate_rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload(int include_optional);



rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_t* instantiate_rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload(int include_optional) {
  rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_t* rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload = NULL;
  if (include_optional) {
    rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload = rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload = rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_create(
      list_createList()
    );
  }

  return rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload;
}


#ifdef rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_MAIN

void test_rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload(int include_optional) {
    rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_t* rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_1 = instantiate_rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload(include_optional);

	cJSON* jsonrejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_1 = rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_convertToJSON(rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_1);
	printf("rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload :\n%s\n", cJSON_Print(jsonrejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_1));
	rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_t* rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_2 = rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_parseFromJSON(jsonrejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_1);
	cJSON* jsonrejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_2 = rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_convertToJSON(rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_2);
	printf("repeating rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload:\n%s\n", cJSON_Print(jsonrejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_2));
}

int main() {
  test_rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload(1);
  test_rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_MAIN
#endif // rejectedoffertopurchase_get_communicationrecipients_v1_response_m_payload_TEST
