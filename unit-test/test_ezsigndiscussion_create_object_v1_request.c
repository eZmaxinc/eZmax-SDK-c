#ifndef ezsigndiscussion_create_object_v1_request_TEST
#define ezsigndiscussion_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndiscussion_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndiscussion_create_object_v1_request.h"
ezsigndiscussion_create_object_v1_request_t* instantiate_ezsigndiscussion_create_object_v1_request(int include_optional);



ezsigndiscussion_create_object_v1_request_t* instantiate_ezsigndiscussion_create_object_v1_request(int include_optional) {
  ezsigndiscussion_create_object_v1_request_t* ezsigndiscussion_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigndiscussion_create_object_v1_request = ezsigndiscussion_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigndiscussion_create_object_v1_request = ezsigndiscussion_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigndiscussion_create_object_v1_request;
}


#ifdef ezsigndiscussion_create_object_v1_request_MAIN

void test_ezsigndiscussion_create_object_v1_request(int include_optional) {
    ezsigndiscussion_create_object_v1_request_t* ezsigndiscussion_create_object_v1_request_1 = instantiate_ezsigndiscussion_create_object_v1_request(include_optional);

	cJSON* jsonezsigndiscussion_create_object_v1_request_1 = ezsigndiscussion_create_object_v1_request_convertToJSON(ezsigndiscussion_create_object_v1_request_1);
	printf("ezsigndiscussion_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigndiscussion_create_object_v1_request_1));
	ezsigndiscussion_create_object_v1_request_t* ezsigndiscussion_create_object_v1_request_2 = ezsigndiscussion_create_object_v1_request_parseFromJSON(jsonezsigndiscussion_create_object_v1_request_1);
	cJSON* jsonezsigndiscussion_create_object_v1_request_2 = ezsigndiscussion_create_object_v1_request_convertToJSON(ezsigndiscussion_create_object_v1_request_2);
	printf("repeating ezsigndiscussion_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigndiscussion_create_object_v1_request_2));
}

int main() {
  test_ezsigndiscussion_create_object_v1_request(1);
  test_ezsigndiscussion_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndiscussion_create_object_v1_request_MAIN
#endif // ezsigndiscussion_create_object_v1_request_TEST
