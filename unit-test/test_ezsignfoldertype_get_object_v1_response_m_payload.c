#ifndef ezsignfoldertype_get_object_v1_response_m_payload_TEST
#define ezsignfoldertype_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_get_object_v1_response_m_payload.h"
ezsignfoldertype_get_object_v1_response_m_payload_t* instantiate_ezsignfoldertype_get_object_v1_response_m_payload(int include_optional);

#include "test_multilingual_ezsignfoldertype_name.c"


ezsignfoldertype_get_object_v1_response_m_payload_t* instantiate_ezsignfoldertype_get_object_v1_response_m_payload(int include_optional) {
  ezsignfoldertype_get_object_v1_response_m_payload_t* ezsignfoldertype_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignfoldertype_get_object_v1_response_m_payload = ezsignfoldertype_get_object_v1_response_m_payload_create(
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignfoldertype_name(0),
      78,
      1,
      89,
      89,
      1,
      "Company X",
      "Default",
      "Default",
      "email@example.com",
      "email@example.com",
      "Administration",
      "Administration",
      ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__User,
      ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__"Manual",
      365,
      5,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      true,
      list_createList(),
      list_createList()
    );
  } else {
    ezsignfoldertype_get_object_v1_response_m_payload = ezsignfoldertype_get_object_v1_response_m_payload_create(
      5,
      NULL,
      78,
      1,
      89,
      89,
      1,
      "Company X",
      "Default",
      "Default",
      "email@example.com",
      "email@example.com",
      "Administration",
      "Administration",
      ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__User,
      ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__"None",
      30,
      ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__"Manual",
      365,
      5,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      false,
      true,
      list_createList(),
      list_createList()
    );
  }

  return ezsignfoldertype_get_object_v1_response_m_payload;
}


#ifdef ezsignfoldertype_get_object_v1_response_m_payload_MAIN

void test_ezsignfoldertype_get_object_v1_response_m_payload(int include_optional) {
    ezsignfoldertype_get_object_v1_response_m_payload_t* ezsignfoldertype_get_object_v1_response_m_payload_1 = instantiate_ezsignfoldertype_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignfoldertype_get_object_v1_response_m_payload_1 = ezsignfoldertype_get_object_v1_response_m_payload_convertToJSON(ezsignfoldertype_get_object_v1_response_m_payload_1);
	printf("ezsignfoldertype_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignfoldertype_get_object_v1_response_m_payload_1));
	ezsignfoldertype_get_object_v1_response_m_payload_t* ezsignfoldertype_get_object_v1_response_m_payload_2 = ezsignfoldertype_get_object_v1_response_m_payload_parseFromJSON(jsonezsignfoldertype_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignfoldertype_get_object_v1_response_m_payload_2 = ezsignfoldertype_get_object_v1_response_m_payload_convertToJSON(ezsignfoldertype_get_object_v1_response_m_payload_2);
	printf("repeating ezsignfoldertype_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignfoldertype_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignfoldertype_get_object_v1_response_m_payload(1);
  test_ezsignfoldertype_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_get_object_v1_response_m_payload_MAIN
#endif // ezsignfoldertype_get_object_v1_response_m_payload_TEST
