#ifndef ezsignfoldertype_edit_object_v1_request_TEST
#define ezsignfoldertype_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_edit_object_v1_request.h"
ezsignfoldertype_edit_object_v1_request_t* instantiate_ezsignfoldertype_edit_object_v1_request(int include_optional);

#include "test_ezsignfoldertype_request_compound.c"


ezsignfoldertype_edit_object_v1_request_t* instantiate_ezsignfoldertype_edit_object_v1_request(int include_optional) {
  ezsignfoldertype_edit_object_v1_request_t* ezsignfoldertype_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignfoldertype_edit_object_v1_request = ezsignfoldertype_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignfoldertype_request_compound(0)
    );
  } else {
    ezsignfoldertype_edit_object_v1_request = ezsignfoldertype_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsignfoldertype_edit_object_v1_request;
}


#ifdef ezsignfoldertype_edit_object_v1_request_MAIN

void test_ezsignfoldertype_edit_object_v1_request(int include_optional) {
    ezsignfoldertype_edit_object_v1_request_t* ezsignfoldertype_edit_object_v1_request_1 = instantiate_ezsignfoldertype_edit_object_v1_request(include_optional);

	cJSON* jsonezsignfoldertype_edit_object_v1_request_1 = ezsignfoldertype_edit_object_v1_request_convertToJSON(ezsignfoldertype_edit_object_v1_request_1);
	printf("ezsignfoldertype_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignfoldertype_edit_object_v1_request_1));
	ezsignfoldertype_edit_object_v1_request_t* ezsignfoldertype_edit_object_v1_request_2 = ezsignfoldertype_edit_object_v1_request_parseFromJSON(jsonezsignfoldertype_edit_object_v1_request_1);
	cJSON* jsonezsignfoldertype_edit_object_v1_request_2 = ezsignfoldertype_edit_object_v1_request_convertToJSON(ezsignfoldertype_edit_object_v1_request_2);
	printf("repeating ezsignfoldertype_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignfoldertype_edit_object_v1_request_2));
}

int main() {
  test_ezsignfoldertype_edit_object_v1_request(1);
  test_ezsignfoldertype_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_edit_object_v1_request_MAIN
#endif // ezsignfoldertype_edit_object_v1_request_TEST
