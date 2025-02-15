#ifndef creditcardmerchant_get_autocomplete_v2_response_TEST
#define creditcardmerchant_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_get_autocomplete_v2_response.h"
creditcardmerchant_get_autocomplete_v2_response_t* instantiate_creditcardmerchant_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_creditcardmerchant_get_autocomplete_v2_response_m_payload.c"


creditcardmerchant_get_autocomplete_v2_response_t* instantiate_creditcardmerchant_get_autocomplete_v2_response(int include_optional) {
  creditcardmerchant_get_autocomplete_v2_response_t* creditcardmerchant_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    creditcardmerchant_get_autocomplete_v2_response = creditcardmerchant_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_creditcardmerchant_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    creditcardmerchant_get_autocomplete_v2_response = creditcardmerchant_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return creditcardmerchant_get_autocomplete_v2_response;
}


#ifdef creditcardmerchant_get_autocomplete_v2_response_MAIN

void test_creditcardmerchant_get_autocomplete_v2_response(int include_optional) {
    creditcardmerchant_get_autocomplete_v2_response_t* creditcardmerchant_get_autocomplete_v2_response_1 = instantiate_creditcardmerchant_get_autocomplete_v2_response(include_optional);

	cJSON* jsoncreditcardmerchant_get_autocomplete_v2_response_1 = creditcardmerchant_get_autocomplete_v2_response_convertToJSON(creditcardmerchant_get_autocomplete_v2_response_1);
	printf("creditcardmerchant_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsoncreditcardmerchant_get_autocomplete_v2_response_1));
	creditcardmerchant_get_autocomplete_v2_response_t* creditcardmerchant_get_autocomplete_v2_response_2 = creditcardmerchant_get_autocomplete_v2_response_parseFromJSON(jsoncreditcardmerchant_get_autocomplete_v2_response_1);
	cJSON* jsoncreditcardmerchant_get_autocomplete_v2_response_2 = creditcardmerchant_get_autocomplete_v2_response_convertToJSON(creditcardmerchant_get_autocomplete_v2_response_2);
	printf("repeating creditcardmerchant_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsoncreditcardmerchant_get_autocomplete_v2_response_2));
}

int main() {
  test_creditcardmerchant_get_autocomplete_v2_response(1);
  test_creditcardmerchant_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_get_autocomplete_v2_response_MAIN
#endif // creditcardmerchant_get_autocomplete_v2_response_TEST
