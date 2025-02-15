#ifndef ezsignsignature_create_object_v3_response_m_payload_TEST
#define ezsignsignature_create_object_v3_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_create_object_v3_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_create_object_v3_response_m_payload.h"
ezsignsignature_create_object_v3_response_m_payload_t* instantiate_ezsignsignature_create_object_v3_response_m_payload(int include_optional);



ezsignsignature_create_object_v3_response_m_payload_t* instantiate_ezsignsignature_create_object_v3_response_m_payload(int include_optional) {
  ezsignsignature_create_object_v3_response_m_payload_t* ezsignsignature_create_object_v3_response_m_payload = NULL;
  if (include_optional) {
    ezsignsignature_create_object_v3_response_m_payload = ezsignsignature_create_object_v3_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsignsignature_create_object_v3_response_m_payload = ezsignsignature_create_object_v3_response_m_payload_create(
      list_createList()
    );
  }

  return ezsignsignature_create_object_v3_response_m_payload;
}


#ifdef ezsignsignature_create_object_v3_response_m_payload_MAIN

void test_ezsignsignature_create_object_v3_response_m_payload(int include_optional) {
    ezsignsignature_create_object_v3_response_m_payload_t* ezsignsignature_create_object_v3_response_m_payload_1 = instantiate_ezsignsignature_create_object_v3_response_m_payload(include_optional);

	cJSON* jsonezsignsignature_create_object_v3_response_m_payload_1 = ezsignsignature_create_object_v3_response_m_payload_convertToJSON(ezsignsignature_create_object_v3_response_m_payload_1);
	printf("ezsignsignature_create_object_v3_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v3_response_m_payload_1));
	ezsignsignature_create_object_v3_response_m_payload_t* ezsignsignature_create_object_v3_response_m_payload_2 = ezsignsignature_create_object_v3_response_m_payload_parseFromJSON(jsonezsignsignature_create_object_v3_response_m_payload_1);
	cJSON* jsonezsignsignature_create_object_v3_response_m_payload_2 = ezsignsignature_create_object_v3_response_m_payload_convertToJSON(ezsignsignature_create_object_v3_response_m_payload_2);
	printf("repeating ezsignsignature_create_object_v3_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v3_response_m_payload_2));
}

int main() {
  test_ezsignsignature_create_object_v3_response_m_payload(1);
  test_ezsignsignature_create_object_v3_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_create_object_v3_response_m_payload_MAIN
#endif // ezsignsignature_create_object_v3_response_m_payload_TEST
