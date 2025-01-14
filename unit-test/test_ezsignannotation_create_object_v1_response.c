#ifndef ezsignannotation_create_object_v1_response_TEST
#define ezsignannotation_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_create_object_v1_response.h"
ezsignannotation_create_object_v1_response_t* instantiate_ezsignannotation_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignannotation_create_object_v1_response_m_payload.c"


ezsignannotation_create_object_v1_response_t* instantiate_ezsignannotation_create_object_v1_response(int include_optional) {
  ezsignannotation_create_object_v1_response_t* ezsignannotation_create_object_v1_response = NULL;
  if (include_optional) {
    ezsignannotation_create_object_v1_response = ezsignannotation_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignannotation_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsignannotation_create_object_v1_response = ezsignannotation_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignannotation_create_object_v1_response;
}


#ifdef ezsignannotation_create_object_v1_response_MAIN

void test_ezsignannotation_create_object_v1_response(int include_optional) {
    ezsignannotation_create_object_v1_response_t* ezsignannotation_create_object_v1_response_1 = instantiate_ezsignannotation_create_object_v1_response(include_optional);

	cJSON* jsonezsignannotation_create_object_v1_response_1 = ezsignannotation_create_object_v1_response_convertToJSON(ezsignannotation_create_object_v1_response_1);
	printf("ezsignannotation_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsignannotation_create_object_v1_response_1));
	ezsignannotation_create_object_v1_response_t* ezsignannotation_create_object_v1_response_2 = ezsignannotation_create_object_v1_response_parseFromJSON(jsonezsignannotation_create_object_v1_response_1);
	cJSON* jsonezsignannotation_create_object_v1_response_2 = ezsignannotation_create_object_v1_response_convertToJSON(ezsignannotation_create_object_v1_response_2);
	printf("repeating ezsignannotation_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsignannotation_create_object_v1_response_2));
}

int main() {
  test_ezsignannotation_create_object_v1_response(1);
  test_ezsignannotation_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_create_object_v1_response_MAIN
#endif // ezsignannotation_create_object_v1_response_TEST
