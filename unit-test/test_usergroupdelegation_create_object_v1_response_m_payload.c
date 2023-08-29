#ifndef usergroupdelegation_create_object_v1_response_m_payload_TEST
#define usergroupdelegation_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_create_object_v1_response_m_payload.h"
usergroupdelegation_create_object_v1_response_m_payload_t* instantiate_usergroupdelegation_create_object_v1_response_m_payload(int include_optional);



usergroupdelegation_create_object_v1_response_m_payload_t* instantiate_usergroupdelegation_create_object_v1_response_m_payload(int include_optional) {
  usergroupdelegation_create_object_v1_response_m_payload_t* usergroupdelegation_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    usergroupdelegation_create_object_v1_response_m_payload = usergroupdelegation_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    usergroupdelegation_create_object_v1_response_m_payload = usergroupdelegation_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return usergroupdelegation_create_object_v1_response_m_payload;
}


#ifdef usergroupdelegation_create_object_v1_response_m_payload_MAIN

void test_usergroupdelegation_create_object_v1_response_m_payload(int include_optional) {
    usergroupdelegation_create_object_v1_response_m_payload_t* usergroupdelegation_create_object_v1_response_m_payload_1 = instantiate_usergroupdelegation_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonusergroupdelegation_create_object_v1_response_m_payload_1 = usergroupdelegation_create_object_v1_response_m_payload_convertToJSON(usergroupdelegation_create_object_v1_response_m_payload_1);
	printf("usergroupdelegation_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonusergroupdelegation_create_object_v1_response_m_payload_1));
	usergroupdelegation_create_object_v1_response_m_payload_t* usergroupdelegation_create_object_v1_response_m_payload_2 = usergroupdelegation_create_object_v1_response_m_payload_parseFromJSON(jsonusergroupdelegation_create_object_v1_response_m_payload_1);
	cJSON* jsonusergroupdelegation_create_object_v1_response_m_payload_2 = usergroupdelegation_create_object_v1_response_m_payload_convertToJSON(usergroupdelegation_create_object_v1_response_m_payload_2);
	printf("repeating usergroupdelegation_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonusergroupdelegation_create_object_v1_response_m_payload_2));
}

int main() {
  test_usergroupdelegation_create_object_v1_response_m_payload(1);
  test_usergroupdelegation_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_create_object_v1_response_m_payload_MAIN
#endif // usergroupdelegation_create_object_v1_response_m_payload_TEST
