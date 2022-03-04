#ifndef ezsignformfieldgroup_create_object_v1_response_m_payload_TEST
#define ezsignformfieldgroup_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_create_object_v1_response_m_payload.h"
ezsignformfieldgroup_create_object_v1_response_m_payload_t* instantiate_ezsignformfieldgroup_create_object_v1_response_m_payload(int include_optional);



ezsignformfieldgroup_create_object_v1_response_m_payload_t* instantiate_ezsignformfieldgroup_create_object_v1_response_m_payload(int include_optional) {
  ezsignformfieldgroup_create_object_v1_response_m_payload_t* ezsignformfieldgroup_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignformfieldgroup_create_object_v1_response_m_payload = ezsignformfieldgroup_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsignformfieldgroup_create_object_v1_response_m_payload = ezsignformfieldgroup_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezsignformfieldgroup_create_object_v1_response_m_payload;
}


#ifdef ezsignformfieldgroup_create_object_v1_response_m_payload_MAIN

void test_ezsignformfieldgroup_create_object_v1_response_m_payload(int include_optional) {
    ezsignformfieldgroup_create_object_v1_response_m_payload_t* ezsignformfieldgroup_create_object_v1_response_m_payload_1 = instantiate_ezsignformfieldgroup_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignformfieldgroup_create_object_v1_response_m_payload_1 = ezsignformfieldgroup_create_object_v1_response_m_payload_convertToJSON(ezsignformfieldgroup_create_object_v1_response_m_payload_1);
	printf("ezsignformfieldgroup_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_create_object_v1_response_m_payload_1));
	ezsignformfieldgroup_create_object_v1_response_m_payload_t* ezsignformfieldgroup_create_object_v1_response_m_payload_2 = ezsignformfieldgroup_create_object_v1_response_m_payload_parseFromJSON(jsonezsignformfieldgroup_create_object_v1_response_m_payload_1);
	cJSON* jsonezsignformfieldgroup_create_object_v1_response_m_payload_2 = ezsignformfieldgroup_create_object_v1_response_m_payload_convertToJSON(ezsignformfieldgroup_create_object_v1_response_m_payload_2);
	printf("repeating ezsignformfieldgroup_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignformfieldgroup_create_object_v1_response_m_payload(1);
  test_ezsignformfieldgroup_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_create_object_v1_response_m_payload_MAIN
#endif // ezsignformfieldgroup_create_object_v1_response_m_payload_TEST
