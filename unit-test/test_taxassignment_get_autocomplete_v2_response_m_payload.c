#ifndef taxassignment_get_autocomplete_v2_response_m_payload_TEST
#define taxassignment_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define taxassignment_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/taxassignment_get_autocomplete_v2_response_m_payload.h"
taxassignment_get_autocomplete_v2_response_m_payload_t* instantiate_taxassignment_get_autocomplete_v2_response_m_payload(int include_optional);



taxassignment_get_autocomplete_v2_response_m_payload_t* instantiate_taxassignment_get_autocomplete_v2_response_m_payload(int include_optional) {
  taxassignment_get_autocomplete_v2_response_m_payload_t* taxassignment_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    taxassignment_get_autocomplete_v2_response_m_payload = taxassignment_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    taxassignment_get_autocomplete_v2_response_m_payload = taxassignment_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return taxassignment_get_autocomplete_v2_response_m_payload;
}


#ifdef taxassignment_get_autocomplete_v2_response_m_payload_MAIN

void test_taxassignment_get_autocomplete_v2_response_m_payload(int include_optional) {
    taxassignment_get_autocomplete_v2_response_m_payload_t* taxassignment_get_autocomplete_v2_response_m_payload_1 = instantiate_taxassignment_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsontaxassignment_get_autocomplete_v2_response_m_payload_1 = taxassignment_get_autocomplete_v2_response_m_payload_convertToJSON(taxassignment_get_autocomplete_v2_response_m_payload_1);
	printf("taxassignment_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsontaxassignment_get_autocomplete_v2_response_m_payload_1));
	taxassignment_get_autocomplete_v2_response_m_payload_t* taxassignment_get_autocomplete_v2_response_m_payload_2 = taxassignment_get_autocomplete_v2_response_m_payload_parseFromJSON(jsontaxassignment_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsontaxassignment_get_autocomplete_v2_response_m_payload_2 = taxassignment_get_autocomplete_v2_response_m_payload_convertToJSON(taxassignment_get_autocomplete_v2_response_m_payload_2);
	printf("repeating taxassignment_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsontaxassignment_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_taxassignment_get_autocomplete_v2_response_m_payload(1);
  test_taxassignment_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // taxassignment_get_autocomplete_v2_response_m_payload_MAIN
#endif // taxassignment_get_autocomplete_v2_response_m_payload_TEST
