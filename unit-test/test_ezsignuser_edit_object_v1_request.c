#ifndef ezsignuser_edit_object_v1_request_TEST
#define ezsignuser_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignuser_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignuser_edit_object_v1_request.h"
ezsignuser_edit_object_v1_request_t* instantiate_ezsignuser_edit_object_v1_request(int include_optional);

#include "test_ezsignuser_request_compound.c"


ezsignuser_edit_object_v1_request_t* instantiate_ezsignuser_edit_object_v1_request(int include_optional) {
  ezsignuser_edit_object_v1_request_t* ezsignuser_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignuser_edit_object_v1_request = ezsignuser_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignuser_request_compound(0)
    );
  } else {
    ezsignuser_edit_object_v1_request = ezsignuser_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsignuser_edit_object_v1_request;
}


#ifdef ezsignuser_edit_object_v1_request_MAIN

void test_ezsignuser_edit_object_v1_request(int include_optional) {
    ezsignuser_edit_object_v1_request_t* ezsignuser_edit_object_v1_request_1 = instantiate_ezsignuser_edit_object_v1_request(include_optional);

	cJSON* jsonezsignuser_edit_object_v1_request_1 = ezsignuser_edit_object_v1_request_convertToJSON(ezsignuser_edit_object_v1_request_1);
	printf("ezsignuser_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignuser_edit_object_v1_request_1));
	ezsignuser_edit_object_v1_request_t* ezsignuser_edit_object_v1_request_2 = ezsignuser_edit_object_v1_request_parseFromJSON(jsonezsignuser_edit_object_v1_request_1);
	cJSON* jsonezsignuser_edit_object_v1_request_2 = ezsignuser_edit_object_v1_request_convertToJSON(ezsignuser_edit_object_v1_request_2);
	printf("repeating ezsignuser_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignuser_edit_object_v1_request_2));
}

int main() {
  test_ezsignuser_edit_object_v1_request(1);
  test_ezsignuser_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignuser_edit_object_v1_request_MAIN
#endif // ezsignuser_edit_object_v1_request_TEST
