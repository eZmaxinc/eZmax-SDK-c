#ifndef ezsigntemplatepackagemembership_create_object_v1_request_TEST
#define ezsigntemplatepackagemembership_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_create_object_v1_request.h"
ezsigntemplatepackagemembership_create_object_v1_request_t* instantiate_ezsigntemplatepackagemembership_create_object_v1_request(int include_optional);



ezsigntemplatepackagemembership_create_object_v1_request_t* instantiate_ezsigntemplatepackagemembership_create_object_v1_request(int include_optional) {
  ezsigntemplatepackagemembership_create_object_v1_request_t* ezsigntemplatepackagemembership_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_create_object_v1_request = ezsigntemplatepackagemembership_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigntemplatepackagemembership_create_object_v1_request = ezsigntemplatepackagemembership_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigntemplatepackagemembership_create_object_v1_request;
}


#ifdef ezsigntemplatepackagemembership_create_object_v1_request_MAIN

void test_ezsigntemplatepackagemembership_create_object_v1_request(int include_optional) {
    ezsigntemplatepackagemembership_create_object_v1_request_t* ezsigntemplatepackagemembership_create_object_v1_request_1 = instantiate_ezsigntemplatepackagemembership_create_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_create_object_v1_request_1 = ezsigntemplatepackagemembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_request_1);
	printf("ezsigntemplatepackagemembership_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_create_object_v1_request_1));
	ezsigntemplatepackagemembership_create_object_v1_request_t* ezsigntemplatepackagemembership_create_object_v1_request_2 = ezsigntemplatepackagemembership_create_object_v1_request_parseFromJSON(jsonezsigntemplatepackagemembership_create_object_v1_request_1);
	cJSON* jsonezsigntemplatepackagemembership_create_object_v1_request_2 = ezsigntemplatepackagemembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagemembership_create_object_v1_request_2);
	printf("repeating ezsigntemplatepackagemembership_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_create_object_v1_request_2));
}

int main() {
  test_ezsigntemplatepackagemembership_create_object_v1_request(1);
  test_ezsigntemplatepackagemembership_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_create_object_v1_request_MAIN
#endif // ezsigntemplatepackagemembership_create_object_v1_request_TEST
