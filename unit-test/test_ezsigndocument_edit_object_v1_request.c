#ifndef ezsigndocument_edit_object_v1_request_TEST
#define ezsigndocument_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_edit_object_v1_request.h"
ezsigndocument_edit_object_v1_request_t* instantiate_ezsigndocument_edit_object_v1_request(int include_optional);

#include "test_ezsigndocument_request_compound.c"


ezsigndocument_edit_object_v1_request_t* instantiate_ezsigndocument_edit_object_v1_request(int include_optional) {
  ezsigndocument_edit_object_v1_request_t* ezsigndocument_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsigndocument_edit_object_v1_request = ezsigndocument_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigndocument_request_compound(0)
    );
  } else {
    ezsigndocument_edit_object_v1_request = ezsigndocument_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsigndocument_edit_object_v1_request;
}


#ifdef ezsigndocument_edit_object_v1_request_MAIN

void test_ezsigndocument_edit_object_v1_request(int include_optional) {
    ezsigndocument_edit_object_v1_request_t* ezsigndocument_edit_object_v1_request_1 = instantiate_ezsigndocument_edit_object_v1_request(include_optional);

	cJSON* jsonezsigndocument_edit_object_v1_request_1 = ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request_1);
	printf("ezsigndocument_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsigndocument_edit_object_v1_request_1));
	ezsigndocument_edit_object_v1_request_t* ezsigndocument_edit_object_v1_request_2 = ezsigndocument_edit_object_v1_request_parseFromJSON(jsonezsigndocument_edit_object_v1_request_1);
	cJSON* jsonezsigndocument_edit_object_v1_request_2 = ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request_2);
	printf("repeating ezsigndocument_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsigndocument_edit_object_v1_request_2));
}

int main() {
  test_ezsigndocument_edit_object_v1_request(1);
  test_ezsigndocument_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_edit_object_v1_request_MAIN
#endif // ezsigndocument_edit_object_v1_request_TEST
