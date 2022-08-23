#ifndef ezsignsignature_get_object_v1_response_m_payload_TEST
#define ezsignsignature_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_get_object_v1_response_m_payload.h"
ezsignsignature_get_object_v1_response_m_payload_t* instantiate_ezsignsignature_get_object_v1_response_m_payload(int include_optional);



ezsignsignature_get_object_v1_response_m_payload_t* instantiate_ezsignsignature_get_object_v1_response_m_payload(int include_optional) {
  ezsignsignature_get_object_v1_response_m_payload_t* ezsignsignature_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignsignature_get_object_v1_response_m_payload = ezsignsignature_get_object_v1_response_m_payload_create(
      49,
      97,
      20,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__Normal,
      1,
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__"Description",
      1,
      70,
      1,
      list_createList()
    );
  } else {
    ezsignsignature_get_object_v1_response_m_payload = ezsignsignature_get_object_v1_response_m_payload_create(
      49,
      97,
      20,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__Normal,
      1,
      "Attachment",
      ezmax_api_definition__full_ezsignsignature_get_object_v1_response_m_payload__"Description",
      1,
      70,
      1,
      list_createList()
    );
  }

  return ezsignsignature_get_object_v1_response_m_payload;
}


#ifdef ezsignsignature_get_object_v1_response_m_payload_MAIN

void test_ezsignsignature_get_object_v1_response_m_payload(int include_optional) {
    ezsignsignature_get_object_v1_response_m_payload_t* ezsignsignature_get_object_v1_response_m_payload_1 = instantiate_ezsignsignature_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignsignature_get_object_v1_response_m_payload_1 = ezsignsignature_get_object_v1_response_m_payload_convertToJSON(ezsignsignature_get_object_v1_response_m_payload_1);
	printf("ezsignsignature_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsignature_get_object_v1_response_m_payload_1));
	ezsignsignature_get_object_v1_response_m_payload_t* ezsignsignature_get_object_v1_response_m_payload_2 = ezsignsignature_get_object_v1_response_m_payload_parseFromJSON(jsonezsignsignature_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignsignature_get_object_v1_response_m_payload_2 = ezsignsignature_get_object_v1_response_m_payload_convertToJSON(ezsignsignature_get_object_v1_response_m_payload_2);
	printf("repeating ezsignsignature_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsignature_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignsignature_get_object_v1_response_m_payload(1);
  test_ezsignsignature_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_get_object_v1_response_m_payload_MAIN
#endif // ezsignsignature_get_object_v1_response_m_payload_TEST
