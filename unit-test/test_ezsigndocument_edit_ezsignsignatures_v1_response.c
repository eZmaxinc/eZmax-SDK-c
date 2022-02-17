#ifndef ezsigndocument_edit_ezsignsignatures_v1_response_TEST
#define ezsigndocument_edit_ezsignsignatures_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_edit_ezsignsignatures_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_edit_ezsignsignatures_v1_response.h"
ezsigndocument_edit_ezsignsignatures_v1_response_t* instantiate_ezsigndocument_edit_ezsignsignatures_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigndocument_edit_ezsignsignatures_v1_response_t* instantiate_ezsigndocument_edit_ezsignsignatures_v1_response(int include_optional) {
  ezsigndocument_edit_ezsignsignatures_v1_response_t* ezsigndocument_edit_ezsignsignatures_v1_response = NULL;
  if (include_optional) {
    ezsigndocument_edit_ezsignsignatures_v1_response = ezsigndocument_edit_ezsignsignatures_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigndocument_edit_ezsignsignatures_v1_response = ezsigndocument_edit_ezsignsignatures_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigndocument_edit_ezsignsignatures_v1_response;
}


#ifdef ezsigndocument_edit_ezsignsignatures_v1_response_MAIN

void test_ezsigndocument_edit_ezsignsignatures_v1_response(int include_optional) {
    ezsigndocument_edit_ezsignsignatures_v1_response_t* ezsigndocument_edit_ezsignsignatures_v1_response_1 = instantiate_ezsigndocument_edit_ezsignsignatures_v1_response(include_optional);

	cJSON* jsonezsigndocument_edit_ezsignsignatures_v1_response_1 = ezsigndocument_edit_ezsignsignatures_v1_response_convertToJSON(ezsigndocument_edit_ezsignsignatures_v1_response_1);
	printf("ezsigndocument_edit_ezsignsignatures_v1_response :\n%s\n", cJSON_Print(jsonezsigndocument_edit_ezsignsignatures_v1_response_1));
	ezsigndocument_edit_ezsignsignatures_v1_response_t* ezsigndocument_edit_ezsignsignatures_v1_response_2 = ezsigndocument_edit_ezsignsignatures_v1_response_parseFromJSON(jsonezsigndocument_edit_ezsignsignatures_v1_response_1);
	cJSON* jsonezsigndocument_edit_ezsignsignatures_v1_response_2 = ezsigndocument_edit_ezsignsignatures_v1_response_convertToJSON(ezsigndocument_edit_ezsignsignatures_v1_response_2);
	printf("repeating ezsigndocument_edit_ezsignsignatures_v1_response:\n%s\n", cJSON_Print(jsonezsigndocument_edit_ezsignsignatures_v1_response_2));
}

int main() {
  test_ezsigndocument_edit_ezsignsignatures_v1_response(1);
  test_ezsigndocument_edit_ezsignsignatures_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_edit_ezsignsignatures_v1_response_MAIN
#endif // ezsigndocument_edit_ezsignsignatures_v1_response_TEST
