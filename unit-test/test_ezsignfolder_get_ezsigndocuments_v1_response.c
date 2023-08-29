#ifndef ezsignfolder_get_ezsigndocuments_v1_response_TEST
#define ezsignfolder_get_ezsigndocuments_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_get_ezsigndocuments_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_get_ezsigndocuments_v1_response.h"
ezsignfolder_get_ezsigndocuments_v1_response_t* instantiate_ezsignfolder_get_ezsigndocuments_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignfolder_get_ezsigndocuments_v1_response_m_payload.c"


ezsignfolder_get_ezsigndocuments_v1_response_t* instantiate_ezsignfolder_get_ezsigndocuments_v1_response(int include_optional) {
  ezsignfolder_get_ezsigndocuments_v1_response_t* ezsignfolder_get_ezsigndocuments_v1_response = NULL;
  if (include_optional) {
    ezsignfolder_get_ezsigndocuments_v1_response = ezsignfolder_get_ezsigndocuments_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignfolder_get_ezsigndocuments_v1_response_m_payload(0)
    );
  } else {
    ezsignfolder_get_ezsigndocuments_v1_response = ezsignfolder_get_ezsigndocuments_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignfolder_get_ezsigndocuments_v1_response;
}


#ifdef ezsignfolder_get_ezsigndocuments_v1_response_MAIN

void test_ezsignfolder_get_ezsigndocuments_v1_response(int include_optional) {
    ezsignfolder_get_ezsigndocuments_v1_response_t* ezsignfolder_get_ezsigndocuments_v1_response_1 = instantiate_ezsignfolder_get_ezsigndocuments_v1_response(include_optional);

	cJSON* jsonezsignfolder_get_ezsigndocuments_v1_response_1 = ezsignfolder_get_ezsigndocuments_v1_response_convertToJSON(ezsignfolder_get_ezsigndocuments_v1_response_1);
	printf("ezsignfolder_get_ezsigndocuments_v1_response :\n%s\n", cJSON_Print(jsonezsignfolder_get_ezsigndocuments_v1_response_1));
	ezsignfolder_get_ezsigndocuments_v1_response_t* ezsignfolder_get_ezsigndocuments_v1_response_2 = ezsignfolder_get_ezsigndocuments_v1_response_parseFromJSON(jsonezsignfolder_get_ezsigndocuments_v1_response_1);
	cJSON* jsonezsignfolder_get_ezsigndocuments_v1_response_2 = ezsignfolder_get_ezsigndocuments_v1_response_convertToJSON(ezsignfolder_get_ezsigndocuments_v1_response_2);
	printf("repeating ezsignfolder_get_ezsigndocuments_v1_response:\n%s\n", cJSON_Print(jsonezsignfolder_get_ezsigndocuments_v1_response_2));
}

int main() {
  test_ezsignfolder_get_ezsigndocuments_v1_response(1);
  test_ezsignfolder_get_ezsigndocuments_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_get_ezsigndocuments_v1_response_MAIN
#endif // ezsignfolder_get_ezsigndocuments_v1_response_TEST
