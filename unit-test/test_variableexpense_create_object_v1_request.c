#ifndef variableexpense_create_object_v1_request_TEST
#define variableexpense_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_create_object_v1_request.h"
variableexpense_create_object_v1_request_t* instantiate_variableexpense_create_object_v1_request(int include_optional);



variableexpense_create_object_v1_request_t* instantiate_variableexpense_create_object_v1_request(int include_optional) {
  variableexpense_create_object_v1_request_t* variableexpense_create_object_v1_request = NULL;
  if (include_optional) {
    variableexpense_create_object_v1_request = variableexpense_create_object_v1_request_create(
      list_createList()
    );
  } else {
    variableexpense_create_object_v1_request = variableexpense_create_object_v1_request_create(
      list_createList()
    );
  }

  return variableexpense_create_object_v1_request;
}


#ifdef variableexpense_create_object_v1_request_MAIN

void test_variableexpense_create_object_v1_request(int include_optional) {
    variableexpense_create_object_v1_request_t* variableexpense_create_object_v1_request_1 = instantiate_variableexpense_create_object_v1_request(include_optional);

	cJSON* jsonvariableexpense_create_object_v1_request_1 = variableexpense_create_object_v1_request_convertToJSON(variableexpense_create_object_v1_request_1);
	printf("variableexpense_create_object_v1_request :\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_request_1));
	variableexpense_create_object_v1_request_t* variableexpense_create_object_v1_request_2 = variableexpense_create_object_v1_request_parseFromJSON(jsonvariableexpense_create_object_v1_request_1);
	cJSON* jsonvariableexpense_create_object_v1_request_2 = variableexpense_create_object_v1_request_convertToJSON(variableexpense_create_object_v1_request_2);
	printf("repeating variableexpense_create_object_v1_request:\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_request_2));
}

int main() {
  test_variableexpense_create_object_v1_request(1);
  test_variableexpense_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_create_object_v1_request_MAIN
#endif // variableexpense_create_object_v1_request_TEST
