#ifndef taxassignment_get_autocomplete_v2_response_TEST
#define taxassignment_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define taxassignment_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/taxassignment_get_autocomplete_v2_response.h"
taxassignment_get_autocomplete_v2_response_t* instantiate_taxassignment_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_taxassignment_get_autocomplete_v2_response_m_payload.c"


taxassignment_get_autocomplete_v2_response_t* instantiate_taxassignment_get_autocomplete_v2_response(int include_optional) {
  taxassignment_get_autocomplete_v2_response_t* taxassignment_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    taxassignment_get_autocomplete_v2_response = taxassignment_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_taxassignment_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    taxassignment_get_autocomplete_v2_response = taxassignment_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return taxassignment_get_autocomplete_v2_response;
}


#ifdef taxassignment_get_autocomplete_v2_response_MAIN

void test_taxassignment_get_autocomplete_v2_response(int include_optional) {
    taxassignment_get_autocomplete_v2_response_t* taxassignment_get_autocomplete_v2_response_1 = instantiate_taxassignment_get_autocomplete_v2_response(include_optional);

	cJSON* jsontaxassignment_get_autocomplete_v2_response_1 = taxassignment_get_autocomplete_v2_response_convertToJSON(taxassignment_get_autocomplete_v2_response_1);
	printf("taxassignment_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsontaxassignment_get_autocomplete_v2_response_1));
	taxassignment_get_autocomplete_v2_response_t* taxassignment_get_autocomplete_v2_response_2 = taxassignment_get_autocomplete_v2_response_parseFromJSON(jsontaxassignment_get_autocomplete_v2_response_1);
	cJSON* jsontaxassignment_get_autocomplete_v2_response_2 = taxassignment_get_autocomplete_v2_response_convertToJSON(taxassignment_get_autocomplete_v2_response_2);
	printf("repeating taxassignment_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsontaxassignment_get_autocomplete_v2_response_2));
}

int main() {
  test_taxassignment_get_autocomplete_v2_response(1);
  test_taxassignment_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // taxassignment_get_autocomplete_v2_response_MAIN
#endif // taxassignment_get_autocomplete_v2_response_TEST
