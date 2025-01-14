#ifndef ezsigntemplatedocumentpagerecognition_create_object_v1_response_TEST
#define ezsigntemplatedocumentpagerecognition_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpagerecognition_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpagerecognition_create_object_v1_response.h"
ezsigntemplatedocumentpagerecognition_create_object_v1_response_t* instantiate_ezsigntemplatedocumentpagerecognition_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload.c"


ezsigntemplatedocumentpagerecognition_create_object_v1_response_t* instantiate_ezsigntemplatedocumentpagerecognition_create_object_v1_response(int include_optional) {
  ezsigntemplatedocumentpagerecognition_create_object_v1_response_t* ezsigntemplatedocumentpagerecognition_create_object_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpagerecognition_create_object_v1_response = ezsigntemplatedocumentpagerecognition_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocumentpagerecognition_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatedocumentpagerecognition_create_object_v1_response = ezsigntemplatedocumentpagerecognition_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplatedocumentpagerecognition_create_object_v1_response;
}


#ifdef ezsigntemplatedocumentpagerecognition_create_object_v1_response_MAIN

void test_ezsigntemplatedocumentpagerecognition_create_object_v1_response(int include_optional) {
    ezsigntemplatedocumentpagerecognition_create_object_v1_response_t* ezsigntemplatedocumentpagerecognition_create_object_v1_response_1 = instantiate_ezsigntemplatedocumentpagerecognition_create_object_v1_response(include_optional);

	cJSON* jsonezsigntemplatedocumentpagerecognition_create_object_v1_response_1 = ezsigntemplatedocumentpagerecognition_create_object_v1_response_convertToJSON(ezsigntemplatedocumentpagerecognition_create_object_v1_response_1);
	printf("ezsigntemplatedocumentpagerecognition_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_create_object_v1_response_1));
	ezsigntemplatedocumentpagerecognition_create_object_v1_response_t* ezsigntemplatedocumentpagerecognition_create_object_v1_response_2 = ezsigntemplatedocumentpagerecognition_create_object_v1_response_parseFromJSON(jsonezsigntemplatedocumentpagerecognition_create_object_v1_response_1);
	cJSON* jsonezsigntemplatedocumentpagerecognition_create_object_v1_response_2 = ezsigntemplatedocumentpagerecognition_create_object_v1_response_convertToJSON(ezsigntemplatedocumentpagerecognition_create_object_v1_response_2);
	printf("repeating ezsigntemplatedocumentpagerecognition_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_create_object_v1_response_2));
}

int main() {
  test_ezsigntemplatedocumentpagerecognition_create_object_v1_response(1);
  test_ezsigntemplatedocumentpagerecognition_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpagerecognition_create_object_v1_response_MAIN
#endif // ezsigntemplatedocumentpagerecognition_create_object_v1_response_TEST
