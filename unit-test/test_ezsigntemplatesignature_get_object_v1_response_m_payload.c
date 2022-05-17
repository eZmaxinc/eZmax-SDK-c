#ifndef ezsigntemplatesignature_get_object_v1_response_m_payload_TEST
#define ezsigntemplatesignature_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_get_object_v1_response_m_payload.h"
ezsigntemplatesignature_get_object_v1_response_m_payload_t* instantiate_ezsigntemplatesignature_get_object_v1_response_m_payload(int include_optional);



ezsigntemplatesignature_get_object_v1_response_m_payload_t* instantiate_ezsigntemplatesignature_get_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatesignature_get_object_v1_response_m_payload_t* ezsigntemplatesignature_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatesignature_get_object_v1_response_m_payload = ezsigntemplatesignature_get_object_v1_response_m_payload_create(
      99,
      133,
      9,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Normal,
      1,
      list_createList()
    );
  } else {
    ezsigntemplatesignature_get_object_v1_response_m_payload = ezsigntemplatesignature_get_object_v1_response_m_payload_create(
      99,
      133,
      9,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_get_object_v1_response_m_payload__Normal,
      1,
      list_createList()
    );
  }

  return ezsigntemplatesignature_get_object_v1_response_m_payload;
}


#ifdef ezsigntemplatesignature_get_object_v1_response_m_payload_MAIN

void test_ezsigntemplatesignature_get_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatesignature_get_object_v1_response_m_payload_t* ezsigntemplatesignature_get_object_v1_response_m_payload_1 = instantiate_ezsigntemplatesignature_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatesignature_get_object_v1_response_m_payload_1 = ezsigntemplatesignature_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v1_response_m_payload_1);
	printf("ezsigntemplatesignature_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_get_object_v1_response_m_payload_1));
	ezsigntemplatesignature_get_object_v1_response_m_payload_t* ezsigntemplatesignature_get_object_v1_response_m_payload_2 = ezsigntemplatesignature_get_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatesignature_get_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatesignature_get_object_v1_response_m_payload_2 = ezsigntemplatesignature_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatesignature_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatesignature_get_object_v1_response_m_payload(1);
  test_ezsigntemplatesignature_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_get_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatesignature_get_object_v1_response_m_payload_TEST
