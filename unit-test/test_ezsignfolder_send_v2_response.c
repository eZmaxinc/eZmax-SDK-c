#ifndef ezsignfolder_send_v2_response_TEST
#define ezsignfolder_send_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_send_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_send_v2_response.h"
ezsignfolder_send_v2_response_t* instantiate_ezsignfolder_send_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignfolder_send_v2_response_t* instantiate_ezsignfolder_send_v2_response(int include_optional) {
  ezsignfolder_send_v2_response_t* ezsignfolder_send_v2_response = NULL;
  if (include_optional) {
    ezsignfolder_send_v2_response = ezsignfolder_send_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignfolder_send_v2_response = ezsignfolder_send_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignfolder_send_v2_response;
}


#ifdef ezsignfolder_send_v2_response_MAIN

void test_ezsignfolder_send_v2_response(int include_optional) {
    ezsignfolder_send_v2_response_t* ezsignfolder_send_v2_response_1 = instantiate_ezsignfolder_send_v2_response(include_optional);

	cJSON* jsonezsignfolder_send_v2_response_1 = ezsignfolder_send_v2_response_convertToJSON(ezsignfolder_send_v2_response_1);
	printf("ezsignfolder_send_v2_response :\n%s\n", cJSON_Print(jsonezsignfolder_send_v2_response_1));
	ezsignfolder_send_v2_response_t* ezsignfolder_send_v2_response_2 = ezsignfolder_send_v2_response_parseFromJSON(jsonezsignfolder_send_v2_response_1);
	cJSON* jsonezsignfolder_send_v2_response_2 = ezsignfolder_send_v2_response_convertToJSON(ezsignfolder_send_v2_response_2);
	printf("repeating ezsignfolder_send_v2_response:\n%s\n", cJSON_Print(jsonezsignfolder_send_v2_response_2));
}

int main() {
  test_ezsignfolder_send_v2_response(1);
  test_ezsignfolder_send_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_send_v2_response_MAIN
#endif // ezsignfolder_send_v2_response_TEST
