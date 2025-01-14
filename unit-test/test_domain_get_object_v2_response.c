#ifndef domain_get_object_v2_response_TEST
#define domain_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define domain_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/domain_get_object_v2_response.h"
domain_get_object_v2_response_t* instantiate_domain_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_domain_get_object_v2_response_m_payload.c"


domain_get_object_v2_response_t* instantiate_domain_get_object_v2_response(int include_optional) {
  domain_get_object_v2_response_t* domain_get_object_v2_response = NULL;
  if (include_optional) {
    domain_get_object_v2_response = domain_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_domain_get_object_v2_response_m_payload(0)
    );
  } else {
    domain_get_object_v2_response = domain_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return domain_get_object_v2_response;
}


#ifdef domain_get_object_v2_response_MAIN

void test_domain_get_object_v2_response(int include_optional) {
    domain_get_object_v2_response_t* domain_get_object_v2_response_1 = instantiate_domain_get_object_v2_response(include_optional);

	cJSON* jsondomain_get_object_v2_response_1 = domain_get_object_v2_response_convertToJSON(domain_get_object_v2_response_1);
	printf("domain_get_object_v2_response :\n%s\n", cJSON_Print(jsondomain_get_object_v2_response_1));
	domain_get_object_v2_response_t* domain_get_object_v2_response_2 = domain_get_object_v2_response_parseFromJSON(jsondomain_get_object_v2_response_1);
	cJSON* jsondomain_get_object_v2_response_2 = domain_get_object_v2_response_convertToJSON(domain_get_object_v2_response_2);
	printf("repeating domain_get_object_v2_response:\n%s\n", cJSON_Print(jsondomain_get_object_v2_response_2));
}

int main() {
  test_domain_get_object_v2_response(1);
  test_domain_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // domain_get_object_v2_response_MAIN
#endif // domain_get_object_v2_response_TEST
