#ifndef ezsigntemplate_create_object_v3_request_TEST
#define ezsigntemplate_create_object_v3_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_create_object_v3_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_create_object_v3_request.h"
ezsigntemplate_create_object_v3_request_t* instantiate_ezsigntemplate_create_object_v3_request(int include_optional);



ezsigntemplate_create_object_v3_request_t* instantiate_ezsigntemplate_create_object_v3_request(int include_optional) {
  ezsigntemplate_create_object_v3_request_t* ezsigntemplate_create_object_v3_request = NULL;
  if (include_optional) {
    ezsigntemplate_create_object_v3_request = ezsigntemplate_create_object_v3_request_create(
      list_createList()
    );
  } else {
    ezsigntemplate_create_object_v3_request = ezsigntemplate_create_object_v3_request_create(
      list_createList()
    );
  }

  return ezsigntemplate_create_object_v3_request;
}


#ifdef ezsigntemplate_create_object_v3_request_MAIN

void test_ezsigntemplate_create_object_v3_request(int include_optional) {
    ezsigntemplate_create_object_v3_request_t* ezsigntemplate_create_object_v3_request_1 = instantiate_ezsigntemplate_create_object_v3_request(include_optional);

	cJSON* jsonezsigntemplate_create_object_v3_request_1 = ezsigntemplate_create_object_v3_request_convertToJSON(ezsigntemplate_create_object_v3_request_1);
	printf("ezsigntemplate_create_object_v3_request :\n%s\n", cJSON_Print(jsonezsigntemplate_create_object_v3_request_1));
	ezsigntemplate_create_object_v3_request_t* ezsigntemplate_create_object_v3_request_2 = ezsigntemplate_create_object_v3_request_parseFromJSON(jsonezsigntemplate_create_object_v3_request_1);
	cJSON* jsonezsigntemplate_create_object_v3_request_2 = ezsigntemplate_create_object_v3_request_convertToJSON(ezsigntemplate_create_object_v3_request_2);
	printf("repeating ezsigntemplate_create_object_v3_request:\n%s\n", cJSON_Print(jsonezsigntemplate_create_object_v3_request_2));
}

int main() {
  test_ezsigntemplate_create_object_v3_request(1);
  test_ezsigntemplate_create_object_v3_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_create_object_v3_request_MAIN
#endif // ezsigntemplate_create_object_v3_request_TEST
