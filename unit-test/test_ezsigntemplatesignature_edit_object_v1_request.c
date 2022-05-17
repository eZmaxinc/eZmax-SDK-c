#ifndef ezsigntemplatesignature_edit_object_v1_request_TEST
#define ezsigntemplatesignature_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_edit_object_v1_request.h"
ezsigntemplatesignature_edit_object_v1_request_t* instantiate_ezsigntemplatesignature_edit_object_v1_request(int include_optional);

#include "test_ezsigntemplatesignature_request_compound.c"


ezsigntemplatesignature_edit_object_v1_request_t* instantiate_ezsigntemplatesignature_edit_object_v1_request(int include_optional) {
  ezsigntemplatesignature_edit_object_v1_request_t* ezsigntemplatesignature_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatesignature_edit_object_v1_request = ezsigntemplatesignature_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesignature_request_compound(0)
    );
  } else {
    ezsigntemplatesignature_edit_object_v1_request = ezsigntemplatesignature_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsigntemplatesignature_edit_object_v1_request;
}


#ifdef ezsigntemplatesignature_edit_object_v1_request_MAIN

void test_ezsigntemplatesignature_edit_object_v1_request(int include_optional) {
    ezsigntemplatesignature_edit_object_v1_request_t* ezsigntemplatesignature_edit_object_v1_request_1 = instantiate_ezsigntemplatesignature_edit_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatesignature_edit_object_v1_request_1 = ezsigntemplatesignature_edit_object_v1_request_convertToJSON(ezsigntemplatesignature_edit_object_v1_request_1);
	printf("ezsigntemplatesignature_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_edit_object_v1_request_1));
	ezsigntemplatesignature_edit_object_v1_request_t* ezsigntemplatesignature_edit_object_v1_request_2 = ezsigntemplatesignature_edit_object_v1_request_parseFromJSON(jsonezsigntemplatesignature_edit_object_v1_request_1);
	cJSON* jsonezsigntemplatesignature_edit_object_v1_request_2 = ezsigntemplatesignature_edit_object_v1_request_convertToJSON(ezsigntemplatesignature_edit_object_v1_request_2);
	printf("repeating ezsigntemplatesignature_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_edit_object_v1_request_2));
}

int main() {
  test_ezsigntemplatesignature_edit_object_v1_request(1);
  test_ezsigntemplatesignature_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_edit_object_v1_request_MAIN
#endif // ezsigntemplatesignature_edit_object_v1_request_TEST
