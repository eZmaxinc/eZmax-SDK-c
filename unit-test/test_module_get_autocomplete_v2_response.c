#ifndef module_get_autocomplete_v2_response_TEST
#define module_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_get_autocomplete_v2_response.h"
module_get_autocomplete_v2_response_t* instantiate_module_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_module_get_autocomplete_v2_response_m_payload.c"


module_get_autocomplete_v2_response_t* instantiate_module_get_autocomplete_v2_response(int include_optional) {
  module_get_autocomplete_v2_response_t* module_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    module_get_autocomplete_v2_response = module_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_module_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    module_get_autocomplete_v2_response = module_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return module_get_autocomplete_v2_response;
}


#ifdef module_get_autocomplete_v2_response_MAIN

void test_module_get_autocomplete_v2_response(int include_optional) {
    module_get_autocomplete_v2_response_t* module_get_autocomplete_v2_response_1 = instantiate_module_get_autocomplete_v2_response(include_optional);

	cJSON* jsonmodule_get_autocomplete_v2_response_1 = module_get_autocomplete_v2_response_convertToJSON(module_get_autocomplete_v2_response_1);
	printf("module_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonmodule_get_autocomplete_v2_response_1));
	module_get_autocomplete_v2_response_t* module_get_autocomplete_v2_response_2 = module_get_autocomplete_v2_response_parseFromJSON(jsonmodule_get_autocomplete_v2_response_1);
	cJSON* jsonmodule_get_autocomplete_v2_response_2 = module_get_autocomplete_v2_response_convertToJSON(module_get_autocomplete_v2_response_2);
	printf("repeating module_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonmodule_get_autocomplete_v2_response_2));
}

int main() {
  test_module_get_autocomplete_v2_response(1);
  test_module_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_get_autocomplete_v2_response_MAIN
#endif // module_get_autocomplete_v2_response_TEST
