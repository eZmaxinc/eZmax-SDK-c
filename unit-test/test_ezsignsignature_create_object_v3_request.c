#ifndef ezsignsignature_create_object_v3_request_TEST
#define ezsignsignature_create_object_v3_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_create_object_v3_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_create_object_v3_request.h"
ezsignsignature_create_object_v3_request_t* instantiate_ezsignsignature_create_object_v3_request(int include_optional);



ezsignsignature_create_object_v3_request_t* instantiate_ezsignsignature_create_object_v3_request(int include_optional) {
  ezsignsignature_create_object_v3_request_t* ezsignsignature_create_object_v3_request = NULL;
  if (include_optional) {
    ezsignsignature_create_object_v3_request = ezsignsignature_create_object_v3_request_create(
      list_createList()
    );
  } else {
    ezsignsignature_create_object_v3_request = ezsignsignature_create_object_v3_request_create(
      list_createList()
    );
  }

  return ezsignsignature_create_object_v3_request;
}


#ifdef ezsignsignature_create_object_v3_request_MAIN

void test_ezsignsignature_create_object_v3_request(int include_optional) {
    ezsignsignature_create_object_v3_request_t* ezsignsignature_create_object_v3_request_1 = instantiate_ezsignsignature_create_object_v3_request(include_optional);

	cJSON* jsonezsignsignature_create_object_v3_request_1 = ezsignsignature_create_object_v3_request_convertToJSON(ezsignsignature_create_object_v3_request_1);
	printf("ezsignsignature_create_object_v3_request :\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v3_request_1));
	ezsignsignature_create_object_v3_request_t* ezsignsignature_create_object_v3_request_2 = ezsignsignature_create_object_v3_request_parseFromJSON(jsonezsignsignature_create_object_v3_request_1);
	cJSON* jsonezsignsignature_create_object_v3_request_2 = ezsignsignature_create_object_v3_request_convertToJSON(ezsignsignature_create_object_v3_request_2);
	printf("repeating ezsignsignature_create_object_v3_request:\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v3_request_2));
}

int main() {
  test_ezsignsignature_create_object_v3_request(1);
  test_ezsignsignature_create_object_v3_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_create_object_v3_request_MAIN
#endif // ezsignsignature_create_object_v3_request_TEST
