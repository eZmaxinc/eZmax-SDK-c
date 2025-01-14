#ifndef ezsignannotation_edit_object_v1_request_TEST
#define ezsignannotation_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignannotation_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignannotation_edit_object_v1_request.h"
ezsignannotation_edit_object_v1_request_t* instantiate_ezsignannotation_edit_object_v1_request(int include_optional);

#include "test_ezsignannotation_request_compound.c"


ezsignannotation_edit_object_v1_request_t* instantiate_ezsignannotation_edit_object_v1_request(int include_optional) {
  ezsignannotation_edit_object_v1_request_t* ezsignannotation_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignannotation_edit_object_v1_request = ezsignannotation_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignannotation_request_compound(0)
    );
  } else {
    ezsignannotation_edit_object_v1_request = ezsignannotation_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsignannotation_edit_object_v1_request;
}


#ifdef ezsignannotation_edit_object_v1_request_MAIN

void test_ezsignannotation_edit_object_v1_request(int include_optional) {
    ezsignannotation_edit_object_v1_request_t* ezsignannotation_edit_object_v1_request_1 = instantiate_ezsignannotation_edit_object_v1_request(include_optional);

	cJSON* jsonezsignannotation_edit_object_v1_request_1 = ezsignannotation_edit_object_v1_request_convertToJSON(ezsignannotation_edit_object_v1_request_1);
	printf("ezsignannotation_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignannotation_edit_object_v1_request_1));
	ezsignannotation_edit_object_v1_request_t* ezsignannotation_edit_object_v1_request_2 = ezsignannotation_edit_object_v1_request_parseFromJSON(jsonezsignannotation_edit_object_v1_request_1);
	cJSON* jsonezsignannotation_edit_object_v1_request_2 = ezsignannotation_edit_object_v1_request_convertToJSON(ezsignannotation_edit_object_v1_request_2);
	printf("repeating ezsignannotation_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignannotation_edit_object_v1_request_2));
}

int main() {
  test_ezsignannotation_edit_object_v1_request(1);
  test_ezsignannotation_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignannotation_edit_object_v1_request_MAIN
#endif // ezsignannotation_edit_object_v1_request_TEST
