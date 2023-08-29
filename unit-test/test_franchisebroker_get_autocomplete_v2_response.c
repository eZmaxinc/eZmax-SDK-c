#ifndef franchisebroker_get_autocomplete_v2_response_TEST
#define franchisebroker_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisebroker_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisebroker_get_autocomplete_v2_response.h"
franchisebroker_get_autocomplete_v2_response_t* instantiate_franchisebroker_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_franchisebroker_get_autocomplete_v2_response_m_payload.c"


franchisebroker_get_autocomplete_v2_response_t* instantiate_franchisebroker_get_autocomplete_v2_response(int include_optional) {
  franchisebroker_get_autocomplete_v2_response_t* franchisebroker_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    franchisebroker_get_autocomplete_v2_response = franchisebroker_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_franchisebroker_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    franchisebroker_get_autocomplete_v2_response = franchisebroker_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return franchisebroker_get_autocomplete_v2_response;
}


#ifdef franchisebroker_get_autocomplete_v2_response_MAIN

void test_franchisebroker_get_autocomplete_v2_response(int include_optional) {
    franchisebroker_get_autocomplete_v2_response_t* franchisebroker_get_autocomplete_v2_response_1 = instantiate_franchisebroker_get_autocomplete_v2_response(include_optional);

	cJSON* jsonfranchisebroker_get_autocomplete_v2_response_1 = franchisebroker_get_autocomplete_v2_response_convertToJSON(franchisebroker_get_autocomplete_v2_response_1);
	printf("franchisebroker_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonfranchisebroker_get_autocomplete_v2_response_1));
	franchisebroker_get_autocomplete_v2_response_t* franchisebroker_get_autocomplete_v2_response_2 = franchisebroker_get_autocomplete_v2_response_parseFromJSON(jsonfranchisebroker_get_autocomplete_v2_response_1);
	cJSON* jsonfranchisebroker_get_autocomplete_v2_response_2 = franchisebroker_get_autocomplete_v2_response_convertToJSON(franchisebroker_get_autocomplete_v2_response_2);
	printf("repeating franchisebroker_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonfranchisebroker_get_autocomplete_v2_response_2));
}

int main() {
  test_franchisebroker_get_autocomplete_v2_response(1);
  test_franchisebroker_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisebroker_get_autocomplete_v2_response_MAIN
#endif // franchisebroker_get_autocomplete_v2_response_TEST
