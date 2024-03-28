#ifndef country_get_autocomplete_v2_response_TEST
#define country_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_get_autocomplete_v2_response.h"
country_get_autocomplete_v2_response_t* instantiate_country_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_country_get_autocomplete_v2_response_m_payload.c"


country_get_autocomplete_v2_response_t* instantiate_country_get_autocomplete_v2_response(int include_optional) {
  country_get_autocomplete_v2_response_t* country_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    country_get_autocomplete_v2_response = country_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_country_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    country_get_autocomplete_v2_response = country_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return country_get_autocomplete_v2_response;
}


#ifdef country_get_autocomplete_v2_response_MAIN

void test_country_get_autocomplete_v2_response(int include_optional) {
    country_get_autocomplete_v2_response_t* country_get_autocomplete_v2_response_1 = instantiate_country_get_autocomplete_v2_response(include_optional);

	cJSON* jsoncountry_get_autocomplete_v2_response_1 = country_get_autocomplete_v2_response_convertToJSON(country_get_autocomplete_v2_response_1);
	printf("country_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsoncountry_get_autocomplete_v2_response_1));
	country_get_autocomplete_v2_response_t* country_get_autocomplete_v2_response_2 = country_get_autocomplete_v2_response_parseFromJSON(jsoncountry_get_autocomplete_v2_response_1);
	cJSON* jsoncountry_get_autocomplete_v2_response_2 = country_get_autocomplete_v2_response_convertToJSON(country_get_autocomplete_v2_response_2);
	printf("repeating country_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsoncountry_get_autocomplete_v2_response_2));
}

int main() {
  test_country_get_autocomplete_v2_response(1);
  test_country_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_get_autocomplete_v2_response_MAIN
#endif // country_get_autocomplete_v2_response_TEST