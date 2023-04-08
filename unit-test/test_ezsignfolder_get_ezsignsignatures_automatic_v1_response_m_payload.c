#ifndef ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_TEST
#define ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload.h"
ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t* instantiate_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload(int include_optional);



ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t* instantiate_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload(int include_optional) {
  ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t* ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload = ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_create(
      list_createList(),
      list_createList()
    );
  } else {
    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload = ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_create(
      list_createList(),
      list_createList()
    );
  }

  return ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload;
}


#ifdef ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_MAIN

void test_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload(int include_optional) {
    ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t* ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_1 = instantiate_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload(include_optional);

	cJSON* jsonezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_1 = ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_1);
	printf("ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_1));
	ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t* ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_2 = ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(jsonezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_1);
	cJSON* jsonezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_2 = ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_2);
	printf("repeating ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_2));
}

int main() {
  test_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload(1);
  test_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_MAIN
#endif // ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_TEST
