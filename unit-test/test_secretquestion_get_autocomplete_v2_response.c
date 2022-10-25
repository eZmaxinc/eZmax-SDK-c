#ifndef secretquestion_get_autocomplete_v2_response_TEST
#define secretquestion_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define secretquestion_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/secretquestion_get_autocomplete_v2_response.h"
secretquestion_get_autocomplete_v2_response_t* instantiate_secretquestion_get_autocomplete_v2_response(int include_optional);

#include "test_secretquestion_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


secretquestion_get_autocomplete_v2_response_t* instantiate_secretquestion_get_autocomplete_v2_response(int include_optional) {
  secretquestion_get_autocomplete_v2_response_t* secretquestion_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    secretquestion_get_autocomplete_v2_response = secretquestion_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_secretquestion_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    secretquestion_get_autocomplete_v2_response = secretquestion_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return secretquestion_get_autocomplete_v2_response;
}


#ifdef secretquestion_get_autocomplete_v2_response_MAIN

void test_secretquestion_get_autocomplete_v2_response(int include_optional) {
    secretquestion_get_autocomplete_v2_response_t* secretquestion_get_autocomplete_v2_response_1 = instantiate_secretquestion_get_autocomplete_v2_response(include_optional);

	cJSON* jsonsecretquestion_get_autocomplete_v2_response_1 = secretquestion_get_autocomplete_v2_response_convertToJSON(secretquestion_get_autocomplete_v2_response_1);
	printf("secretquestion_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonsecretquestion_get_autocomplete_v2_response_1));
	secretquestion_get_autocomplete_v2_response_t* secretquestion_get_autocomplete_v2_response_2 = secretquestion_get_autocomplete_v2_response_parseFromJSON(jsonsecretquestion_get_autocomplete_v2_response_1);
	cJSON* jsonsecretquestion_get_autocomplete_v2_response_2 = secretquestion_get_autocomplete_v2_response_convertToJSON(secretquestion_get_autocomplete_v2_response_2);
	printf("repeating secretquestion_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonsecretquestion_get_autocomplete_v2_response_2));
}

int main() {
  test_secretquestion_get_autocomplete_v2_response(1);
  test_secretquestion_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // secretquestion_get_autocomplete_v2_response_MAIN
#endif // secretquestion_get_autocomplete_v2_response_TEST
