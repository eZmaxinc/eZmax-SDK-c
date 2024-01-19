#ifndef ezsigndiscussion_create_object_v1_response_m_payload_TEST
#define ezsigndiscussion_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndiscussion_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndiscussion_create_object_v1_response_m_payload.h"
ezsigndiscussion_create_object_v1_response_m_payload_t* instantiate_ezsigndiscussion_create_object_v1_response_m_payload(int include_optional);



ezsigndiscussion_create_object_v1_response_m_payload_t* instantiate_ezsigndiscussion_create_object_v1_response_m_payload(int include_optional) {
  ezsigndiscussion_create_object_v1_response_m_payload_t* ezsigndiscussion_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigndiscussion_create_object_v1_response_m_payload = ezsigndiscussion_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsigndiscussion_create_object_v1_response_m_payload = ezsigndiscussion_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezsigndiscussion_create_object_v1_response_m_payload;
}


#ifdef ezsigndiscussion_create_object_v1_response_m_payload_MAIN

void test_ezsigndiscussion_create_object_v1_response_m_payload(int include_optional) {
    ezsigndiscussion_create_object_v1_response_m_payload_t* ezsigndiscussion_create_object_v1_response_m_payload_1 = instantiate_ezsigndiscussion_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigndiscussion_create_object_v1_response_m_payload_1 = ezsigndiscussion_create_object_v1_response_m_payload_convertToJSON(ezsigndiscussion_create_object_v1_response_m_payload_1);
	printf("ezsigndiscussion_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigndiscussion_create_object_v1_response_m_payload_1));
	ezsigndiscussion_create_object_v1_response_m_payload_t* ezsigndiscussion_create_object_v1_response_m_payload_2 = ezsigndiscussion_create_object_v1_response_m_payload_parseFromJSON(jsonezsigndiscussion_create_object_v1_response_m_payload_1);
	cJSON* jsonezsigndiscussion_create_object_v1_response_m_payload_2 = ezsigndiscussion_create_object_v1_response_m_payload_convertToJSON(ezsigndiscussion_create_object_v1_response_m_payload_2);
	printf("repeating ezsigndiscussion_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigndiscussion_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigndiscussion_create_object_v1_response_m_payload(1);
  test_ezsigndiscussion_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndiscussion_create_object_v1_response_m_payload_MAIN
#endif // ezsigndiscussion_create_object_v1_response_m_payload_TEST
