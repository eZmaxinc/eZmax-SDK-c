#ifndef ezsigntemplatesigner_create_object_v1_request_TEST
#define ezsigntemplatesigner_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_create_object_v1_request.h"
ezsigntemplatesigner_create_object_v1_request_t* instantiate_ezsigntemplatesigner_create_object_v1_request(int include_optional);



ezsigntemplatesigner_create_object_v1_request_t* instantiate_ezsigntemplatesigner_create_object_v1_request(int include_optional) {
  ezsigntemplatesigner_create_object_v1_request_t* ezsigntemplatesigner_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatesigner_create_object_v1_request = ezsigntemplatesigner_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigntemplatesigner_create_object_v1_request = ezsigntemplatesigner_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigntemplatesigner_create_object_v1_request;
}


#ifdef ezsigntemplatesigner_create_object_v1_request_MAIN

void test_ezsigntemplatesigner_create_object_v1_request(int include_optional) {
    ezsigntemplatesigner_create_object_v1_request_t* ezsigntemplatesigner_create_object_v1_request_1 = instantiate_ezsigntemplatesigner_create_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatesigner_create_object_v1_request_1 = ezsigntemplatesigner_create_object_v1_request_convertToJSON(ezsigntemplatesigner_create_object_v1_request_1);
	printf("ezsigntemplatesigner_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_create_object_v1_request_1));
	ezsigntemplatesigner_create_object_v1_request_t* ezsigntemplatesigner_create_object_v1_request_2 = ezsigntemplatesigner_create_object_v1_request_parseFromJSON(jsonezsigntemplatesigner_create_object_v1_request_1);
	cJSON* jsonezsigntemplatesigner_create_object_v1_request_2 = ezsigntemplatesigner_create_object_v1_request_convertToJSON(ezsigntemplatesigner_create_object_v1_request_2);
	printf("repeating ezsigntemplatesigner_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_create_object_v1_request_2));
}

int main() {
  test_ezsigntemplatesigner_create_object_v1_request(1);
  test_ezsigntemplatesigner_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_create_object_v1_request_MAIN
#endif // ezsigntemplatesigner_create_object_v1_request_TEST
