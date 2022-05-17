#ifndef ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_TEST
#define ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_get_object_v1_response_m_payload.h"
ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t* instantiate_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload(int include_optional);



ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t* instantiate_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload(int include_optional) {
  ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t* ezsigntemplateformfieldgroup_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload = ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__"One",
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
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload = ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__"One",
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
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload__"TopLeft",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezsigntemplateformfieldgroup_get_object_v1_response_m_payload;
}


#ifdef ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_MAIN

void test_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload(int include_optional) {
    ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t* ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_1 = instantiate_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_get_object_v1_response_m_payload_1 = ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_1);
	printf("ezsigntemplateformfieldgroup_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_get_object_v1_response_m_payload_1));
	ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_t* ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_2 = ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplateformfieldgroup_get_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplateformfieldgroup_get_object_v1_response_m_payload_2 = ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplateformfieldgroup_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload(1);
  test_ezsigntemplateformfieldgroup_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_MAIN
#endif // ezsigntemplateformfieldgroup_get_object_v1_response_m_payload_TEST
