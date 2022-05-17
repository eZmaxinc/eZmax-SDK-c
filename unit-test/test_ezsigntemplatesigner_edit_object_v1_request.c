#ifndef ezsigntemplatesigner_edit_object_v1_request_TEST
#define ezsigntemplatesigner_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_edit_object_v1_request.h"
ezsigntemplatesigner_edit_object_v1_request_t* instantiate_ezsigntemplatesigner_edit_object_v1_request(int include_optional);

#include "test_ezsigntemplatesigner_request_compound.c"


ezsigntemplatesigner_edit_object_v1_request_t* instantiate_ezsigntemplatesigner_edit_object_v1_request(int include_optional) {
  ezsigntemplatesigner_edit_object_v1_request_t* ezsigntemplatesigner_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatesigner_edit_object_v1_request = ezsigntemplatesigner_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesigner_request_compound(0)
    );
  } else {
    ezsigntemplatesigner_edit_object_v1_request = ezsigntemplatesigner_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsigntemplatesigner_edit_object_v1_request;
}


#ifdef ezsigntemplatesigner_edit_object_v1_request_MAIN

void test_ezsigntemplatesigner_edit_object_v1_request(int include_optional) {
    ezsigntemplatesigner_edit_object_v1_request_t* ezsigntemplatesigner_edit_object_v1_request_1 = instantiate_ezsigntemplatesigner_edit_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatesigner_edit_object_v1_request_1 = ezsigntemplatesigner_edit_object_v1_request_convertToJSON(ezsigntemplatesigner_edit_object_v1_request_1);
	printf("ezsigntemplatesigner_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_edit_object_v1_request_1));
	ezsigntemplatesigner_edit_object_v1_request_t* ezsigntemplatesigner_edit_object_v1_request_2 = ezsigntemplatesigner_edit_object_v1_request_parseFromJSON(jsonezsigntemplatesigner_edit_object_v1_request_1);
	cJSON* jsonezsigntemplatesigner_edit_object_v1_request_2 = ezsigntemplatesigner_edit_object_v1_request_convertToJSON(ezsigntemplatesigner_edit_object_v1_request_2);
	printf("repeating ezsigntemplatesigner_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_edit_object_v1_request_2));
}

int main() {
  test_ezsigntemplatesigner_edit_object_v1_request(1);
  test_ezsigntemplatesigner_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_edit_object_v1_request_MAIN
#endif // ezsigntemplatesigner_edit_object_v1_request_TEST
