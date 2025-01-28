#ifndef bankaccount_get_autocomplete_v2_response_TEST
#define bankaccount_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bankaccount_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bankaccount_get_autocomplete_v2_response.h"
bankaccount_get_autocomplete_v2_response_t* instantiate_bankaccount_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_bankaccount_get_autocomplete_v2_response_m_payload.c"


bankaccount_get_autocomplete_v2_response_t* instantiate_bankaccount_get_autocomplete_v2_response(int include_optional) {
  bankaccount_get_autocomplete_v2_response_t* bankaccount_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    bankaccount_get_autocomplete_v2_response = bankaccount_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_bankaccount_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    bankaccount_get_autocomplete_v2_response = bankaccount_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return bankaccount_get_autocomplete_v2_response;
}


#ifdef bankaccount_get_autocomplete_v2_response_MAIN

void test_bankaccount_get_autocomplete_v2_response(int include_optional) {
    bankaccount_get_autocomplete_v2_response_t* bankaccount_get_autocomplete_v2_response_1 = instantiate_bankaccount_get_autocomplete_v2_response(include_optional);

	cJSON* jsonbankaccount_get_autocomplete_v2_response_1 = bankaccount_get_autocomplete_v2_response_convertToJSON(bankaccount_get_autocomplete_v2_response_1);
	printf("bankaccount_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonbankaccount_get_autocomplete_v2_response_1));
	bankaccount_get_autocomplete_v2_response_t* bankaccount_get_autocomplete_v2_response_2 = bankaccount_get_autocomplete_v2_response_parseFromJSON(jsonbankaccount_get_autocomplete_v2_response_1);
	cJSON* jsonbankaccount_get_autocomplete_v2_response_2 = bankaccount_get_autocomplete_v2_response_convertToJSON(bankaccount_get_autocomplete_v2_response_2);
	printf("repeating bankaccount_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonbankaccount_get_autocomplete_v2_response_2));
}

int main() {
  test_bankaccount_get_autocomplete_v2_response(1);
  test_bankaccount_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // bankaccount_get_autocomplete_v2_response_MAIN
#endif // bankaccount_get_autocomplete_v2_response_TEST
