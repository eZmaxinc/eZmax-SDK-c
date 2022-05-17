#ifndef ezsignbulksend_edit_object_v1_request_TEST
#define ezsignbulksend_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_edit_object_v1_request.h"
ezsignbulksend_edit_object_v1_request_t* instantiate_ezsignbulksend_edit_object_v1_request(int include_optional);

#include "test_ezsignbulksend_request_compound.c"


ezsignbulksend_edit_object_v1_request_t* instantiate_ezsignbulksend_edit_object_v1_request(int include_optional) {
  ezsignbulksend_edit_object_v1_request_t* ezsignbulksend_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignbulksend_edit_object_v1_request = ezsignbulksend_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksend_request_compound(0)
    );
  } else {
    ezsignbulksend_edit_object_v1_request = ezsignbulksend_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsignbulksend_edit_object_v1_request;
}


#ifdef ezsignbulksend_edit_object_v1_request_MAIN

void test_ezsignbulksend_edit_object_v1_request(int include_optional) {
    ezsignbulksend_edit_object_v1_request_t* ezsignbulksend_edit_object_v1_request_1 = instantiate_ezsignbulksend_edit_object_v1_request(include_optional);

	cJSON* jsonezsignbulksend_edit_object_v1_request_1 = ezsignbulksend_edit_object_v1_request_convertToJSON(ezsignbulksend_edit_object_v1_request_1);
	printf("ezsignbulksend_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignbulksend_edit_object_v1_request_1));
	ezsignbulksend_edit_object_v1_request_t* ezsignbulksend_edit_object_v1_request_2 = ezsignbulksend_edit_object_v1_request_parseFromJSON(jsonezsignbulksend_edit_object_v1_request_1);
	cJSON* jsonezsignbulksend_edit_object_v1_request_2 = ezsignbulksend_edit_object_v1_request_convertToJSON(ezsignbulksend_edit_object_v1_request_2);
	printf("repeating ezsignbulksend_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignbulksend_edit_object_v1_request_2));
}

int main() {
  test_ezsignbulksend_edit_object_v1_request(1);
  test_ezsignbulksend_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_edit_object_v1_request_MAIN
#endif // ezsignbulksend_edit_object_v1_request_TEST
