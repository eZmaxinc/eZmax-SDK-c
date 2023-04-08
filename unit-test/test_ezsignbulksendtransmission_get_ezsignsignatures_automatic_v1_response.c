#ifndef ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_TEST
#define ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response.h"
ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t* instantiate_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response(int include_optional);

#include "test_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t* instantiate_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response(int include_optional) {
  ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t* ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response = NULL;
  if (include_optional) {
    ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response = ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response = ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response;
}


#ifdef ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_MAIN

void test_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response(int include_optional) {
    ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t* ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_1 = instantiate_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response(include_optional);

	cJSON* jsonezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_1 = ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_convertToJSON(ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_1);
	printf("ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response :\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_1));
	ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t* ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_2 = ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_parseFromJSON(jsonezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_1);
	cJSON* jsonezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_2 = ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_convertToJSON(ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_2);
	printf("repeating ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response:\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_2));
}

int main() {
  test_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response(1);
  test_ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_MAIN
#endif // ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_TEST
