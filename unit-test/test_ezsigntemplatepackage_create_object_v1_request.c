#ifndef ezsigntemplatepackage_create_object_v1_request_TEST
#define ezsigntemplatepackage_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_create_object_v1_request.h"
ezsigntemplatepackage_create_object_v1_request_t* instantiate_ezsigntemplatepackage_create_object_v1_request(int include_optional);



ezsigntemplatepackage_create_object_v1_request_t* instantiate_ezsigntemplatepackage_create_object_v1_request(int include_optional) {
  ezsigntemplatepackage_create_object_v1_request_t* ezsigntemplatepackage_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatepackage_create_object_v1_request = ezsigntemplatepackage_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigntemplatepackage_create_object_v1_request = ezsigntemplatepackage_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigntemplatepackage_create_object_v1_request;
}


#ifdef ezsigntemplatepackage_create_object_v1_request_MAIN

void test_ezsigntemplatepackage_create_object_v1_request(int include_optional) {
    ezsigntemplatepackage_create_object_v1_request_t* ezsigntemplatepackage_create_object_v1_request_1 = instantiate_ezsigntemplatepackage_create_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatepackage_create_object_v1_request_1 = ezsigntemplatepackage_create_object_v1_request_convertToJSON(ezsigntemplatepackage_create_object_v1_request_1);
	printf("ezsigntemplatepackage_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_create_object_v1_request_1));
	ezsigntemplatepackage_create_object_v1_request_t* ezsigntemplatepackage_create_object_v1_request_2 = ezsigntemplatepackage_create_object_v1_request_parseFromJSON(jsonezsigntemplatepackage_create_object_v1_request_1);
	cJSON* jsonezsigntemplatepackage_create_object_v1_request_2 = ezsigntemplatepackage_create_object_v1_request_convertToJSON(ezsigntemplatepackage_create_object_v1_request_2);
	printf("repeating ezsigntemplatepackage_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_create_object_v1_request_2));
}

int main() {
  test_ezsigntemplatepackage_create_object_v1_request(1);
  test_ezsigntemplatepackage_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_create_object_v1_request_MAIN
#endif // ezsigntemplatepackage_create_object_v1_request_TEST
