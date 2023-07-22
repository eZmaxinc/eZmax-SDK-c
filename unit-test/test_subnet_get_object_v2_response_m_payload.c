#ifndef subnet_get_object_v2_response_m_payload_TEST
#define subnet_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_get_object_v2_response_m_payload.h"
subnet_get_object_v2_response_m_payload_t* instantiate_subnet_get_object_v2_response_m_payload(int include_optional);

#include "test_subnet_response_compound.c"


subnet_get_object_v2_response_m_payload_t* instantiate_subnet_get_object_v2_response_m_payload(int include_optional) {
  subnet_get_object_v2_response_m_payload_t* subnet_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    subnet_get_object_v2_response_m_payload = subnet_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_subnet_response_compound(0)
    );
  } else {
    subnet_get_object_v2_response_m_payload = subnet_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return subnet_get_object_v2_response_m_payload;
}


#ifdef subnet_get_object_v2_response_m_payload_MAIN

void test_subnet_get_object_v2_response_m_payload(int include_optional) {
    subnet_get_object_v2_response_m_payload_t* subnet_get_object_v2_response_m_payload_1 = instantiate_subnet_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonsubnet_get_object_v2_response_m_payload_1 = subnet_get_object_v2_response_m_payload_convertToJSON(subnet_get_object_v2_response_m_payload_1);
	printf("subnet_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonsubnet_get_object_v2_response_m_payload_1));
	subnet_get_object_v2_response_m_payload_t* subnet_get_object_v2_response_m_payload_2 = subnet_get_object_v2_response_m_payload_parseFromJSON(jsonsubnet_get_object_v2_response_m_payload_1);
	cJSON* jsonsubnet_get_object_v2_response_m_payload_2 = subnet_get_object_v2_response_m_payload_convertToJSON(subnet_get_object_v2_response_m_payload_2);
	printf("repeating subnet_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonsubnet_get_object_v2_response_m_payload_2));
}

int main() {
  test_subnet_get_object_v2_response_m_payload(1);
  test_subnet_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_get_object_v2_response_m_payload_MAIN
#endif // subnet_get_object_v2_response_m_payload_TEST
