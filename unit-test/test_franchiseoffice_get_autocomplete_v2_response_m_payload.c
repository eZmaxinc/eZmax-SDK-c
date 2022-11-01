#ifndef franchiseoffice_get_autocomplete_v2_response_m_payload_TEST
#define franchiseoffice_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchiseoffice_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchiseoffice_get_autocomplete_v2_response_m_payload.h"
franchiseoffice_get_autocomplete_v2_response_m_payload_t* instantiate_franchiseoffice_get_autocomplete_v2_response_m_payload(int include_optional);



franchiseoffice_get_autocomplete_v2_response_m_payload_t* instantiate_franchiseoffice_get_autocomplete_v2_response_m_payload(int include_optional) {
  franchiseoffice_get_autocomplete_v2_response_m_payload_t* franchiseoffice_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    franchiseoffice_get_autocomplete_v2_response_m_payload = franchiseoffice_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    franchiseoffice_get_autocomplete_v2_response_m_payload = franchiseoffice_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return franchiseoffice_get_autocomplete_v2_response_m_payload;
}


#ifdef franchiseoffice_get_autocomplete_v2_response_m_payload_MAIN

void test_franchiseoffice_get_autocomplete_v2_response_m_payload(int include_optional) {
    franchiseoffice_get_autocomplete_v2_response_m_payload_t* franchiseoffice_get_autocomplete_v2_response_m_payload_1 = instantiate_franchiseoffice_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonfranchiseoffice_get_autocomplete_v2_response_m_payload_1 = franchiseoffice_get_autocomplete_v2_response_m_payload_convertToJSON(franchiseoffice_get_autocomplete_v2_response_m_payload_1);
	printf("franchiseoffice_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonfranchiseoffice_get_autocomplete_v2_response_m_payload_1));
	franchiseoffice_get_autocomplete_v2_response_m_payload_t* franchiseoffice_get_autocomplete_v2_response_m_payload_2 = franchiseoffice_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonfranchiseoffice_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonfranchiseoffice_get_autocomplete_v2_response_m_payload_2 = franchiseoffice_get_autocomplete_v2_response_m_payload_convertToJSON(franchiseoffice_get_autocomplete_v2_response_m_payload_2);
	printf("repeating franchiseoffice_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonfranchiseoffice_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_franchiseoffice_get_autocomplete_v2_response_m_payload(1);
  test_franchiseoffice_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchiseoffice_get_autocomplete_v2_response_m_payload_MAIN
#endif // franchiseoffice_get_autocomplete_v2_response_m_payload_TEST
