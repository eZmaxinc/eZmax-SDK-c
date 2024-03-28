#ifndef province_get_autocomplete_v2_response_TEST
#define province_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define province_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/province_get_autocomplete_v2_response.h"
province_get_autocomplete_v2_response_t* instantiate_province_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_province_get_autocomplete_v2_response_m_payload.c"


province_get_autocomplete_v2_response_t* instantiate_province_get_autocomplete_v2_response(int include_optional) {
  province_get_autocomplete_v2_response_t* province_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    province_get_autocomplete_v2_response = province_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_province_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    province_get_autocomplete_v2_response = province_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return province_get_autocomplete_v2_response;
}


#ifdef province_get_autocomplete_v2_response_MAIN

void test_province_get_autocomplete_v2_response(int include_optional) {
    province_get_autocomplete_v2_response_t* province_get_autocomplete_v2_response_1 = instantiate_province_get_autocomplete_v2_response(include_optional);

	cJSON* jsonprovince_get_autocomplete_v2_response_1 = province_get_autocomplete_v2_response_convertToJSON(province_get_autocomplete_v2_response_1);
	printf("province_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonprovince_get_autocomplete_v2_response_1));
	province_get_autocomplete_v2_response_t* province_get_autocomplete_v2_response_2 = province_get_autocomplete_v2_response_parseFromJSON(jsonprovince_get_autocomplete_v2_response_1);
	cJSON* jsonprovince_get_autocomplete_v2_response_2 = province_get_autocomplete_v2_response_convertToJSON(province_get_autocomplete_v2_response_2);
	printf("repeating province_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonprovince_get_autocomplete_v2_response_2));
}

int main() {
  test_province_get_autocomplete_v2_response(1);
  test_province_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // province_get_autocomplete_v2_response_MAIN
#endif // province_get_autocomplete_v2_response_TEST
