#ifndef ezsigntemplatepackage_create_object_v1_response_m_payload_TEST
#define ezsigntemplatepackage_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_create_object_v1_response_m_payload.h"
ezsigntemplatepackage_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackage_create_object_v1_response_m_payload(int include_optional);



ezsigntemplatepackage_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackage_create_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatepackage_create_object_v1_response_m_payload_t* ezsigntemplatepackage_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepackage_create_object_v1_response_m_payload = ezsigntemplatepackage_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsigntemplatepackage_create_object_v1_response_m_payload = ezsigntemplatepackage_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezsigntemplatepackage_create_object_v1_response_m_payload;
}


#ifdef ezsigntemplatepackage_create_object_v1_response_m_payload_MAIN

void test_ezsigntemplatepackage_create_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatepackage_create_object_v1_response_m_payload_t* ezsigntemplatepackage_create_object_v1_response_m_payload_1 = instantiate_ezsigntemplatepackage_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepackage_create_object_v1_response_m_payload_1 = ezsigntemplatepackage_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_create_object_v1_response_m_payload_1);
	printf("ezsigntemplatepackage_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_create_object_v1_response_m_payload_1));
	ezsigntemplatepackage_create_object_v1_response_m_payload_t* ezsigntemplatepackage_create_object_v1_response_m_payload_2 = ezsigntemplatepackage_create_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepackage_create_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepackage_create_object_v1_response_m_payload_2 = ezsigntemplatepackage_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_create_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepackage_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepackage_create_object_v1_response_m_payload(1);
  test_ezsigntemplatepackage_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_create_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatepackage_create_object_v1_response_m_payload_TEST
