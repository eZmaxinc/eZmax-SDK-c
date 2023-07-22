#ifndef usergroupmembership_create_object_v1_response_m_payload_TEST
#define usergroupmembership_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_create_object_v1_response_m_payload.h"
usergroupmembership_create_object_v1_response_m_payload_t* instantiate_usergroupmembership_create_object_v1_response_m_payload(int include_optional);



usergroupmembership_create_object_v1_response_m_payload_t* instantiate_usergroupmembership_create_object_v1_response_m_payload(int include_optional) {
  usergroupmembership_create_object_v1_response_m_payload_t* usergroupmembership_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    usergroupmembership_create_object_v1_response_m_payload = usergroupmembership_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    usergroupmembership_create_object_v1_response_m_payload = usergroupmembership_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return usergroupmembership_create_object_v1_response_m_payload;
}


#ifdef usergroupmembership_create_object_v1_response_m_payload_MAIN

void test_usergroupmembership_create_object_v1_response_m_payload(int include_optional) {
    usergroupmembership_create_object_v1_response_m_payload_t* usergroupmembership_create_object_v1_response_m_payload_1 = instantiate_usergroupmembership_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonusergroupmembership_create_object_v1_response_m_payload_1 = usergroupmembership_create_object_v1_response_m_payload_convertToJSON(usergroupmembership_create_object_v1_response_m_payload_1);
	printf("usergroupmembership_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonusergroupmembership_create_object_v1_response_m_payload_1));
	usergroupmembership_create_object_v1_response_m_payload_t* usergroupmembership_create_object_v1_response_m_payload_2 = usergroupmembership_create_object_v1_response_m_payload_parseFromJSON(jsonusergroupmembership_create_object_v1_response_m_payload_1);
	cJSON* jsonusergroupmembership_create_object_v1_response_m_payload_2 = usergroupmembership_create_object_v1_response_m_payload_convertToJSON(usergroupmembership_create_object_v1_response_m_payload_2);
	printf("repeating usergroupmembership_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonusergroupmembership_create_object_v1_response_m_payload_2));
}

int main() {
  test_usergroupmembership_create_object_v1_response_m_payload(1);
  test_usergroupmembership_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_create_object_v1_response_m_payload_MAIN
#endif // usergroupmembership_create_object_v1_response_m_payload_TEST
