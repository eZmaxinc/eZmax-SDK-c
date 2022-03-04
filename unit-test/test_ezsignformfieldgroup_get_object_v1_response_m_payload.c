#ifndef ezsignformfieldgroup_get_object_v1_response_m_payload_TEST
#define ezsignformfieldgroup_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_get_object_v1_response_m_payload.h"
ezsignformfieldgroup_get_object_v1_response_m_payload_t* instantiate_ezsignformfieldgroup_get_object_v1_response_m_payload(int include_optional);

#include "test_ezsignformfieldgroupsigner_response_compound.c"


ezsignformfieldgroup_get_object_v1_response_m_payload_t* instantiate_ezsignformfieldgroup_get_object_v1_response_m_payload(int include_optional) {
  ezsignformfieldgroup_get_object_v1_response_m_payload_t* ezsignformfieldgroup_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignformfieldgroup_get_object_v1_response_m_payload = ezsignformfieldgroup_get_object_v1_response_m_payload_create(
      26,
      97,
      ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__"Text",
      ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__"TopLeft",
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ezsignformfieldgroupsigner_response_compound(0)
    );
  } else {
    ezsignformfieldgroup_get_object_v1_response_m_payload = ezsignformfieldgroup_get_object_v1_response_m_payload_create(
      26,
      97,
      ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__"Text",
      ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition_ezsignformfieldgroup_get_object_v1_response_m_payload__"TopLeft",
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return ezsignformfieldgroup_get_object_v1_response_m_payload;
}


#ifdef ezsignformfieldgroup_get_object_v1_response_m_payload_MAIN

void test_ezsignformfieldgroup_get_object_v1_response_m_payload(int include_optional) {
    ezsignformfieldgroup_get_object_v1_response_m_payload_t* ezsignformfieldgroup_get_object_v1_response_m_payload_1 = instantiate_ezsignformfieldgroup_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignformfieldgroup_get_object_v1_response_m_payload_1 = ezsignformfieldgroup_get_object_v1_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v1_response_m_payload_1);
	printf("ezsignformfieldgroup_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_get_object_v1_response_m_payload_1));
	ezsignformfieldgroup_get_object_v1_response_m_payload_t* ezsignformfieldgroup_get_object_v1_response_m_payload_2 = ezsignformfieldgroup_get_object_v1_response_m_payload_parseFromJSON(jsonezsignformfieldgroup_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignformfieldgroup_get_object_v1_response_m_payload_2 = ezsignformfieldgroup_get_object_v1_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v1_response_m_payload_2);
	printf("repeating ezsignformfieldgroup_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignformfieldgroup_get_object_v1_response_m_payload(1);
  test_ezsignformfieldgroup_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_get_object_v1_response_m_payload_MAIN
#endif // ezsignformfieldgroup_get_object_v1_response_m_payload_TEST
