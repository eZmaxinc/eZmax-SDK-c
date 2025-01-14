#ifndef ezsigntemplatepublic_create_object_v1_request_TEST
#define ezsigntemplatepublic_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_create_object_v1_request.h"
ezsigntemplatepublic_create_object_v1_request_t* instantiate_ezsigntemplatepublic_create_object_v1_request(int include_optional);



ezsigntemplatepublic_create_object_v1_request_t* instantiate_ezsigntemplatepublic_create_object_v1_request(int include_optional) {
  ezsigntemplatepublic_create_object_v1_request_t* ezsigntemplatepublic_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatepublic_create_object_v1_request = ezsigntemplatepublic_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigntemplatepublic_create_object_v1_request = ezsigntemplatepublic_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigntemplatepublic_create_object_v1_request;
}


#ifdef ezsigntemplatepublic_create_object_v1_request_MAIN

void test_ezsigntemplatepublic_create_object_v1_request(int include_optional) {
    ezsigntemplatepublic_create_object_v1_request_t* ezsigntemplatepublic_create_object_v1_request_1 = instantiate_ezsigntemplatepublic_create_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatepublic_create_object_v1_request_1 = ezsigntemplatepublic_create_object_v1_request_convertToJSON(ezsigntemplatepublic_create_object_v1_request_1);
	printf("ezsigntemplatepublic_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_create_object_v1_request_1));
	ezsigntemplatepublic_create_object_v1_request_t* ezsigntemplatepublic_create_object_v1_request_2 = ezsigntemplatepublic_create_object_v1_request_parseFromJSON(jsonezsigntemplatepublic_create_object_v1_request_1);
	cJSON* jsonezsigntemplatepublic_create_object_v1_request_2 = ezsigntemplatepublic_create_object_v1_request_convertToJSON(ezsigntemplatepublic_create_object_v1_request_2);
	printf("repeating ezsigntemplatepublic_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_create_object_v1_request_2));
}

int main() {
  test_ezsigntemplatepublic_create_object_v1_request(1);
  test_ezsigntemplatepublic_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_create_object_v1_request_MAIN
#endif // ezsigntemplatepublic_create_object_v1_request_TEST
