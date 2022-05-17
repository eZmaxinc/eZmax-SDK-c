#ifndef ezsigntemplatepackagemembership_create_object_v1_response_m_payload_TEST
#define ezsigntemplatepackagemembership_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_create_object_v1_response_m_payload.h"
ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagemembership_create_object_v1_response_m_payload(int include_optional);



ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagemembership_create_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t* ezsigntemplatepackagemembership_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload = ezsigntemplatepackagemembership_create_object_v1_response_m_payload_create(
      list_createList(),
      1,
      1
    );
  } else {
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload = ezsigntemplatepackagemembership_create_object_v1_response_m_payload_create(
      list_createList(),
      1,
      1
    );
  }

  return ezsigntemplatepackagemembership_create_object_v1_response_m_payload;
}


#ifdef ezsigntemplatepackagemembership_create_object_v1_response_m_payload_MAIN

void test_ezsigntemplatepackagemembership_create_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t* ezsigntemplatepackagemembership_create_object_v1_response_m_payload_1 = instantiate_ezsigntemplatepackagemembership_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_create_object_v1_response_m_payload_1 = ezsigntemplatepackagemembership_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_response_m_payload_1);
	printf("ezsigntemplatepackagemembership_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_create_object_v1_response_m_payload_1));
	ezsigntemplatepackagemembership_create_object_v1_response_m_payload_t* ezsigntemplatepackagemembership_create_object_v1_response_m_payload_2 = ezsigntemplatepackagemembership_create_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepackagemembership_create_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepackagemembership_create_object_v1_response_m_payload_2 = ezsigntemplatepackagemembership_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepackagemembership_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepackagemembership_create_object_v1_response_m_payload(1);
  test_ezsigntemplatepackagemembership_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_create_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatepackagemembership_create_object_v1_response_m_payload_TEST
