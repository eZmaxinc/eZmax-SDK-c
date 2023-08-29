#ifndef franchiseoffice_get_autocomplete_v2_response_TEST
#define franchiseoffice_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchiseoffice_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchiseoffice_get_autocomplete_v2_response.h"
franchiseoffice_get_autocomplete_v2_response_t* instantiate_franchiseoffice_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_franchiseoffice_get_autocomplete_v2_response_m_payload.c"


franchiseoffice_get_autocomplete_v2_response_t* instantiate_franchiseoffice_get_autocomplete_v2_response(int include_optional) {
  franchiseoffice_get_autocomplete_v2_response_t* franchiseoffice_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    franchiseoffice_get_autocomplete_v2_response = franchiseoffice_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_franchiseoffice_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    franchiseoffice_get_autocomplete_v2_response = franchiseoffice_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return franchiseoffice_get_autocomplete_v2_response;
}


#ifdef franchiseoffice_get_autocomplete_v2_response_MAIN

void test_franchiseoffice_get_autocomplete_v2_response(int include_optional) {
    franchiseoffice_get_autocomplete_v2_response_t* franchiseoffice_get_autocomplete_v2_response_1 = instantiate_franchiseoffice_get_autocomplete_v2_response(include_optional);

	cJSON* jsonfranchiseoffice_get_autocomplete_v2_response_1 = franchiseoffice_get_autocomplete_v2_response_convertToJSON(franchiseoffice_get_autocomplete_v2_response_1);
	printf("franchiseoffice_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonfranchiseoffice_get_autocomplete_v2_response_1));
	franchiseoffice_get_autocomplete_v2_response_t* franchiseoffice_get_autocomplete_v2_response_2 = franchiseoffice_get_autocomplete_v2_response_parseFromJSON(jsonfranchiseoffice_get_autocomplete_v2_response_1);
	cJSON* jsonfranchiseoffice_get_autocomplete_v2_response_2 = franchiseoffice_get_autocomplete_v2_response_convertToJSON(franchiseoffice_get_autocomplete_v2_response_2);
	printf("repeating franchiseoffice_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonfranchiseoffice_get_autocomplete_v2_response_2));
}

int main() {
  test_franchiseoffice_get_autocomplete_v2_response(1);
  test_franchiseoffice_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchiseoffice_get_autocomplete_v2_response_MAIN
#endif // franchiseoffice_get_autocomplete_v2_response_TEST
