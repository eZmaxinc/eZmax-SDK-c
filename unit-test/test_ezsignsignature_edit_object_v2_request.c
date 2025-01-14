#ifndef ezsignsignature_edit_object_v2_request_TEST
#define ezsignsignature_edit_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_edit_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_edit_object_v2_request.h"
ezsignsignature_edit_object_v2_request_t* instantiate_ezsignsignature_edit_object_v2_request(int include_optional);

#include "test_ezsignsignature_request_compound_v2.c"


ezsignsignature_edit_object_v2_request_t* instantiate_ezsignsignature_edit_object_v2_request(int include_optional) {
  ezsignsignature_edit_object_v2_request_t* ezsignsignature_edit_object_v2_request = NULL;
  if (include_optional) {
    ezsignsignature_edit_object_v2_request = ezsignsignature_edit_object_v2_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignature_request_compound_v2(0)
    );
  } else {
    ezsignsignature_edit_object_v2_request = ezsignsignature_edit_object_v2_request_create(
      NULL
    );
  }

  return ezsignsignature_edit_object_v2_request;
}


#ifdef ezsignsignature_edit_object_v2_request_MAIN

void test_ezsignsignature_edit_object_v2_request(int include_optional) {
    ezsignsignature_edit_object_v2_request_t* ezsignsignature_edit_object_v2_request_1 = instantiate_ezsignsignature_edit_object_v2_request(include_optional);

	cJSON* jsonezsignsignature_edit_object_v2_request_1 = ezsignsignature_edit_object_v2_request_convertToJSON(ezsignsignature_edit_object_v2_request_1);
	printf("ezsignsignature_edit_object_v2_request :\n%s\n", cJSON_Print(jsonezsignsignature_edit_object_v2_request_1));
	ezsignsignature_edit_object_v2_request_t* ezsignsignature_edit_object_v2_request_2 = ezsignsignature_edit_object_v2_request_parseFromJSON(jsonezsignsignature_edit_object_v2_request_1);
	cJSON* jsonezsignsignature_edit_object_v2_request_2 = ezsignsignature_edit_object_v2_request_convertToJSON(ezsignsignature_edit_object_v2_request_2);
	printf("repeating ezsignsignature_edit_object_v2_request:\n%s\n", cJSON_Print(jsonezsignsignature_edit_object_v2_request_2));
}

int main() {
  test_ezsignsignature_edit_object_v2_request(1);
  test_ezsignsignature_edit_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_edit_object_v2_request_MAIN
#endif // ezsignsignature_edit_object_v2_request_TEST
