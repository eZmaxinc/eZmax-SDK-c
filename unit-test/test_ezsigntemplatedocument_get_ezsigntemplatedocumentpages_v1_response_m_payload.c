#ifndef ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_TEST
#define ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload.h"
ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t* instantiate_ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload(int include_optional);



ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t* instantiate_ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload(int include_optional) {
  ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t* ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload = ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload = ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload;
}


#ifdef ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_MAIN

void test_ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload(int include_optional) {
    ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t* ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_1 = instantiate_ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_1 = ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_1);
	printf("ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_1));
	ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_t* ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_2 = ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_parseFromJSON(jsonezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_2 = ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_2);
	printf("repeating ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload(1);
  test_ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_MAIN
#endif // ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_m_payload_TEST
