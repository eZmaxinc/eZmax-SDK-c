#ifndef domain_create_object_v1_response_TEST
#define domain_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_create_object_v1_response.h"
domain_create_object_v1_response_t* instantiate_domain_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_domain_create_object_v1_response_m_payload.c"


domain_create_object_v1_response_t* instantiate_domain_create_object_v1_response(int include_optional) {
  domain_create_object_v1_response_t* domain_create_object_v1_response = NULL;
  if (include_optional) {
    domain_create_object_v1_response = domain_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_domain_create_object_v1_response_m_payload(0)
    );
  } else {
    domain_create_object_v1_response = domain_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return domain_create_object_v1_response;
}


#ifdef domain_create_object_v1_response_MAIN

void test_domain_create_object_v1_response(int include_optional) {
    domain_create_object_v1_response_t* domain_create_object_v1_response_1 = instantiate_domain_create_object_v1_response(include_optional);

	cJSON* jsondomain_create_object_v1_response_1 = domain_create_object_v1_response_convertToJSON(domain_create_object_v1_response_1);
	printf("domain_create_object_v1_response :\n%s\n", cJSON_Print(jsondomain_create_object_v1_response_1));
	domain_create_object_v1_response_t* domain_create_object_v1_response_2 = domain_create_object_v1_response_parseFromJSON(jsondomain_create_object_v1_response_1);
	cJSON* jsondomain_create_object_v1_response_2 = domain_create_object_v1_response_convertToJSON(domain_create_object_v1_response_2);
	printf("repeating domain_create_object_v1_response:\n%s\n", cJSON_Print(jsondomain_create_object_v1_response_2));
}

int main() {
  test_domain_create_object_v1_response(1);
  test_domain_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_create_object_v1_response_MAIN
#endif // domain_create_object_v1_response_TEST
