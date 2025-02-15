#ifndef creditcardclient_get_autocomplete_v2_response_TEST
#define creditcardclient_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_get_autocomplete_v2_response.h"
creditcardclient_get_autocomplete_v2_response_t* instantiate_creditcardclient_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_creditcardclient_get_autocomplete_v2_response_m_payload.c"


creditcardclient_get_autocomplete_v2_response_t* instantiate_creditcardclient_get_autocomplete_v2_response(int include_optional) {
  creditcardclient_get_autocomplete_v2_response_t* creditcardclient_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    creditcardclient_get_autocomplete_v2_response = creditcardclient_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_creditcardclient_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    creditcardclient_get_autocomplete_v2_response = creditcardclient_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return creditcardclient_get_autocomplete_v2_response;
}


#ifdef creditcardclient_get_autocomplete_v2_response_MAIN

void test_creditcardclient_get_autocomplete_v2_response(int include_optional) {
    creditcardclient_get_autocomplete_v2_response_t* creditcardclient_get_autocomplete_v2_response_1 = instantiate_creditcardclient_get_autocomplete_v2_response(include_optional);

	cJSON* jsoncreditcardclient_get_autocomplete_v2_response_1 = creditcardclient_get_autocomplete_v2_response_convertToJSON(creditcardclient_get_autocomplete_v2_response_1);
	printf("creditcardclient_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsoncreditcardclient_get_autocomplete_v2_response_1));
	creditcardclient_get_autocomplete_v2_response_t* creditcardclient_get_autocomplete_v2_response_2 = creditcardclient_get_autocomplete_v2_response_parseFromJSON(jsoncreditcardclient_get_autocomplete_v2_response_1);
	cJSON* jsoncreditcardclient_get_autocomplete_v2_response_2 = creditcardclient_get_autocomplete_v2_response_convertToJSON(creditcardclient_get_autocomplete_v2_response_2);
	printf("repeating creditcardclient_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsoncreditcardclient_get_autocomplete_v2_response_2));
}

int main() {
  test_creditcardclient_get_autocomplete_v2_response(1);
  test_creditcardclient_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_get_autocomplete_v2_response_MAIN
#endif // creditcardclient_get_autocomplete_v2_response_TEST
