#ifndef billingentityinternal_get_autocomplete_v2_response_TEST
#define billingentityinternal_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_get_autocomplete_v2_response.h"
billingentityinternal_get_autocomplete_v2_response_t* instantiate_billingentityinternal_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_billingentityinternal_get_autocomplete_v2_response_m_payload.c"


billingentityinternal_get_autocomplete_v2_response_t* instantiate_billingentityinternal_get_autocomplete_v2_response(int include_optional) {
  billingentityinternal_get_autocomplete_v2_response_t* billingentityinternal_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    billingentityinternal_get_autocomplete_v2_response = billingentityinternal_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_billingentityinternal_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    billingentityinternal_get_autocomplete_v2_response = billingentityinternal_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return billingentityinternal_get_autocomplete_v2_response;
}


#ifdef billingentityinternal_get_autocomplete_v2_response_MAIN

void test_billingentityinternal_get_autocomplete_v2_response(int include_optional) {
    billingentityinternal_get_autocomplete_v2_response_t* billingentityinternal_get_autocomplete_v2_response_1 = instantiate_billingentityinternal_get_autocomplete_v2_response(include_optional);

	cJSON* jsonbillingentityinternal_get_autocomplete_v2_response_1 = billingentityinternal_get_autocomplete_v2_response_convertToJSON(billingentityinternal_get_autocomplete_v2_response_1);
	printf("billingentityinternal_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonbillingentityinternal_get_autocomplete_v2_response_1));
	billingentityinternal_get_autocomplete_v2_response_t* billingentityinternal_get_autocomplete_v2_response_2 = billingentityinternal_get_autocomplete_v2_response_parseFromJSON(jsonbillingentityinternal_get_autocomplete_v2_response_1);
	cJSON* jsonbillingentityinternal_get_autocomplete_v2_response_2 = billingentityinternal_get_autocomplete_v2_response_convertToJSON(billingentityinternal_get_autocomplete_v2_response_2);
	printf("repeating billingentityinternal_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonbillingentityinternal_get_autocomplete_v2_response_2));
}

int main() {
  test_billingentityinternal_get_autocomplete_v2_response(1);
  test_billingentityinternal_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_get_autocomplete_v2_response_MAIN
#endif // billingentityinternal_get_autocomplete_v2_response_TEST
