#ifndef ezsignsigningreason_edit_object_v1_request_TEST
#define ezsignsigningreason_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_edit_object_v1_request.h"
ezsignsigningreason_edit_object_v1_request_t* instantiate_ezsignsigningreason_edit_object_v1_request(int include_optional);

#include "test_ezsignsigningreason_request_compound.c"


ezsignsigningreason_edit_object_v1_request_t* instantiate_ezsignsigningreason_edit_object_v1_request(int include_optional) {
  ezsignsigningreason_edit_object_v1_request_t* ezsignsigningreason_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignsigningreason_edit_object_v1_request = ezsignsigningreason_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignsigningreason_request_compound(0)
    );
  } else {
    ezsignsigningreason_edit_object_v1_request = ezsignsigningreason_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsignsigningreason_edit_object_v1_request;
}


#ifdef ezsignsigningreason_edit_object_v1_request_MAIN

void test_ezsignsigningreason_edit_object_v1_request(int include_optional) {
    ezsignsigningreason_edit_object_v1_request_t* ezsignsigningreason_edit_object_v1_request_1 = instantiate_ezsignsigningreason_edit_object_v1_request(include_optional);

	cJSON* jsonezsignsigningreason_edit_object_v1_request_1 = ezsignsigningreason_edit_object_v1_request_convertToJSON(ezsignsigningreason_edit_object_v1_request_1);
	printf("ezsignsigningreason_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignsigningreason_edit_object_v1_request_1));
	ezsignsigningreason_edit_object_v1_request_t* ezsignsigningreason_edit_object_v1_request_2 = ezsignsigningreason_edit_object_v1_request_parseFromJSON(jsonezsignsigningreason_edit_object_v1_request_1);
	cJSON* jsonezsignsigningreason_edit_object_v1_request_2 = ezsignsigningreason_edit_object_v1_request_convertToJSON(ezsignsigningreason_edit_object_v1_request_2);
	printf("repeating ezsignsigningreason_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignsigningreason_edit_object_v1_request_2));
}

int main() {
  test_ezsignsigningreason_edit_object_v1_request(1);
  test_ezsignsigningreason_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_edit_object_v1_request_MAIN
#endif // ezsignsigningreason_edit_object_v1_request_TEST
