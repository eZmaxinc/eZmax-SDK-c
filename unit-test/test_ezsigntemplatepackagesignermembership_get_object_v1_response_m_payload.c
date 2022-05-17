#ifndef ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_TEST
#define ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload.h"
ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload(int include_optional);



ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t* ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload = ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_create(
      237,
      194,
      174,
      9,
      1
    );
  } else {
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload = ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_create(
      237,
      194,
      174,
      9,
      1
    );
  }

  return ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload;
}


#ifdef ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_MAIN

void test_ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t* ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_1 = instantiate_ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_1 = ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_1);
	printf("ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_1));
	ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_t* ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_2 = ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_2 = ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload(1);
  test_ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatepackagesignermembership_get_object_v1_response_m_payload_TEST
