#ifndef otherincome_get_communication_list_v1_response_m_payload_TEST
#define otherincome_get_communication_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define otherincome_get_communication_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/otherincome_get_communication_list_v1_response_m_payload.h"
otherincome_get_communication_list_v1_response_m_payload_t* instantiate_otherincome_get_communication_list_v1_response_m_payload(int include_optional);



otherincome_get_communication_list_v1_response_m_payload_t* instantiate_otherincome_get_communication_list_v1_response_m_payload(int include_optional) {
  otherincome_get_communication_list_v1_response_m_payload_t* otherincome_get_communication_list_v1_response_m_payload = NULL;
  if (include_optional) {
    otherincome_get_communication_list_v1_response_m_payload = otherincome_get_communication_list_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    otherincome_get_communication_list_v1_response_m_payload = otherincome_get_communication_list_v1_response_m_payload_create(
      list_createList()
    );
  }

  return otherincome_get_communication_list_v1_response_m_payload;
}


#ifdef otherincome_get_communication_list_v1_response_m_payload_MAIN

void test_otherincome_get_communication_list_v1_response_m_payload(int include_optional) {
    otherincome_get_communication_list_v1_response_m_payload_t* otherincome_get_communication_list_v1_response_m_payload_1 = instantiate_otherincome_get_communication_list_v1_response_m_payload(include_optional);

	cJSON* jsonotherincome_get_communication_list_v1_response_m_payload_1 = otherincome_get_communication_list_v1_response_m_payload_convertToJSON(otherincome_get_communication_list_v1_response_m_payload_1);
	printf("otherincome_get_communication_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonotherincome_get_communication_list_v1_response_m_payload_1));
	otherincome_get_communication_list_v1_response_m_payload_t* otherincome_get_communication_list_v1_response_m_payload_2 = otherincome_get_communication_list_v1_response_m_payload_parseFromJSON(jsonotherincome_get_communication_list_v1_response_m_payload_1);
	cJSON* jsonotherincome_get_communication_list_v1_response_m_payload_2 = otherincome_get_communication_list_v1_response_m_payload_convertToJSON(otherincome_get_communication_list_v1_response_m_payload_2);
	printf("repeating otherincome_get_communication_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonotherincome_get_communication_list_v1_response_m_payload_2));
}

int main() {
  test_otherincome_get_communication_list_v1_response_m_payload(1);
  test_otherincome_get_communication_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // otherincome_get_communication_list_v1_response_m_payload_MAIN
#endif // otherincome_get_communication_list_v1_response_m_payload_TEST
