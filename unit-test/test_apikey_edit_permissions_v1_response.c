#ifndef apikey_edit_permissions_v1_response_TEST
#define apikey_edit_permissions_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_edit_permissions_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_edit_permissions_v1_response.h"
apikey_edit_permissions_v1_response_t* instantiate_apikey_edit_permissions_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_apikey_edit_permissions_v1_response_m_payload.c"


apikey_edit_permissions_v1_response_t* instantiate_apikey_edit_permissions_v1_response(int include_optional) {
  apikey_edit_permissions_v1_response_t* apikey_edit_permissions_v1_response = NULL;
  if (include_optional) {
    apikey_edit_permissions_v1_response = apikey_edit_permissions_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_apikey_edit_permissions_v1_response_m_payload(0)
    );
  } else {
    apikey_edit_permissions_v1_response = apikey_edit_permissions_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return apikey_edit_permissions_v1_response;
}


#ifdef apikey_edit_permissions_v1_response_MAIN

void test_apikey_edit_permissions_v1_response(int include_optional) {
    apikey_edit_permissions_v1_response_t* apikey_edit_permissions_v1_response_1 = instantiate_apikey_edit_permissions_v1_response(include_optional);

	cJSON* jsonapikey_edit_permissions_v1_response_1 = apikey_edit_permissions_v1_response_convertToJSON(apikey_edit_permissions_v1_response_1);
	printf("apikey_edit_permissions_v1_response :\n%s\n", cJSON_Print(jsonapikey_edit_permissions_v1_response_1));
	apikey_edit_permissions_v1_response_t* apikey_edit_permissions_v1_response_2 = apikey_edit_permissions_v1_response_parseFromJSON(jsonapikey_edit_permissions_v1_response_1);
	cJSON* jsonapikey_edit_permissions_v1_response_2 = apikey_edit_permissions_v1_response_convertToJSON(apikey_edit_permissions_v1_response_2);
	printf("repeating apikey_edit_permissions_v1_response:\n%s\n", cJSON_Print(jsonapikey_edit_permissions_v1_response_2));
}

int main() {
  test_apikey_edit_permissions_v1_response(1);
  test_apikey_edit_permissions_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_edit_permissions_v1_response_MAIN
#endif // apikey_edit_permissions_v1_response_TEST
