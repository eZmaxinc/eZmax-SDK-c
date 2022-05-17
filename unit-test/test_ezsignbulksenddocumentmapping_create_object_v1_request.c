#ifndef ezsignbulksenddocumentmapping_create_object_v1_request_TEST
#define ezsignbulksenddocumentmapping_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_create_object_v1_request.h"
ezsignbulksenddocumentmapping_create_object_v1_request_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_request(int include_optional);



ezsignbulksenddocumentmapping_create_object_v1_request_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_request(int include_optional) {
  ezsignbulksenddocumentmapping_create_object_v1_request_t* ezsignbulksenddocumentmapping_create_object_v1_request = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_request = ezsignbulksenddocumentmapping_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsignbulksenddocumentmapping_create_object_v1_request = ezsignbulksenddocumentmapping_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsignbulksenddocumentmapping_create_object_v1_request;
}


#ifdef ezsignbulksenddocumentmapping_create_object_v1_request_MAIN

void test_ezsignbulksenddocumentmapping_create_object_v1_request(int include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_request_t* ezsignbulksenddocumentmapping_create_object_v1_request_1 = instantiate_ezsignbulksenddocumentmapping_create_object_v1_request(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_request_1 = ezsignbulksenddocumentmapping_create_object_v1_request_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_request_1);
	printf("ezsignbulksenddocumentmapping_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_request_1));
	ezsignbulksenddocumentmapping_create_object_v1_request_t* ezsignbulksenddocumentmapping_create_object_v1_request_2 = ezsignbulksenddocumentmapping_create_object_v1_request_parseFromJSON(jsonezsignbulksenddocumentmapping_create_object_v1_request_1);
	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_request_2 = ezsignbulksenddocumentmapping_create_object_v1_request_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_request_2);
	printf("repeating ezsignbulksenddocumentmapping_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_request_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_create_object_v1_request(1);
  test_ezsignbulksenddocumentmapping_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_create_object_v1_request_MAIN
#endif // ezsignbulksenddocumentmapping_create_object_v1_request_TEST
