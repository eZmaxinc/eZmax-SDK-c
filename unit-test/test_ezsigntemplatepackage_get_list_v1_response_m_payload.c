#ifndef ezsigntemplatepackage_get_list_v1_response_m_payload_TEST
#define ezsigntemplatepackage_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_get_list_v1_response_m_payload.h"
ezsigntemplatepackage_get_list_v1_response_m_payload_t* instantiate_ezsigntemplatepackage_get_list_v1_response_m_payload(int include_optional);



ezsigntemplatepackage_get_list_v1_response_m_payload_t* instantiate_ezsigntemplatepackage_get_list_v1_response_m_payload(int include_optional) {
  ezsigntemplatepackage_get_list_v1_response_m_payload_t* ezsigntemplatepackage_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepackage_get_list_v1_response_m_payload = ezsigntemplatepackage_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  } else {
    ezsigntemplatepackage_get_list_v1_response_m_payload = ezsigntemplatepackage_get_list_v1_response_m_payload_create(
      100,
      533,
      list_createList()
    );
  }

  return ezsigntemplatepackage_get_list_v1_response_m_payload;
}


#ifdef ezsigntemplatepackage_get_list_v1_response_m_payload_MAIN

void test_ezsigntemplatepackage_get_list_v1_response_m_payload(int include_optional) {
    ezsigntemplatepackage_get_list_v1_response_m_payload_t* ezsigntemplatepackage_get_list_v1_response_m_payload_1 = instantiate_ezsigntemplatepackage_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepackage_get_list_v1_response_m_payload_1 = ezsigntemplatepackage_get_list_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_get_list_v1_response_m_payload_1);
	printf("ezsigntemplatepackage_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_get_list_v1_response_m_payload_1));
	ezsigntemplatepackage_get_list_v1_response_m_payload_t* ezsigntemplatepackage_get_list_v1_response_m_payload_2 = ezsigntemplatepackage_get_list_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepackage_get_list_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepackage_get_list_v1_response_m_payload_2 = ezsigntemplatepackage_get_list_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_get_list_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepackage_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_get_list_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepackage_get_list_v1_response_m_payload(1);
  test_ezsigntemplatepackage_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_get_list_v1_response_m_payload_MAIN
#endif // ezsigntemplatepackage_get_list_v1_response_m_payload_TEST
