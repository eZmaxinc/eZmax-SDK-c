#ifndef ezsigntemplatepackagesigner_create_object_v1_request_TEST
#define ezsigntemplatepackagesigner_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_create_object_v1_request.h"
ezsigntemplatepackagesigner_create_object_v1_request_t* instantiate_ezsigntemplatepackagesigner_create_object_v1_request(int include_optional);



ezsigntemplatepackagesigner_create_object_v1_request_t* instantiate_ezsigntemplatepackagesigner_create_object_v1_request(int include_optional) {
  ezsigntemplatepackagesigner_create_object_v1_request_t* ezsigntemplatepackagesigner_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_create_object_v1_request = ezsigntemplatepackagesigner_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigntemplatepackagesigner_create_object_v1_request = ezsigntemplatepackagesigner_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigntemplatepackagesigner_create_object_v1_request;
}


#ifdef ezsigntemplatepackagesigner_create_object_v1_request_MAIN

void test_ezsigntemplatepackagesigner_create_object_v1_request(int include_optional) {
    ezsigntemplatepackagesigner_create_object_v1_request_t* ezsigntemplatepackagesigner_create_object_v1_request_1 = instantiate_ezsigntemplatepackagesigner_create_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_create_object_v1_request_1 = ezsigntemplatepackagesigner_create_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_request_1);
	printf("ezsigntemplatepackagesigner_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_create_object_v1_request_1));
	ezsigntemplatepackagesigner_create_object_v1_request_t* ezsigntemplatepackagesigner_create_object_v1_request_2 = ezsigntemplatepackagesigner_create_object_v1_request_parseFromJSON(jsonezsigntemplatepackagesigner_create_object_v1_request_1);
	cJSON* jsonezsigntemplatepackagesigner_create_object_v1_request_2 = ezsigntemplatepackagesigner_create_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_request_2);
	printf("repeating ezsigntemplatepackagesigner_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_create_object_v1_request_2));
}

int main() {
  test_ezsigntemplatepackagesigner_create_object_v1_request(1);
  test_ezsigntemplatepackagesigner_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_create_object_v1_request_MAIN
#endif // ezsigntemplatepackagesigner_create_object_v1_request_TEST
