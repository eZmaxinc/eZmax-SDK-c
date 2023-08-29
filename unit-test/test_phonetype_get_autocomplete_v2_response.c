#ifndef phonetype_get_autocomplete_v2_response_TEST
#define phonetype_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phonetype_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phonetype_get_autocomplete_v2_response.h"
phonetype_get_autocomplete_v2_response_t* instantiate_phonetype_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_phonetype_get_autocomplete_v2_response_m_payload.c"


phonetype_get_autocomplete_v2_response_t* instantiate_phonetype_get_autocomplete_v2_response(int include_optional) {
  phonetype_get_autocomplete_v2_response_t* phonetype_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    phonetype_get_autocomplete_v2_response = phonetype_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_phonetype_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    phonetype_get_autocomplete_v2_response = phonetype_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return phonetype_get_autocomplete_v2_response;
}


#ifdef phonetype_get_autocomplete_v2_response_MAIN

void test_phonetype_get_autocomplete_v2_response(int include_optional) {
    phonetype_get_autocomplete_v2_response_t* phonetype_get_autocomplete_v2_response_1 = instantiate_phonetype_get_autocomplete_v2_response(include_optional);

	cJSON* jsonphonetype_get_autocomplete_v2_response_1 = phonetype_get_autocomplete_v2_response_convertToJSON(phonetype_get_autocomplete_v2_response_1);
	printf("phonetype_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonphonetype_get_autocomplete_v2_response_1));
	phonetype_get_autocomplete_v2_response_t* phonetype_get_autocomplete_v2_response_2 = phonetype_get_autocomplete_v2_response_parseFromJSON(jsonphonetype_get_autocomplete_v2_response_1);
	cJSON* jsonphonetype_get_autocomplete_v2_response_2 = phonetype_get_autocomplete_v2_response_convertToJSON(phonetype_get_autocomplete_v2_response_2);
	printf("repeating phonetype_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonphonetype_get_autocomplete_v2_response_2));
}

int main() {
  test_phonetype_get_autocomplete_v2_response(1);
  test_phonetype_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // phonetype_get_autocomplete_v2_response_MAIN
#endif // phonetype_get_autocomplete_v2_response_TEST
