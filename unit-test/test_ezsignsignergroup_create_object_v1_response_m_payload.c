#ifndef ezsignsignergroup_create_object_v1_response_m_payload_TEST
#define ezsignsignergroup_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_create_object_v1_response_m_payload.h"
ezsignsignergroup_create_object_v1_response_m_payload_t* instantiate_ezsignsignergroup_create_object_v1_response_m_payload(int include_optional);



ezsignsignergroup_create_object_v1_response_m_payload_t* instantiate_ezsignsignergroup_create_object_v1_response_m_payload(int include_optional) {
  ezsignsignergroup_create_object_v1_response_m_payload_t* ezsignsignergroup_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignsignergroup_create_object_v1_response_m_payload = ezsignsignergroup_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsignsignergroup_create_object_v1_response_m_payload = ezsignsignergroup_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezsignsignergroup_create_object_v1_response_m_payload;
}


#ifdef ezsignsignergroup_create_object_v1_response_m_payload_MAIN

void test_ezsignsignergroup_create_object_v1_response_m_payload(int include_optional) {
    ezsignsignergroup_create_object_v1_response_m_payload_t* ezsignsignergroup_create_object_v1_response_m_payload_1 = instantiate_ezsignsignergroup_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignsignergroup_create_object_v1_response_m_payload_1 = ezsignsignergroup_create_object_v1_response_m_payload_convertToJSON(ezsignsignergroup_create_object_v1_response_m_payload_1);
	printf("ezsignsignergroup_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsignergroup_create_object_v1_response_m_payload_1));
	ezsignsignergroup_create_object_v1_response_m_payload_t* ezsignsignergroup_create_object_v1_response_m_payload_2 = ezsignsignergroup_create_object_v1_response_m_payload_parseFromJSON(jsonezsignsignergroup_create_object_v1_response_m_payload_1);
	cJSON* jsonezsignsignergroup_create_object_v1_response_m_payload_2 = ezsignsignergroup_create_object_v1_response_m_payload_convertToJSON(ezsignsignergroup_create_object_v1_response_m_payload_2);
	printf("repeating ezsignsignergroup_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsignergroup_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignsignergroup_create_object_v1_response_m_payload(1);
  test_ezsignsignergroup_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_create_object_v1_response_m_payload_MAIN
#endif // ezsignsignergroup_create_object_v1_response_m_payload_TEST