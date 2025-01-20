#ifndef activesession_get_current_v1_response_TEST
#define activesession_get_current_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_get_current_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_get_current_v1_response.h"
activesession_get_current_v1_response_t* instantiate_activesession_get_current_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_activesession_response_compound.c"


activesession_get_current_v1_response_t* instantiate_activesession_get_current_v1_response(int include_optional) {
  activesession_get_current_v1_response_t* activesession_get_current_v1_response = NULL;
  if (include_optional) {
    activesession_get_current_v1_response = activesession_get_current_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_activesession_response_compound(0)
    );
  } else {
    activesession_get_current_v1_response = activesession_get_current_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return activesession_get_current_v1_response;
}


#ifdef activesession_get_current_v1_response_MAIN

void test_activesession_get_current_v1_response(int include_optional) {
    activesession_get_current_v1_response_t* activesession_get_current_v1_response_1 = instantiate_activesession_get_current_v1_response(include_optional);

	cJSON* jsonactivesession_get_current_v1_response_1 = activesession_get_current_v1_response_convertToJSON(activesession_get_current_v1_response_1);
	printf("activesession_get_current_v1_response :\n%s\n", cJSON_Print(jsonactivesession_get_current_v1_response_1));
	activesession_get_current_v1_response_t* activesession_get_current_v1_response_2 = activesession_get_current_v1_response_parseFromJSON(jsonactivesession_get_current_v1_response_1);
	cJSON* jsonactivesession_get_current_v1_response_2 = activesession_get_current_v1_response_convertToJSON(activesession_get_current_v1_response_2);
	printf("repeating activesession_get_current_v1_response:\n%s\n", cJSON_Print(jsonactivesession_get_current_v1_response_2));
}

int main() {
  test_activesession_get_current_v1_response(1);
  test_activesession_get_current_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_get_current_v1_response_MAIN
#endif // activesession_get_current_v1_response_TEST
