#ifndef ezsigntemplatedocumentpagerecognition_edit_object_v1_request_TEST
#define ezsigntemplatedocumentpagerecognition_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpagerecognition_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpagerecognition_edit_object_v1_request.h"
ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t* instantiate_ezsigntemplatedocumentpagerecognition_edit_object_v1_request(int include_optional);

#include "test_ezsigntemplatedocumentpagerecognition_request_compound.c"


ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t* instantiate_ezsigntemplatedocumentpagerecognition_edit_object_v1_request(int include_optional) {
  ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t* ezsigntemplatedocumentpagerecognition_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpagerecognition_edit_object_v1_request = ezsigntemplatedocumentpagerecognition_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocumentpagerecognition_request_compound(0)
    );
  } else {
    ezsigntemplatedocumentpagerecognition_edit_object_v1_request = ezsigntemplatedocumentpagerecognition_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsigntemplatedocumentpagerecognition_edit_object_v1_request;
}


#ifdef ezsigntemplatedocumentpagerecognition_edit_object_v1_request_MAIN

void test_ezsigntemplatedocumentpagerecognition_edit_object_v1_request(int include_optional) {
    ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t* ezsigntemplatedocumentpagerecognition_edit_object_v1_request_1 = instantiate_ezsigntemplatedocumentpagerecognition_edit_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatedocumentpagerecognition_edit_object_v1_request_1 = ezsigntemplatedocumentpagerecognition_edit_object_v1_request_convertToJSON(ezsigntemplatedocumentpagerecognition_edit_object_v1_request_1);
	printf("ezsigntemplatedocumentpagerecognition_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_edit_object_v1_request_1));
	ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t* ezsigntemplatedocumentpagerecognition_edit_object_v1_request_2 = ezsigntemplatedocumentpagerecognition_edit_object_v1_request_parseFromJSON(jsonezsigntemplatedocumentpagerecognition_edit_object_v1_request_1);
	cJSON* jsonezsigntemplatedocumentpagerecognition_edit_object_v1_request_2 = ezsigntemplatedocumentpagerecognition_edit_object_v1_request_convertToJSON(ezsigntemplatedocumentpagerecognition_edit_object_v1_request_2);
	printf("repeating ezsigntemplatedocumentpagerecognition_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_edit_object_v1_request_2));
}

int main() {
  test_ezsigntemplatedocumentpagerecognition_edit_object_v1_request(1);
  test_ezsigntemplatedocumentpagerecognition_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpagerecognition_edit_object_v1_request_MAIN
#endif // ezsigntemplatedocumentpagerecognition_edit_object_v1_request_TEST
