#ifndef subnet_create_object_v1_response_m_payload_TEST
#define subnet_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_create_object_v1_response_m_payload.h"
subnet_create_object_v1_response_m_payload_t* instantiate_subnet_create_object_v1_response_m_payload(int include_optional);



subnet_create_object_v1_response_m_payload_t* instantiate_subnet_create_object_v1_response_m_payload(int include_optional) {
  subnet_create_object_v1_response_m_payload_t* subnet_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    subnet_create_object_v1_response_m_payload = subnet_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    subnet_create_object_v1_response_m_payload = subnet_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return subnet_create_object_v1_response_m_payload;
}


#ifdef subnet_create_object_v1_response_m_payload_MAIN

void test_subnet_create_object_v1_response_m_payload(int include_optional) {
    subnet_create_object_v1_response_m_payload_t* subnet_create_object_v1_response_m_payload_1 = instantiate_subnet_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonsubnet_create_object_v1_response_m_payload_1 = subnet_create_object_v1_response_m_payload_convertToJSON(subnet_create_object_v1_response_m_payload_1);
	printf("subnet_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonsubnet_create_object_v1_response_m_payload_1));
	subnet_create_object_v1_response_m_payload_t* subnet_create_object_v1_response_m_payload_2 = subnet_create_object_v1_response_m_payload_parseFromJSON(jsonsubnet_create_object_v1_response_m_payload_1);
	cJSON* jsonsubnet_create_object_v1_response_m_payload_2 = subnet_create_object_v1_response_m_payload_convertToJSON(subnet_create_object_v1_response_m_payload_2);
	printf("repeating subnet_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonsubnet_create_object_v1_response_m_payload_2));
}

int main() {
  test_subnet_create_object_v1_response_m_payload(1);
  test_subnet_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_create_object_v1_response_m_payload_MAIN
#endif // subnet_create_object_v1_response_m_payload_TEST
