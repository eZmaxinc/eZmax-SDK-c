#ifndef ezsignfoldertype_create_object_v3_response_m_payload_TEST
#define ezsignfoldertype_create_object_v3_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_create_object_v3_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_create_object_v3_response_m_payload.h"
ezsignfoldertype_create_object_v3_response_m_payload_t* instantiate_ezsignfoldertype_create_object_v3_response_m_payload(int include_optional);



ezsignfoldertype_create_object_v3_response_m_payload_t* instantiate_ezsignfoldertype_create_object_v3_response_m_payload(int include_optional) {
  ezsignfoldertype_create_object_v3_response_m_payload_t* ezsignfoldertype_create_object_v3_response_m_payload = NULL;
  if (include_optional) {
    ezsignfoldertype_create_object_v3_response_m_payload = ezsignfoldertype_create_object_v3_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsignfoldertype_create_object_v3_response_m_payload = ezsignfoldertype_create_object_v3_response_m_payload_create(
      list_createList()
    );
  }

  return ezsignfoldertype_create_object_v3_response_m_payload;
}


#ifdef ezsignfoldertype_create_object_v3_response_m_payload_MAIN

void test_ezsignfoldertype_create_object_v3_response_m_payload(int include_optional) {
    ezsignfoldertype_create_object_v3_response_m_payload_t* ezsignfoldertype_create_object_v3_response_m_payload_1 = instantiate_ezsignfoldertype_create_object_v3_response_m_payload(include_optional);

	cJSON* jsonezsignfoldertype_create_object_v3_response_m_payload_1 = ezsignfoldertype_create_object_v3_response_m_payload_convertToJSON(ezsignfoldertype_create_object_v3_response_m_payload_1);
	printf("ezsignfoldertype_create_object_v3_response_m_payload :\n%s\n", cJSON_Print(jsonezsignfoldertype_create_object_v3_response_m_payload_1));
	ezsignfoldertype_create_object_v3_response_m_payload_t* ezsignfoldertype_create_object_v3_response_m_payload_2 = ezsignfoldertype_create_object_v3_response_m_payload_parseFromJSON(jsonezsignfoldertype_create_object_v3_response_m_payload_1);
	cJSON* jsonezsignfoldertype_create_object_v3_response_m_payload_2 = ezsignfoldertype_create_object_v3_response_m_payload_convertToJSON(ezsignfoldertype_create_object_v3_response_m_payload_2);
	printf("repeating ezsignfoldertype_create_object_v3_response_m_payload:\n%s\n", cJSON_Print(jsonezsignfoldertype_create_object_v3_response_m_payload_2));
}

int main() {
  test_ezsignfoldertype_create_object_v3_response_m_payload(1);
  test_ezsignfoldertype_create_object_v3_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_create_object_v3_response_m_payload_MAIN
#endif // ezsignfoldertype_create_object_v3_response_m_payload_TEST
