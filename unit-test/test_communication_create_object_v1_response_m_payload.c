#ifndef communication_create_object_v1_response_m_payload_TEST
#define communication_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_create_object_v1_response_m_payload.h"
communication_create_object_v1_response_m_payload_t* instantiate_communication_create_object_v1_response_m_payload(int include_optional);



communication_create_object_v1_response_m_payload_t* instantiate_communication_create_object_v1_response_m_payload(int include_optional) {
  communication_create_object_v1_response_m_payload_t* communication_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    communication_create_object_v1_response_m_payload = communication_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    communication_create_object_v1_response_m_payload = communication_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return communication_create_object_v1_response_m_payload;
}


#ifdef communication_create_object_v1_response_m_payload_MAIN

void test_communication_create_object_v1_response_m_payload(int include_optional) {
    communication_create_object_v1_response_m_payload_t* communication_create_object_v1_response_m_payload_1 = instantiate_communication_create_object_v1_response_m_payload(include_optional);

	cJSON* jsoncommunication_create_object_v1_response_m_payload_1 = communication_create_object_v1_response_m_payload_convertToJSON(communication_create_object_v1_response_m_payload_1);
	printf("communication_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsoncommunication_create_object_v1_response_m_payload_1));
	communication_create_object_v1_response_m_payload_t* communication_create_object_v1_response_m_payload_2 = communication_create_object_v1_response_m_payload_parseFromJSON(jsoncommunication_create_object_v1_response_m_payload_1);
	cJSON* jsoncommunication_create_object_v1_response_m_payload_2 = communication_create_object_v1_response_m_payload_convertToJSON(communication_create_object_v1_response_m_payload_2);
	printf("repeating communication_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsoncommunication_create_object_v1_response_m_payload_2));
}

int main() {
  test_communication_create_object_v1_response_m_payload(1);
  test_communication_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_create_object_v1_response_m_payload_MAIN
#endif // communication_create_object_v1_response_m_payload_TEST
