#ifndef variableexpense_edit_object_v1_request_TEST
#define variableexpense_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_edit_object_v1_request.h"
variableexpense_edit_object_v1_request_t* instantiate_variableexpense_edit_object_v1_request(int include_optional);

#include "test_variableexpense_request_compound.c"


variableexpense_edit_object_v1_request_t* instantiate_variableexpense_edit_object_v1_request(int include_optional) {
  variableexpense_edit_object_v1_request_t* variableexpense_edit_object_v1_request = NULL;
  if (include_optional) {
    variableexpense_edit_object_v1_request = variableexpense_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_variableexpense_request_compound(0)
    );
  } else {
    variableexpense_edit_object_v1_request = variableexpense_edit_object_v1_request_create(
      NULL
    );
  }

  return variableexpense_edit_object_v1_request;
}


#ifdef variableexpense_edit_object_v1_request_MAIN

void test_variableexpense_edit_object_v1_request(int include_optional) {
    variableexpense_edit_object_v1_request_t* variableexpense_edit_object_v1_request_1 = instantiate_variableexpense_edit_object_v1_request(include_optional);

	cJSON* jsonvariableexpense_edit_object_v1_request_1 = variableexpense_edit_object_v1_request_convertToJSON(variableexpense_edit_object_v1_request_1);
	printf("variableexpense_edit_object_v1_request :\n%s\n", cJSON_Print(jsonvariableexpense_edit_object_v1_request_1));
	variableexpense_edit_object_v1_request_t* variableexpense_edit_object_v1_request_2 = variableexpense_edit_object_v1_request_parseFromJSON(jsonvariableexpense_edit_object_v1_request_1);
	cJSON* jsonvariableexpense_edit_object_v1_request_2 = variableexpense_edit_object_v1_request_convertToJSON(variableexpense_edit_object_v1_request_2);
	printf("repeating variableexpense_edit_object_v1_request:\n%s\n", cJSON_Print(jsonvariableexpense_edit_object_v1_request_2));
}

int main() {
  test_variableexpense_edit_object_v1_request(1);
  test_variableexpense_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_edit_object_v1_request_MAIN
#endif // variableexpense_edit_object_v1_request_TEST
