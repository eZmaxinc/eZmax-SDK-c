#ifndef domain_create_object_v1_response_m_payload_TEST
#define domain_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_create_object_v1_response_m_payload.h"
domain_create_object_v1_response_m_payload_t* instantiate_domain_create_object_v1_response_m_payload(int include_optional);



domain_create_object_v1_response_m_payload_t* instantiate_domain_create_object_v1_response_m_payload(int include_optional) {
  domain_create_object_v1_response_m_payload_t* domain_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    domain_create_object_v1_response_m_payload = domain_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    domain_create_object_v1_response_m_payload = domain_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return domain_create_object_v1_response_m_payload;
}


#ifdef domain_create_object_v1_response_m_payload_MAIN

void test_domain_create_object_v1_response_m_payload(int include_optional) {
    domain_create_object_v1_response_m_payload_t* domain_create_object_v1_response_m_payload_1 = instantiate_domain_create_object_v1_response_m_payload(include_optional);

	cJSON* jsondomain_create_object_v1_response_m_payload_1 = domain_create_object_v1_response_m_payload_convertToJSON(domain_create_object_v1_response_m_payload_1);
	printf("domain_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsondomain_create_object_v1_response_m_payload_1));
	domain_create_object_v1_response_m_payload_t* domain_create_object_v1_response_m_payload_2 = domain_create_object_v1_response_m_payload_parseFromJSON(jsondomain_create_object_v1_response_m_payload_1);
	cJSON* jsondomain_create_object_v1_response_m_payload_2 = domain_create_object_v1_response_m_payload_convertToJSON(domain_create_object_v1_response_m_payload_2);
	printf("repeating domain_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsondomain_create_object_v1_response_m_payload_2));
}

int main() {
  test_domain_create_object_v1_response_m_payload(1);
  test_domain_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_create_object_v1_response_m_payload_MAIN
#endif // domain_create_object_v1_response_m_payload_TEST
