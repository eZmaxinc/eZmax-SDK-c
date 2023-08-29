#ifndef ezsigntemplatepackagemembership_create_object_v1_response_TEST
#define ezsigntemplatepackagemembership_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_create_object_v1_response.h"
ezsigntemplatepackagemembership_create_object_v1_response_t* instantiate_ezsigntemplatepackagemembership_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplatepackagemembership_create_object_v1_response_m_payload.c"


ezsigntemplatepackagemembership_create_object_v1_response_t* instantiate_ezsigntemplatepackagemembership_create_object_v1_response(int include_optional) {
  ezsigntemplatepackagemembership_create_object_v1_response_t* ezsigntemplatepackagemembership_create_object_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_create_object_v1_response = ezsigntemplatepackagemembership_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackagemembership_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatepackagemembership_create_object_v1_response = ezsigntemplatepackagemembership_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplatepackagemembership_create_object_v1_response;
}


#ifdef ezsigntemplatepackagemembership_create_object_v1_response_MAIN

void test_ezsigntemplatepackagemembership_create_object_v1_response(int include_optional) {
    ezsigntemplatepackagemembership_create_object_v1_response_t* ezsigntemplatepackagemembership_create_object_v1_response_1 = instantiate_ezsigntemplatepackagemembership_create_object_v1_response(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_create_object_v1_response_1 = ezsigntemplatepackagemembership_create_object_v1_response_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_response_1);
	printf("ezsigntemplatepackagemembership_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_create_object_v1_response_1));
	ezsigntemplatepackagemembership_create_object_v1_response_t* ezsigntemplatepackagemembership_create_object_v1_response_2 = ezsigntemplatepackagemembership_create_object_v1_response_parseFromJSON(jsonezsigntemplatepackagemembership_create_object_v1_response_1);
	cJSON* jsonezsigntemplatepackagemembership_create_object_v1_response_2 = ezsigntemplatepackagemembership_create_object_v1_response_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_response_2);
	printf("repeating ezsigntemplatepackagemembership_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_create_object_v1_response_2));
}

int main() {
  test_ezsigntemplatepackagemembership_create_object_v1_response(1);
  test_ezsigntemplatepackagemembership_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_create_object_v1_response_MAIN
#endif // ezsigntemplatepackagemembership_create_object_v1_response_TEST
