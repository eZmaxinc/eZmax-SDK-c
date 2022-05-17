#ifndef ezsignbulksend_reorder_v1_request_TEST
#define ezsignbulksend_reorder_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_reorder_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_reorder_v1_request.h"
ezsignbulksend_reorder_v1_request_t* instantiate_ezsignbulksend_reorder_v1_request(int include_optional);



ezsignbulksend_reorder_v1_request_t* instantiate_ezsignbulksend_reorder_v1_request(int include_optional) {
  ezsignbulksend_reorder_v1_request_t* ezsignbulksend_reorder_v1_request = NULL;
  if (include_optional) {
    ezsignbulksend_reorder_v1_request = ezsignbulksend_reorder_v1_request_create(
      list_createList()
    );
  } else {
    ezsignbulksend_reorder_v1_request = ezsignbulksend_reorder_v1_request_create(
      list_createList()
    );
  }

  return ezsignbulksend_reorder_v1_request;
}


#ifdef ezsignbulksend_reorder_v1_request_MAIN

void test_ezsignbulksend_reorder_v1_request(int include_optional) {
    ezsignbulksend_reorder_v1_request_t* ezsignbulksend_reorder_v1_request_1 = instantiate_ezsignbulksend_reorder_v1_request(include_optional);

	cJSON* jsonezsignbulksend_reorder_v1_request_1 = ezsignbulksend_reorder_v1_request_convertToJSON(ezsignbulksend_reorder_v1_request_1);
	printf("ezsignbulksend_reorder_v1_request :\n%s\n", cJSON_Print(jsonezsignbulksend_reorder_v1_request_1));
	ezsignbulksend_reorder_v1_request_t* ezsignbulksend_reorder_v1_request_2 = ezsignbulksend_reorder_v1_request_parseFromJSON(jsonezsignbulksend_reorder_v1_request_1);
	cJSON* jsonezsignbulksend_reorder_v1_request_2 = ezsignbulksend_reorder_v1_request_convertToJSON(ezsignbulksend_reorder_v1_request_2);
	printf("repeating ezsignbulksend_reorder_v1_request:\n%s\n", cJSON_Print(jsonezsignbulksend_reorder_v1_request_2));
}

int main() {
  test_ezsignbulksend_reorder_v1_request(1);
  test_ezsignbulksend_reorder_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_reorder_v1_request_MAIN
#endif // ezsignbulksend_reorder_v1_request_TEST
