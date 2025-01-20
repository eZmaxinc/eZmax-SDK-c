#ifndef ezsignfolder_edit_object_v3_request_TEST
#define ezsignfolder_edit_object_v3_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_edit_object_v3_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_edit_object_v3_request.h"
ezsignfolder_edit_object_v3_request_t* instantiate_ezsignfolder_edit_object_v3_request(int include_optional);

#include "test_ezsignfolder_request_v3.c"


ezsignfolder_edit_object_v3_request_t* instantiate_ezsignfolder_edit_object_v3_request(int include_optional) {
  ezsignfolder_edit_object_v3_request_t* ezsignfolder_edit_object_v3_request = NULL;
  if (include_optional) {
    ezsignfolder_edit_object_v3_request = ezsignfolder_edit_object_v3_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignfolder_request_v3(0)
    );
  } else {
    ezsignfolder_edit_object_v3_request = ezsignfolder_edit_object_v3_request_create(
      NULL
    );
  }

  return ezsignfolder_edit_object_v3_request;
}


#ifdef ezsignfolder_edit_object_v3_request_MAIN

void test_ezsignfolder_edit_object_v3_request(int include_optional) {
    ezsignfolder_edit_object_v3_request_t* ezsignfolder_edit_object_v3_request_1 = instantiate_ezsignfolder_edit_object_v3_request(include_optional);

	cJSON* jsonezsignfolder_edit_object_v3_request_1 = ezsignfolder_edit_object_v3_request_convertToJSON(ezsignfolder_edit_object_v3_request_1);
	printf("ezsignfolder_edit_object_v3_request :\n%s\n", cJSON_Print(jsonezsignfolder_edit_object_v3_request_1));
	ezsignfolder_edit_object_v3_request_t* ezsignfolder_edit_object_v3_request_2 = ezsignfolder_edit_object_v3_request_parseFromJSON(jsonezsignfolder_edit_object_v3_request_1);
	cJSON* jsonezsignfolder_edit_object_v3_request_2 = ezsignfolder_edit_object_v3_request_convertToJSON(ezsignfolder_edit_object_v3_request_2);
	printf("repeating ezsignfolder_edit_object_v3_request:\n%s\n", cJSON_Print(jsonezsignfolder_edit_object_v3_request_2));
}

int main() {
  test_ezsignfolder_edit_object_v3_request(1);
  test_ezsignfolder_edit_object_v3_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_edit_object_v3_request_MAIN
#endif // ezsignfolder_edit_object_v3_request_TEST
