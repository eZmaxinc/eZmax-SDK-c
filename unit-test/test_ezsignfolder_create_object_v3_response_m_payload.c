#ifndef ezsignfolder_create_object_v3_response_m_payload_TEST
#define ezsignfolder_create_object_v3_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_create_object_v3_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_create_object_v3_response_m_payload.h"
ezsignfolder_create_object_v3_response_m_payload_t* instantiate_ezsignfolder_create_object_v3_response_m_payload(int include_optional);



ezsignfolder_create_object_v3_response_m_payload_t* instantiate_ezsignfolder_create_object_v3_response_m_payload(int include_optional) {
  ezsignfolder_create_object_v3_response_m_payload_t* ezsignfolder_create_object_v3_response_m_payload = NULL;
  if (include_optional) {
    ezsignfolder_create_object_v3_response_m_payload = ezsignfolder_create_object_v3_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsignfolder_create_object_v3_response_m_payload = ezsignfolder_create_object_v3_response_m_payload_create(
      list_createList()
    );
  }

  return ezsignfolder_create_object_v3_response_m_payload;
}


#ifdef ezsignfolder_create_object_v3_response_m_payload_MAIN

void test_ezsignfolder_create_object_v3_response_m_payload(int include_optional) {
    ezsignfolder_create_object_v3_response_m_payload_t* ezsignfolder_create_object_v3_response_m_payload_1 = instantiate_ezsignfolder_create_object_v3_response_m_payload(include_optional);

	cJSON* jsonezsignfolder_create_object_v3_response_m_payload_1 = ezsignfolder_create_object_v3_response_m_payload_convertToJSON(ezsignfolder_create_object_v3_response_m_payload_1);
	printf("ezsignfolder_create_object_v3_response_m_payload :\n%s\n", cJSON_Print(jsonezsignfolder_create_object_v3_response_m_payload_1));
	ezsignfolder_create_object_v3_response_m_payload_t* ezsignfolder_create_object_v3_response_m_payload_2 = ezsignfolder_create_object_v3_response_m_payload_parseFromJSON(jsonezsignfolder_create_object_v3_response_m_payload_1);
	cJSON* jsonezsignfolder_create_object_v3_response_m_payload_2 = ezsignfolder_create_object_v3_response_m_payload_convertToJSON(ezsignfolder_create_object_v3_response_m_payload_2);
	printf("repeating ezsignfolder_create_object_v3_response_m_payload:\n%s\n", cJSON_Print(jsonezsignfolder_create_object_v3_response_m_payload_2));
}

int main() {
  test_ezsignfolder_create_object_v3_response_m_payload(1);
  test_ezsignfolder_create_object_v3_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_create_object_v3_response_m_payload_MAIN
#endif // ezsignfolder_create_object_v3_response_m_payload_TEST
