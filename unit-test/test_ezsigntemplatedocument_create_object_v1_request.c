#ifndef ezsigntemplatedocument_create_object_v1_request_TEST
#define ezsigntemplatedocument_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_create_object_v1_request.h"
ezsigntemplatedocument_create_object_v1_request_t* instantiate_ezsigntemplatedocument_create_object_v1_request(int include_optional);



ezsigntemplatedocument_create_object_v1_request_t* instantiate_ezsigntemplatedocument_create_object_v1_request(int include_optional) {
  ezsigntemplatedocument_create_object_v1_request_t* ezsigntemplatedocument_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatedocument_create_object_v1_request = ezsigntemplatedocument_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigntemplatedocument_create_object_v1_request = ezsigntemplatedocument_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigntemplatedocument_create_object_v1_request;
}


#ifdef ezsigntemplatedocument_create_object_v1_request_MAIN

void test_ezsigntemplatedocument_create_object_v1_request(int include_optional) {
    ezsigntemplatedocument_create_object_v1_request_t* ezsigntemplatedocument_create_object_v1_request_1 = instantiate_ezsigntemplatedocument_create_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatedocument_create_object_v1_request_1 = ezsigntemplatedocument_create_object_v1_request_convertToJSON(ezsigntemplatedocument_create_object_v1_request_1);
	printf("ezsigntemplatedocument_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_create_object_v1_request_1));
	ezsigntemplatedocument_create_object_v1_request_t* ezsigntemplatedocument_create_object_v1_request_2 = ezsigntemplatedocument_create_object_v1_request_parseFromJSON(jsonezsigntemplatedocument_create_object_v1_request_1);
	cJSON* jsonezsigntemplatedocument_create_object_v1_request_2 = ezsigntemplatedocument_create_object_v1_request_convertToJSON(ezsigntemplatedocument_create_object_v1_request_2);
	printf("repeating ezsigntemplatedocument_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_create_object_v1_request_2));
}

int main() {
  test_ezsigntemplatedocument_create_object_v1_request(1);
  test_ezsigntemplatedocument_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_create_object_v1_request_MAIN
#endif // ezsigntemplatedocument_create_object_v1_request_TEST
