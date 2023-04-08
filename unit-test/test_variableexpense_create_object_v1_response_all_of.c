#ifndef variableexpense_create_object_v1_response_all_of_TEST
#define variableexpense_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_create_object_v1_response_all_of.h"
variableexpense_create_object_v1_response_all_of_t* instantiate_variableexpense_create_object_v1_response_all_of(int include_optional);

#include "test_variableexpense_create_object_v1_response_m_payload.c"


variableexpense_create_object_v1_response_all_of_t* instantiate_variableexpense_create_object_v1_response_all_of(int include_optional) {
  variableexpense_create_object_v1_response_all_of_t* variableexpense_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    variableexpense_create_object_v1_response_all_of = variableexpense_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_variableexpense_create_object_v1_response_m_payload(0)
    );
  } else {
    variableexpense_create_object_v1_response_all_of = variableexpense_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return variableexpense_create_object_v1_response_all_of;
}


#ifdef variableexpense_create_object_v1_response_all_of_MAIN

void test_variableexpense_create_object_v1_response_all_of(int include_optional) {
    variableexpense_create_object_v1_response_all_of_t* variableexpense_create_object_v1_response_all_of_1 = instantiate_variableexpense_create_object_v1_response_all_of(include_optional);

	cJSON* jsonvariableexpense_create_object_v1_response_all_of_1 = variableexpense_create_object_v1_response_all_of_convertToJSON(variableexpense_create_object_v1_response_all_of_1);
	printf("variableexpense_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_response_all_of_1));
	variableexpense_create_object_v1_response_all_of_t* variableexpense_create_object_v1_response_all_of_2 = variableexpense_create_object_v1_response_all_of_parseFromJSON(jsonvariableexpense_create_object_v1_response_all_of_1);
	cJSON* jsonvariableexpense_create_object_v1_response_all_of_2 = variableexpense_create_object_v1_response_all_of_convertToJSON(variableexpense_create_object_v1_response_all_of_2);
	printf("repeating variableexpense_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_response_all_of_2));
}

int main() {
  test_variableexpense_create_object_v1_response_all_of(1);
  test_variableexpense_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_create_object_v1_response_all_of_MAIN
#endif // variableexpense_create_object_v1_response_all_of_TEST
