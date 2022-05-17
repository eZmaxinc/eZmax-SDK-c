#ifndef ezsignbulksendsignermapping_create_object_v1_request_TEST
#define ezsignbulksendsignermapping_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_create_object_v1_request.h"
ezsignbulksendsignermapping_create_object_v1_request_t* instantiate_ezsignbulksendsignermapping_create_object_v1_request(int include_optional);



ezsignbulksendsignermapping_create_object_v1_request_t* instantiate_ezsignbulksendsignermapping_create_object_v1_request(int include_optional) {
  ezsignbulksendsignermapping_create_object_v1_request_t* ezsignbulksendsignermapping_create_object_v1_request = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_create_object_v1_request = ezsignbulksendsignermapping_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsignbulksendsignermapping_create_object_v1_request = ezsignbulksendsignermapping_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsignbulksendsignermapping_create_object_v1_request;
}


#ifdef ezsignbulksendsignermapping_create_object_v1_request_MAIN

void test_ezsignbulksendsignermapping_create_object_v1_request(int include_optional) {
    ezsignbulksendsignermapping_create_object_v1_request_t* ezsignbulksendsignermapping_create_object_v1_request_1 = instantiate_ezsignbulksendsignermapping_create_object_v1_request(include_optional);

	cJSON* jsonezsignbulksendsignermapping_create_object_v1_request_1 = ezsignbulksendsignermapping_create_object_v1_request_convertToJSON(ezsignbulksendsignermapping_create_object_v1_request_1);
	printf("ezsignbulksendsignermapping_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_create_object_v1_request_1));
	ezsignbulksendsignermapping_create_object_v1_request_t* ezsignbulksendsignermapping_create_object_v1_request_2 = ezsignbulksendsignermapping_create_object_v1_request_parseFromJSON(jsonezsignbulksendsignermapping_create_object_v1_request_1);
	cJSON* jsonezsignbulksendsignermapping_create_object_v1_request_2 = ezsignbulksendsignermapping_create_object_v1_request_convertToJSON(ezsignbulksendsignermapping_create_object_v1_request_2);
	printf("repeating ezsignbulksendsignermapping_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_create_object_v1_request_2));
}

int main() {
  test_ezsignbulksendsignermapping_create_object_v1_request(1);
  test_ezsignbulksendsignermapping_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_create_object_v1_request_MAIN
#endif // ezsignbulksendsignermapping_create_object_v1_request_TEST
