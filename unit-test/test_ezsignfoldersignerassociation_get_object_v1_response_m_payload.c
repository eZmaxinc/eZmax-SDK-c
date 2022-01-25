#ifndef ezsignfoldersignerassociation_get_object_v1_response_m_payload_TEST
#define ezsignfoldersignerassociation_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_get_object_v1_response_m_payload.h"
ezsignfoldersignerassociation_get_object_v1_response_m_payload_t* instantiate_ezsignfoldersignerassociation_get_object_v1_response_m_payload(int include_optional);



ezsignfoldersignerassociation_get_object_v1_response_m_payload_t* instantiate_ezsignfoldersignerassociation_get_object_v1_response_m_payload(int include_optional) {
  ezsignfoldersignerassociation_get_object_v1_response_m_payload_t* ezsignfoldersignerassociation_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_get_object_v1_response_m_payload = ezsignfoldersignerassociation_get_object_v1_response_m_payload_create(
      20,
      33,
      89,
      70,
      1
    );
  } else {
    ezsignfoldersignerassociation_get_object_v1_response_m_payload = ezsignfoldersignerassociation_get_object_v1_response_m_payload_create(
      20,
      33,
      89,
      70,
      1
    );
  }

  return ezsignfoldersignerassociation_get_object_v1_response_m_payload;
}


#ifdef ezsignfoldersignerassociation_get_object_v1_response_m_payload_MAIN

void test_ezsignfoldersignerassociation_get_object_v1_response_m_payload(int include_optional) {
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_t* ezsignfoldersignerassociation_get_object_v1_response_m_payload_1 = instantiate_ezsignfoldersignerassociation_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignfoldersignerassociation_get_object_v1_response_m_payload_1 = ezsignfoldersignerassociation_get_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_m_payload_1);
	printf("ezsignfoldersignerassociation_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_get_object_v1_response_m_payload_1));
	ezsignfoldersignerassociation_get_object_v1_response_m_payload_t* ezsignfoldersignerassociation_get_object_v1_response_m_payload_2 = ezsignfoldersignerassociation_get_object_v1_response_m_payload_parseFromJSON(jsonezsignfoldersignerassociation_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignfoldersignerassociation_get_object_v1_response_m_payload_2 = ezsignfoldersignerassociation_get_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_m_payload_2);
	printf("repeating ezsignfoldersignerassociation_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignfoldersignerassociation_get_object_v1_response_m_payload(1);
  test_ezsignfoldersignerassociation_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_get_object_v1_response_m_payload_MAIN
#endif // ezsignfoldersignerassociation_get_object_v1_response_m_payload_TEST