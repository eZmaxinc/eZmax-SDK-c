#ifndef ezsignfolder_create_object_v3_request_TEST
#define ezsignfolder_create_object_v3_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_create_object_v3_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_create_object_v3_request.h"
ezsignfolder_create_object_v3_request_t* instantiate_ezsignfolder_create_object_v3_request(int include_optional);



ezsignfolder_create_object_v3_request_t* instantiate_ezsignfolder_create_object_v3_request(int include_optional) {
  ezsignfolder_create_object_v3_request_t* ezsignfolder_create_object_v3_request = NULL;
  if (include_optional) {
    ezsignfolder_create_object_v3_request = ezsignfolder_create_object_v3_request_create(
      list_createList()
    );
  } else {
    ezsignfolder_create_object_v3_request = ezsignfolder_create_object_v3_request_create(
      list_createList()
    );
  }

  return ezsignfolder_create_object_v3_request;
}


#ifdef ezsignfolder_create_object_v3_request_MAIN

void test_ezsignfolder_create_object_v3_request(int include_optional) {
    ezsignfolder_create_object_v3_request_t* ezsignfolder_create_object_v3_request_1 = instantiate_ezsignfolder_create_object_v3_request(include_optional);

	cJSON* jsonezsignfolder_create_object_v3_request_1 = ezsignfolder_create_object_v3_request_convertToJSON(ezsignfolder_create_object_v3_request_1);
	printf("ezsignfolder_create_object_v3_request :\n%s\n", cJSON_Print(jsonezsignfolder_create_object_v3_request_1));
	ezsignfolder_create_object_v3_request_t* ezsignfolder_create_object_v3_request_2 = ezsignfolder_create_object_v3_request_parseFromJSON(jsonezsignfolder_create_object_v3_request_1);
	cJSON* jsonezsignfolder_create_object_v3_request_2 = ezsignfolder_create_object_v3_request_convertToJSON(ezsignfolder_create_object_v3_request_2);
	printf("repeating ezsignfolder_create_object_v3_request:\n%s\n", cJSON_Print(jsonezsignfolder_create_object_v3_request_2));
}

int main() {
  test_ezsignfolder_create_object_v3_request(1);
  test_ezsignfolder_create_object_v3_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_create_object_v3_request_MAIN
#endif // ezsignfolder_create_object_v3_request_TEST
