#ifndef ezsigntemplate_get_object_v1_response_m_payload_TEST
#define ezsigntemplate_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_get_object_v1_response_m_payload.h"
ezsigntemplate_get_object_v1_response_m_payload_t* instantiate_ezsigntemplate_get_object_v1_response_m_payload(int include_optional);

#include "test_common_audit.c"
#include "test_ezsigntemplatedocument_response.c"


ezsigntemplate_get_object_v1_response_m_payload_t* instantiate_ezsigntemplate_get_object_v1_response_m_payload(int include_optional) {
  ezsigntemplate_get_object_v1_response_m_payload_t* ezsigntemplate_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplate_get_object_v1_response_m_payload = ezsigntemplate_get_object_v1_response_m_payload_create(
      36,
      133,
      5,
      2,
      "English",
      "Standard Contract",
      "Contract",
      1,
      "Default",
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      1,
      ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__"Usergroup",
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocument_response(0),
      list_createList()
    );
  } else {
    ezsigntemplate_get_object_v1_response_m_payload = ezsigntemplate_get_object_v1_response_m_payload_create(
      36,
      133,
      5,
      2,
      "English",
      "Standard Contract",
      "Contract",
      1,
      "Default",
      NULL,
      1,
      ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__"Usergroup",
      NULL,
      list_createList()
    );
  }

  return ezsigntemplate_get_object_v1_response_m_payload;
}


#ifdef ezsigntemplate_get_object_v1_response_m_payload_MAIN

void test_ezsigntemplate_get_object_v1_response_m_payload(int include_optional) {
    ezsigntemplate_get_object_v1_response_m_payload_t* ezsigntemplate_get_object_v1_response_m_payload_1 = instantiate_ezsigntemplate_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplate_get_object_v1_response_m_payload_1 = ezsigntemplate_get_object_v1_response_m_payload_convertToJSON(ezsigntemplate_get_object_v1_response_m_payload_1);
	printf("ezsigntemplate_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplate_get_object_v1_response_m_payload_1));
	ezsigntemplate_get_object_v1_response_m_payload_t* ezsigntemplate_get_object_v1_response_m_payload_2 = ezsigntemplate_get_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplate_get_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplate_get_object_v1_response_m_payload_2 = ezsigntemplate_get_object_v1_response_m_payload_convertToJSON(ezsigntemplate_get_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplate_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplate_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplate_get_object_v1_response_m_payload(1);
  test_ezsigntemplate_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_get_object_v1_response_m_payload_MAIN
#endif // ezsigntemplate_get_object_v1_response_m_payload_TEST
