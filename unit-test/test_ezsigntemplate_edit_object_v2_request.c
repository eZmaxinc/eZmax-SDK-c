#ifndef ezsigntemplate_edit_object_v2_request_TEST
#define ezsigntemplate_edit_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_edit_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_edit_object_v2_request.h"
ezsigntemplate_edit_object_v2_request_t* instantiate_ezsigntemplate_edit_object_v2_request(int include_optional);

#include "test_ezsigntemplate_request_compound_v2.c"


ezsigntemplate_edit_object_v2_request_t* instantiate_ezsigntemplate_edit_object_v2_request(int include_optional) {
  ezsigntemplate_edit_object_v2_request_t* ezsigntemplate_edit_object_v2_request = NULL;
  if (include_optional) {
    ezsigntemplate_edit_object_v2_request = ezsigntemplate_edit_object_v2_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplate_request_compound_v2(0)
    );
  } else {
    ezsigntemplate_edit_object_v2_request = ezsigntemplate_edit_object_v2_request_create(
      NULL
    );
  }

  return ezsigntemplate_edit_object_v2_request;
}


#ifdef ezsigntemplate_edit_object_v2_request_MAIN

void test_ezsigntemplate_edit_object_v2_request(int include_optional) {
    ezsigntemplate_edit_object_v2_request_t* ezsigntemplate_edit_object_v2_request_1 = instantiate_ezsigntemplate_edit_object_v2_request(include_optional);

	cJSON* jsonezsigntemplate_edit_object_v2_request_1 = ezsigntemplate_edit_object_v2_request_convertToJSON(ezsigntemplate_edit_object_v2_request_1);
	printf("ezsigntemplate_edit_object_v2_request :\n%s\n", cJSON_Print(jsonezsigntemplate_edit_object_v2_request_1));
	ezsigntemplate_edit_object_v2_request_t* ezsigntemplate_edit_object_v2_request_2 = ezsigntemplate_edit_object_v2_request_parseFromJSON(jsonezsigntemplate_edit_object_v2_request_1);
	cJSON* jsonezsigntemplate_edit_object_v2_request_2 = ezsigntemplate_edit_object_v2_request_convertToJSON(ezsigntemplate_edit_object_v2_request_2);
	printf("repeating ezsigntemplate_edit_object_v2_request:\n%s\n", cJSON_Print(jsonezsigntemplate_edit_object_v2_request_2));
}

int main() {
  test_ezsigntemplate_edit_object_v2_request(1);
  test_ezsigntemplate_edit_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_edit_object_v2_request_MAIN
#endif // ezsigntemplate_edit_object_v2_request_TEST
