#ifndef company_get_autocomplete_v2_response_TEST
#define company_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define company_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/company_get_autocomplete_v2_response.h"
company_get_autocomplete_v2_response_t* instantiate_company_get_autocomplete_v2_response(int include_optional);

#include "test_company_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


company_get_autocomplete_v2_response_t* instantiate_company_get_autocomplete_v2_response(int include_optional) {
  company_get_autocomplete_v2_response_t* company_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    company_get_autocomplete_v2_response = company_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_company_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    company_get_autocomplete_v2_response = company_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return company_get_autocomplete_v2_response;
}


#ifdef company_get_autocomplete_v2_response_MAIN

void test_company_get_autocomplete_v2_response(int include_optional) {
    company_get_autocomplete_v2_response_t* company_get_autocomplete_v2_response_1 = instantiate_company_get_autocomplete_v2_response(include_optional);

	cJSON* jsoncompany_get_autocomplete_v2_response_1 = company_get_autocomplete_v2_response_convertToJSON(company_get_autocomplete_v2_response_1);
	printf("company_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsoncompany_get_autocomplete_v2_response_1));
	company_get_autocomplete_v2_response_t* company_get_autocomplete_v2_response_2 = company_get_autocomplete_v2_response_parseFromJSON(jsoncompany_get_autocomplete_v2_response_1);
	cJSON* jsoncompany_get_autocomplete_v2_response_2 = company_get_autocomplete_v2_response_convertToJSON(company_get_autocomplete_v2_response_2);
	printf("repeating company_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsoncompany_get_autocomplete_v2_response_2));
}

int main() {
  test_company_get_autocomplete_v2_response(1);
  test_company_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // company_get_autocomplete_v2_response_MAIN
#endif // company_get_autocomplete_v2_response_TEST
