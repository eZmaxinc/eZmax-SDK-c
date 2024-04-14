#ifndef creditcardtype_get_autocomplete_v2_response_TEST
#define creditcardtype_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardtype_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardtype_get_autocomplete_v2_response.h"
creditcardtype_get_autocomplete_v2_response_t* instantiate_creditcardtype_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_creditcardtype_get_autocomplete_v2_response_m_payload.c"


creditcardtype_get_autocomplete_v2_response_t* instantiate_creditcardtype_get_autocomplete_v2_response(int include_optional) {
  creditcardtype_get_autocomplete_v2_response_t* creditcardtype_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    creditcardtype_get_autocomplete_v2_response = creditcardtype_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_creditcardtype_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    creditcardtype_get_autocomplete_v2_response = creditcardtype_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return creditcardtype_get_autocomplete_v2_response;
}


#ifdef creditcardtype_get_autocomplete_v2_response_MAIN

void test_creditcardtype_get_autocomplete_v2_response(int include_optional) {
    creditcardtype_get_autocomplete_v2_response_t* creditcardtype_get_autocomplete_v2_response_1 = instantiate_creditcardtype_get_autocomplete_v2_response(include_optional);

	cJSON* jsoncreditcardtype_get_autocomplete_v2_response_1 = creditcardtype_get_autocomplete_v2_response_convertToJSON(creditcardtype_get_autocomplete_v2_response_1);
	printf("creditcardtype_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsoncreditcardtype_get_autocomplete_v2_response_1));
	creditcardtype_get_autocomplete_v2_response_t* creditcardtype_get_autocomplete_v2_response_2 = creditcardtype_get_autocomplete_v2_response_parseFromJSON(jsoncreditcardtype_get_autocomplete_v2_response_1);
	cJSON* jsoncreditcardtype_get_autocomplete_v2_response_2 = creditcardtype_get_autocomplete_v2_response_convertToJSON(creditcardtype_get_autocomplete_v2_response_2);
	printf("repeating creditcardtype_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsoncreditcardtype_get_autocomplete_v2_response_2));
}

int main() {
  test_creditcardtype_get_autocomplete_v2_response(1);
  test_creditcardtype_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardtype_get_autocomplete_v2_response_MAIN
#endif // creditcardtype_get_autocomplete_v2_response_TEST
