#ifndef ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_TEST
#define ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_delete_object_v1_response_m_payload.h"
ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagesigner_delete_object_v1_response_m_payload(int include_optional);



ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t* instantiate_ezsigntemplatepackagesigner_delete_object_v1_response_m_payload(int include_optional) {
  ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t* ezsigntemplatepackagesigner_delete_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create(
      1,
      1
    );
  } else {
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create(
      1,
      1
    );
  }

  return ezsigntemplatepackagesigner_delete_object_v1_response_m_payload;
}


#ifdef ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_MAIN

void test_ezsigntemplatepackagesigner_delete_object_v1_response_m_payload(int include_optional) {
    ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t* ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_1 = instantiate_ezsigntemplatepackagesigner_delete_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_delete_object_v1_response_m_payload_1 = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_1);
	printf("ezsigntemplatepackagesigner_delete_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_delete_object_v1_response_m_payload_1));
	ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t* ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_2 = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_parseFromJSON(jsonezsigntemplatepackagesigner_delete_object_v1_response_m_payload_1);
	cJSON* jsonezsigntemplatepackagesigner_delete_object_v1_response_m_payload_2 = ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_2);
	printf("repeating ezsigntemplatepackagesigner_delete_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_delete_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigntemplatepackagesigner_delete_object_v1_response_m_payload(1);
  test_ezsigntemplatepackagesigner_delete_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_MAIN
#endif // ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_TEST
