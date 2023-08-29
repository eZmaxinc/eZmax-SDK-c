#ifndef usergroupdelegation_get_object_v2_response_m_payload_TEST
#define usergroupdelegation_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_get_object_v2_response_m_payload.h"
usergroupdelegation_get_object_v2_response_m_payload_t* instantiate_usergroupdelegation_get_object_v2_response_m_payload(int include_optional);

#include "test_usergroupdelegation_response_compound.c"


usergroupdelegation_get_object_v2_response_m_payload_t* instantiate_usergroupdelegation_get_object_v2_response_m_payload(int include_optional) {
  usergroupdelegation_get_object_v2_response_m_payload_t* usergroupdelegation_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    usergroupdelegation_get_object_v2_response_m_payload = usergroupdelegation_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_usergroupdelegation_response_compound(0)
    );
  } else {
    usergroupdelegation_get_object_v2_response_m_payload = usergroupdelegation_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return usergroupdelegation_get_object_v2_response_m_payload;
}


#ifdef usergroupdelegation_get_object_v2_response_m_payload_MAIN

void test_usergroupdelegation_get_object_v2_response_m_payload(int include_optional) {
    usergroupdelegation_get_object_v2_response_m_payload_t* usergroupdelegation_get_object_v2_response_m_payload_1 = instantiate_usergroupdelegation_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonusergroupdelegation_get_object_v2_response_m_payload_1 = usergroupdelegation_get_object_v2_response_m_payload_convertToJSON(usergroupdelegation_get_object_v2_response_m_payload_1);
	printf("usergroupdelegation_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonusergroupdelegation_get_object_v2_response_m_payload_1));
	usergroupdelegation_get_object_v2_response_m_payload_t* usergroupdelegation_get_object_v2_response_m_payload_2 = usergroupdelegation_get_object_v2_response_m_payload_parseFromJSON(jsonusergroupdelegation_get_object_v2_response_m_payload_1);
	cJSON* jsonusergroupdelegation_get_object_v2_response_m_payload_2 = usergroupdelegation_get_object_v2_response_m_payload_convertToJSON(usergroupdelegation_get_object_v2_response_m_payload_2);
	printf("repeating usergroupdelegation_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonusergroupdelegation_get_object_v2_response_m_payload_2));
}

int main() {
  test_usergroupdelegation_get_object_v2_response_m_payload(1);
  test_usergroupdelegation_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_get_object_v2_response_m_payload_MAIN
#endif // usergroupdelegation_get_object_v2_response_m_payload_TEST
