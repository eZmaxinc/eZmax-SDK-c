#ifndef ezsigndocument_get_ezsignsignatures_v1_response_TEST
#define ezsigndocument_get_ezsignsignatures_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_get_ezsignsignatures_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_get_ezsignsignatures_v1_response.h"
ezsigndocument_get_ezsignsignatures_v1_response_t* instantiate_ezsigndocument_get_ezsignsignatures_v1_response(int include_optional);

#include "test_ezsigndocument_get_ezsignsignatures_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigndocument_get_ezsignsignatures_v1_response_t* instantiate_ezsigndocument_get_ezsignsignatures_v1_response(int include_optional) {
  ezsigndocument_get_ezsignsignatures_v1_response_t* ezsigndocument_get_ezsignsignatures_v1_response = NULL;
  if (include_optional) {
    ezsigndocument_get_ezsignsignatures_v1_response = ezsigndocument_get_ezsignsignatures_v1_response_create(
       // false, not to have infinite recursion
      instantiate_ezsigndocument_get_ezsignsignatures_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigndocument_get_ezsignsignatures_v1_response = ezsigndocument_get_ezsignsignatures_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigndocument_get_ezsignsignatures_v1_response;
}


#ifdef ezsigndocument_get_ezsignsignatures_v1_response_MAIN

void test_ezsigndocument_get_ezsignsignatures_v1_response(int include_optional) {
    ezsigndocument_get_ezsignsignatures_v1_response_t* ezsigndocument_get_ezsignsignatures_v1_response_1 = instantiate_ezsigndocument_get_ezsignsignatures_v1_response(include_optional);

	cJSON* jsonezsigndocument_get_ezsignsignatures_v1_response_1 = ezsigndocument_get_ezsignsignatures_v1_response_convertToJSON(ezsigndocument_get_ezsignsignatures_v1_response_1);
	printf("ezsigndocument_get_ezsignsignatures_v1_response :\n%s\n", cJSON_Print(jsonezsigndocument_get_ezsignsignatures_v1_response_1));
	ezsigndocument_get_ezsignsignatures_v1_response_t* ezsigndocument_get_ezsignsignatures_v1_response_2 = ezsigndocument_get_ezsignsignatures_v1_response_parseFromJSON(jsonezsigndocument_get_ezsignsignatures_v1_response_1);
	cJSON* jsonezsigndocument_get_ezsignsignatures_v1_response_2 = ezsigndocument_get_ezsignsignatures_v1_response_convertToJSON(ezsigndocument_get_ezsignsignatures_v1_response_2);
	printf("repeating ezsigndocument_get_ezsignsignatures_v1_response:\n%s\n", cJSON_Print(jsonezsigndocument_get_ezsignsignatures_v1_response_2));
}

int main() {
  test_ezsigndocument_get_ezsignsignatures_v1_response(1);
  test_ezsigndocument_get_ezsignsignatures_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_get_ezsignsignatures_v1_response_MAIN
#endif // ezsigndocument_get_ezsignsignatures_v1_response_TEST
