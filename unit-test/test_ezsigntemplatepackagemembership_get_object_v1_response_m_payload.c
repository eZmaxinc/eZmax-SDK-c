#ifndef ezsigntemplatepackagemembership_get_object_v1_response_m_payload_TEST
#define ezsigntemplatepackagemembership_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_get_object_v1_response_m_payload.h"
ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagemembership_get_object_v1_response_m_payload(int include_optional);

#include "test_ezsigntemplate_response_compound.c"


ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagemembership_get_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t* ezsigntemplatepackagemembership_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_create(
      194,
      99,
      36,
      1,
       // false, not to have infinite recursion
      instantiate_ezsigntemplate_response_compound(0),
      list_createList()
    );
  } else {
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_create(
      194,
      99,
      36,
      1,
      NULL,
      list_createList()
    );
  }

  return ezsigntemplatepackagemembership_get_object_v1_response_m_payload;
}


#ifdef ezsigntemplatepackagemembership_get_object_v1_response_m_payload_MAIN

void test_ezsigntemplatepackagemembership_get_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t* ezsigntemplatepackagemembership_get_object_v1_response_m_payload_1 = instantiate_ezsigntemplatepackagemembership_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_get_object_v1_response_m_payload_1 = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_m_payload_1);
	printf("ezsigntemplatepackagemembership_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_get_object_v1_response_m_payload_1));
	ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t* ezsigntemplatepackagemembership_get_object_v1_response_m_payload_2 = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepackagemembership_get_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepackagemembership_get_object_v1_response_m_payload_2 = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepackagemembership_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepackagemembership_get_object_v1_response_m_payload(1);
  test_ezsigntemplatepackagemembership_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_get_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatepackagemembership_get_object_v1_response_m_payload_TEST
