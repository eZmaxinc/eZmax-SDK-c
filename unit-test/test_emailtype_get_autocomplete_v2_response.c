#ifndef emailtype_get_autocomplete_v2_response_TEST
#define emailtype_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emailtype_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emailtype_get_autocomplete_v2_response.h"
emailtype_get_autocomplete_v2_response_t* instantiate_emailtype_get_autocomplete_v2_response(int include_optional);

#include "test_emailtype_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


emailtype_get_autocomplete_v2_response_t* instantiate_emailtype_get_autocomplete_v2_response(int include_optional) {
  emailtype_get_autocomplete_v2_response_t* emailtype_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    emailtype_get_autocomplete_v2_response = emailtype_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_emailtype_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    emailtype_get_autocomplete_v2_response = emailtype_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return emailtype_get_autocomplete_v2_response;
}


#ifdef emailtype_get_autocomplete_v2_response_MAIN

void test_emailtype_get_autocomplete_v2_response(int include_optional) {
    emailtype_get_autocomplete_v2_response_t* emailtype_get_autocomplete_v2_response_1 = instantiate_emailtype_get_autocomplete_v2_response(include_optional);

	cJSON* jsonemailtype_get_autocomplete_v2_response_1 = emailtype_get_autocomplete_v2_response_convertToJSON(emailtype_get_autocomplete_v2_response_1);
	printf("emailtype_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonemailtype_get_autocomplete_v2_response_1));
	emailtype_get_autocomplete_v2_response_t* emailtype_get_autocomplete_v2_response_2 = emailtype_get_autocomplete_v2_response_parseFromJSON(jsonemailtype_get_autocomplete_v2_response_1);
	cJSON* jsonemailtype_get_autocomplete_v2_response_2 = emailtype_get_autocomplete_v2_response_convertToJSON(emailtype_get_autocomplete_v2_response_2);
	printf("repeating emailtype_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonemailtype_get_autocomplete_v2_response_2));
}

int main() {
  test_emailtype_get_autocomplete_v2_response(1);
  test_emailtype_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // emailtype_get_autocomplete_v2_response_MAIN
#endif // emailtype_get_autocomplete_v2_response_TEST
