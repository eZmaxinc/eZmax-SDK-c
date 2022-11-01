#ifndef franchisebroker_get_autocomplete_v2_response_m_payload_TEST
#define franchisebroker_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisebroker_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisebroker_get_autocomplete_v2_response_m_payload.h"
franchisebroker_get_autocomplete_v2_response_m_payload_t* instantiate_franchisebroker_get_autocomplete_v2_response_m_payload(int include_optional);



franchisebroker_get_autocomplete_v2_response_m_payload_t* instantiate_franchisebroker_get_autocomplete_v2_response_m_payload(int include_optional) {
  franchisebroker_get_autocomplete_v2_response_m_payload_t* franchisebroker_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    franchisebroker_get_autocomplete_v2_response_m_payload = franchisebroker_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    franchisebroker_get_autocomplete_v2_response_m_payload = franchisebroker_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return franchisebroker_get_autocomplete_v2_response_m_payload;
}


#ifdef franchisebroker_get_autocomplete_v2_response_m_payload_MAIN

void test_franchisebroker_get_autocomplete_v2_response_m_payload(int include_optional) {
    franchisebroker_get_autocomplete_v2_response_m_payload_t* franchisebroker_get_autocomplete_v2_response_m_payload_1 = instantiate_franchisebroker_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonfranchisebroker_get_autocomplete_v2_response_m_payload_1 = franchisebroker_get_autocomplete_v2_response_m_payload_convertToJSON(franchisebroker_get_autocomplete_v2_response_m_payload_1);
	printf("franchisebroker_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonfranchisebroker_get_autocomplete_v2_response_m_payload_1));
	franchisebroker_get_autocomplete_v2_response_m_payload_t* franchisebroker_get_autocomplete_v2_response_m_payload_2 = franchisebroker_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonfranchisebroker_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonfranchisebroker_get_autocomplete_v2_response_m_payload_2 = franchisebroker_get_autocomplete_v2_response_m_payload_convertToJSON(franchisebroker_get_autocomplete_v2_response_m_payload_2);
	printf("repeating franchisebroker_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonfranchisebroker_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_franchisebroker_get_autocomplete_v2_response_m_payload(1);
  test_franchisebroker_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisebroker_get_autocomplete_v2_response_m_payload_MAIN
#endif // franchisebroker_get_autocomplete_v2_response_m_payload_TEST
