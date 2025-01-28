#ifndef ezsignfolder_create_object_v1_request_TEST
#define ezsignfolder_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_create_object_v1_request.h"
ezsignfolder_create_object_v1_request_t* instantiate_ezsignfolder_create_object_v1_request(int include_optional);

#include "test_ezsignfolder_request.c"
#include "test_ezsignfolder_request_compound.c"


ezsignfolder_create_object_v1_request_t* instantiate_ezsignfolder_create_object_v1_request(int include_optional) {
  ezsignfolder_create_object_v1_request_t* ezsignfolder_create_object_v1_request = NULL;
  if (include_optional) {
    ezsignfolder_create_object_v1_request = ezsignfolder_create_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignfolder_request(0),
       // false, not to have infinite recursion
      instantiate_ezsignfolder_request_compound(0)
    );
  } else {
    ezsignfolder_create_object_v1_request = ezsignfolder_create_object_v1_request_create(
      NULL,
      NULL
    );
  }

  return ezsignfolder_create_object_v1_request;
}


#ifdef ezsignfolder_create_object_v1_request_MAIN

void test_ezsignfolder_create_object_v1_request(int include_optional) {
    ezsignfolder_create_object_v1_request_t* ezsignfolder_create_object_v1_request_1 = instantiate_ezsignfolder_create_object_v1_request(include_optional);

	cJSON* jsonezsignfolder_create_object_v1_request_1 = ezsignfolder_create_object_v1_request_convertToJSON(ezsignfolder_create_object_v1_request_1);
	printf("ezsignfolder_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsignfolder_create_object_v1_request_1));
	ezsignfolder_create_object_v1_request_t* ezsignfolder_create_object_v1_request_2 = ezsignfolder_create_object_v1_request_parseFromJSON(jsonezsignfolder_create_object_v1_request_1);
	cJSON* jsonezsignfolder_create_object_v1_request_2 = ezsignfolder_create_object_v1_request_convertToJSON(ezsignfolder_create_object_v1_request_2);
	printf("repeating ezsignfolder_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsignfolder_create_object_v1_request_2));
}

int main() {
  test_ezsignfolder_create_object_v1_request(1);
  test_ezsignfolder_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_create_object_v1_request_MAIN
#endif // ezsignfolder_create_object_v1_request_TEST
