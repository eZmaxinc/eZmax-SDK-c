#ifndef ezsigntemplatesignature_create_object_v2_request_TEST
#define ezsigntemplatesignature_create_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_create_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_create_object_v2_request.h"
ezsigntemplatesignature_create_object_v2_request_t* instantiate_ezsigntemplatesignature_create_object_v2_request(int include_optional);



ezsigntemplatesignature_create_object_v2_request_t* instantiate_ezsigntemplatesignature_create_object_v2_request(int include_optional) {
  ezsigntemplatesignature_create_object_v2_request_t* ezsigntemplatesignature_create_object_v2_request = NULL;
  if (include_optional) {
    ezsigntemplatesignature_create_object_v2_request = ezsigntemplatesignature_create_object_v2_request_create(
      list_createList()
    );
  } else {
    ezsigntemplatesignature_create_object_v2_request = ezsigntemplatesignature_create_object_v2_request_create(
      list_createList()
    );
  }

  return ezsigntemplatesignature_create_object_v2_request;
}


#ifdef ezsigntemplatesignature_create_object_v2_request_MAIN

void test_ezsigntemplatesignature_create_object_v2_request(int include_optional) {
    ezsigntemplatesignature_create_object_v2_request_t* ezsigntemplatesignature_create_object_v2_request_1 = instantiate_ezsigntemplatesignature_create_object_v2_request(include_optional);

	cJSON* jsonezsigntemplatesignature_create_object_v2_request_1 = ezsigntemplatesignature_create_object_v2_request_convertToJSON(ezsigntemplatesignature_create_object_v2_request_1);
	printf("ezsigntemplatesignature_create_object_v2_request :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v2_request_1));
	ezsigntemplatesignature_create_object_v2_request_t* ezsigntemplatesignature_create_object_v2_request_2 = ezsigntemplatesignature_create_object_v2_request_parseFromJSON(jsonezsigntemplatesignature_create_object_v2_request_1);
	cJSON* jsonezsigntemplatesignature_create_object_v2_request_2 = ezsigntemplatesignature_create_object_v2_request_convertToJSON(ezsigntemplatesignature_create_object_v2_request_2);
	printf("repeating ezsigntemplatesignature_create_object_v2_request:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v2_request_2));
}

int main() {
  test_ezsigntemplatesignature_create_object_v2_request(1);
  test_ezsigntemplatesignature_create_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_create_object_v2_request_MAIN
#endif // ezsigntemplatesignature_create_object_v2_request_TEST
