#ifndef billingentityexternal_get_autocomplete_v2_response_TEST
#define billingentityexternal_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityexternal_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityexternal_get_autocomplete_v2_response.h"
billingentityexternal_get_autocomplete_v2_response_t* instantiate_billingentityexternal_get_autocomplete_v2_response(int include_optional);

#include "test_billingentityexternal_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


billingentityexternal_get_autocomplete_v2_response_t* instantiate_billingentityexternal_get_autocomplete_v2_response(int include_optional) {
  billingentityexternal_get_autocomplete_v2_response_t* billingentityexternal_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    billingentityexternal_get_autocomplete_v2_response = billingentityexternal_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_billingentityexternal_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    billingentityexternal_get_autocomplete_v2_response = billingentityexternal_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return billingentityexternal_get_autocomplete_v2_response;
}


#ifdef billingentityexternal_get_autocomplete_v2_response_MAIN

void test_billingentityexternal_get_autocomplete_v2_response(int include_optional) {
    billingentityexternal_get_autocomplete_v2_response_t* billingentityexternal_get_autocomplete_v2_response_1 = instantiate_billingentityexternal_get_autocomplete_v2_response(include_optional);

	cJSON* jsonbillingentityexternal_get_autocomplete_v2_response_1 = billingentityexternal_get_autocomplete_v2_response_convertToJSON(billingentityexternal_get_autocomplete_v2_response_1);
	printf("billingentityexternal_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonbillingentityexternal_get_autocomplete_v2_response_1));
	billingentityexternal_get_autocomplete_v2_response_t* billingentityexternal_get_autocomplete_v2_response_2 = billingentityexternal_get_autocomplete_v2_response_parseFromJSON(jsonbillingentityexternal_get_autocomplete_v2_response_1);
	cJSON* jsonbillingentityexternal_get_autocomplete_v2_response_2 = billingentityexternal_get_autocomplete_v2_response_convertToJSON(billingentityexternal_get_autocomplete_v2_response_2);
	printf("repeating billingentityexternal_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonbillingentityexternal_get_autocomplete_v2_response_2));
}

int main() {
  test_billingentityexternal_get_autocomplete_v2_response(1);
  test_billingentityexternal_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityexternal_get_autocomplete_v2_response_MAIN
#endif // billingentityexternal_get_autocomplete_v2_response_TEST
