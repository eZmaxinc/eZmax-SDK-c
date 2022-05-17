#ifndef ezsigntemplatedocument_create_object_v1_response_m_payload_TEST
#define ezsigntemplatedocument_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_create_object_v1_response_m_payload.h"
ezsigntemplatedocument_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatedocument_create_object_v1_response_m_payload(int include_optional);



ezsigntemplatedocument_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatedocument_create_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatedocument_create_object_v1_response_m_payload_t* ezsigntemplatedocument_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatedocument_create_object_v1_response_m_payload = ezsigntemplatedocument_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsigntemplatedocument_create_object_v1_response_m_payload = ezsigntemplatedocument_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezsigntemplatedocument_create_object_v1_response_m_payload;
}


#ifdef ezsigntemplatedocument_create_object_v1_response_m_payload_MAIN

void test_ezsigntemplatedocument_create_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatedocument_create_object_v1_response_m_payload_t* ezsigntemplatedocument_create_object_v1_response_m_payload_1 = instantiate_ezsigntemplatedocument_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatedocument_create_object_v1_response_m_payload_1 = ezsigntemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_create_object_v1_response_m_payload_1);
	printf("ezsigntemplatedocument_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_create_object_v1_response_m_payload_1));
	ezsigntemplatedocument_create_object_v1_response_m_payload_t* ezsigntemplatedocument_create_object_v1_response_m_payload_2 = ezsigntemplatedocument_create_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatedocument_create_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatedocument_create_object_v1_response_m_payload_2 = ezsigntemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_create_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatedocument_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatedocument_create_object_v1_response_m_payload(1);
  test_ezsigntemplatedocument_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_create_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatedocument_create_object_v1_response_m_payload_TEST
