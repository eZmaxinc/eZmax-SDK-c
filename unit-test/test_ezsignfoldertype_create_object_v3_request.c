#ifndef ezsignfoldertype_create_object_v3_request_TEST
#define ezsignfoldertype_create_object_v3_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_create_object_v3_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_create_object_v3_request.h"
ezsignfoldertype_create_object_v3_request_t* instantiate_ezsignfoldertype_create_object_v3_request(int include_optional);



ezsignfoldertype_create_object_v3_request_t* instantiate_ezsignfoldertype_create_object_v3_request(int include_optional) {
  ezsignfoldertype_create_object_v3_request_t* ezsignfoldertype_create_object_v3_request = NULL;
  if (include_optional) {
    ezsignfoldertype_create_object_v3_request = ezsignfoldertype_create_object_v3_request_create(
      list_createList()
    );
  } else {
    ezsignfoldertype_create_object_v3_request = ezsignfoldertype_create_object_v3_request_create(
      list_createList()
    );
  }

  return ezsignfoldertype_create_object_v3_request;
}


#ifdef ezsignfoldertype_create_object_v3_request_MAIN

void test_ezsignfoldertype_create_object_v3_request(int include_optional) {
    ezsignfoldertype_create_object_v3_request_t* ezsignfoldertype_create_object_v3_request_1 = instantiate_ezsignfoldertype_create_object_v3_request(include_optional);

	cJSON* jsonezsignfoldertype_create_object_v3_request_1 = ezsignfoldertype_create_object_v3_request_convertToJSON(ezsignfoldertype_create_object_v3_request_1);
	printf("ezsignfoldertype_create_object_v3_request :\n%s\n", cJSON_Print(jsonezsignfoldertype_create_object_v3_request_1));
	ezsignfoldertype_create_object_v3_request_t* ezsignfoldertype_create_object_v3_request_2 = ezsignfoldertype_create_object_v3_request_parseFromJSON(jsonezsignfoldertype_create_object_v3_request_1);
	cJSON* jsonezsignfoldertype_create_object_v3_request_2 = ezsignfoldertype_create_object_v3_request_convertToJSON(ezsignfoldertype_create_object_v3_request_2);
	printf("repeating ezsignfoldertype_create_object_v3_request:\n%s\n", cJSON_Print(jsonezsignfoldertype_create_object_v3_request_2));
}

int main() {
  test_ezsignfoldertype_create_object_v3_request(1);
  test_ezsignfoldertype_create_object_v3_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_create_object_v3_request_MAIN
#endif // ezsignfoldertype_create_object_v3_request_TEST
