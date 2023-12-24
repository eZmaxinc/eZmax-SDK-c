#ifndef ezsignsigningreason_create_object_v1_request_TEST
#define ezsignsigningreason_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_create_object_v1_request.h"
ezsignsigningreason_create_object_v1_request_t* instantiate_ezsignsigningreason_create_object_v1_request(int include_optional);



ezsignsigningreason_create_object_v1_request_t* instantiate_ezsignsigningreason_create_object_v1_request(int include_optional) {
  ezsignsigningreason_create_object_v1_request_t* ezsignsigningreason_create_object_v1_request = NULL;
  if (include_optional) {
    ezsignsigningreason_create_object_v1_request = ezsignsigningreason_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsignsigningreason_create_object_v1_request = ezsignsigningreason_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsignsigningreason_create_object_v1_request;
}


#ifdef ezsignsigningreason_create_object_v1_request_MAIN

void test_ezsignsigningreason_create_object_v1_request(int include_optional) {
    ezsignsigningreason_create_object_v1_request_t* ezsignsigningreason_create_object_v1_request_1 = instantiate_ezsignsigningreason_create_object_v1_request(include_optional);

	cJSON* jsonezsignsigningreason_create_object_v1_request_1 = ezsignsigningreason_create_object_v1_request_convertToJSON(ezsignsigningreason_create_object_v1_request_1);
	printf("ezsignsigningreason_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsignsigningreason_create_object_v1_request_1));
	ezsignsigningreason_create_object_v1_request_t* ezsignsigningreason_create_object_v1_request_2 = ezsignsigningreason_create_object_v1_request_parseFromJSON(jsonezsignsigningreason_create_object_v1_request_1);
	cJSON* jsonezsignsigningreason_create_object_v1_request_2 = ezsignsigningreason_create_object_v1_request_convertToJSON(ezsignsigningreason_create_object_v1_request_2);
	printf("repeating ezsignsigningreason_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsignsigningreason_create_object_v1_request_2));
}

int main() {
  test_ezsignsigningreason_create_object_v1_request(1);
  test_ezsignsigningreason_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_create_object_v1_request_MAIN
#endif // ezsignsigningreason_create_object_v1_request_TEST
