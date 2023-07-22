#ifndef signature_edit_object_v1_response_TEST
#define signature_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_edit_object_v1_response.h"
signature_edit_object_v1_response_t* instantiate_signature_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


signature_edit_object_v1_response_t* instantiate_signature_edit_object_v1_response(int include_optional) {
  signature_edit_object_v1_response_t* signature_edit_object_v1_response = NULL;
  if (include_optional) {
    signature_edit_object_v1_response = signature_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    signature_edit_object_v1_response = signature_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return signature_edit_object_v1_response;
}


#ifdef signature_edit_object_v1_response_MAIN

void test_signature_edit_object_v1_response(int include_optional) {
    signature_edit_object_v1_response_t* signature_edit_object_v1_response_1 = instantiate_signature_edit_object_v1_response(include_optional);

	cJSON* jsonsignature_edit_object_v1_response_1 = signature_edit_object_v1_response_convertToJSON(signature_edit_object_v1_response_1);
	printf("signature_edit_object_v1_response :\n%s\n", cJSON_Print(jsonsignature_edit_object_v1_response_1));
	signature_edit_object_v1_response_t* signature_edit_object_v1_response_2 = signature_edit_object_v1_response_parseFromJSON(jsonsignature_edit_object_v1_response_1);
	cJSON* jsonsignature_edit_object_v1_response_2 = signature_edit_object_v1_response_convertToJSON(signature_edit_object_v1_response_2);
	printf("repeating signature_edit_object_v1_response:\n%s\n", cJSON_Print(jsonsignature_edit_object_v1_response_2));
}

int main() {
  test_signature_edit_object_v1_response(1);
  test_signature_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_edit_object_v1_response_MAIN
#endif // signature_edit_object_v1_response_TEST
