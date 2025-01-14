#ifndef domain_get_object_v2_response_m_payload_TEST
#define domain_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_get_object_v2_response_m_payload.h"
domain_get_object_v2_response_m_payload_t* instantiate_domain_get_object_v2_response_m_payload(int include_optional);

#include "test_domain_response_compound.c"


domain_get_object_v2_response_m_payload_t* instantiate_domain_get_object_v2_response_m_payload(int include_optional) {
  domain_get_object_v2_response_m_payload_t* domain_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    domain_get_object_v2_response_m_payload = domain_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_domain_response_compound(0)
    );
  } else {
    domain_get_object_v2_response_m_payload = domain_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return domain_get_object_v2_response_m_payload;
}


#ifdef domain_get_object_v2_response_m_payload_MAIN

void test_domain_get_object_v2_response_m_payload(int include_optional) {
    domain_get_object_v2_response_m_payload_t* domain_get_object_v2_response_m_payload_1 = instantiate_domain_get_object_v2_response_m_payload(include_optional);

	cJSON* jsondomain_get_object_v2_response_m_payload_1 = domain_get_object_v2_response_m_payload_convertToJSON(domain_get_object_v2_response_m_payload_1);
	printf("domain_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsondomain_get_object_v2_response_m_payload_1));
	domain_get_object_v2_response_m_payload_t* domain_get_object_v2_response_m_payload_2 = domain_get_object_v2_response_m_payload_parseFromJSON(jsondomain_get_object_v2_response_m_payload_1);
	cJSON* jsondomain_get_object_v2_response_m_payload_2 = domain_get_object_v2_response_m_payload_convertToJSON(domain_get_object_v2_response_m_payload_2);
	printf("repeating domain_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsondomain_get_object_v2_response_m_payload_2));
}

int main() {
  test_domain_get_object_v2_response_m_payload(1);
  test_domain_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_get_object_v2_response_m_payload_MAIN
#endif // domain_get_object_v2_response_m_payload_TEST
