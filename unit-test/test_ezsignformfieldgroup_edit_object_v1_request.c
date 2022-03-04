#ifndef ezsignformfieldgroup_edit_object_v1_request_TEST
#define ezsignformfieldgroup_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_edit_object_v1_request.h"
ezsignformfieldgroup_edit_object_v1_request_t* instantiate_ezsignformfieldgroup_edit_object_v1_request(int include_optional);

#include "test_ezsignformfieldgroup_request_compound.c"


ezsignformfieldgroup_edit_object_v1_request_t* instantiate_ezsignformfieldgroup_edit_object_v1_request(int include_optional) {
  ezsignformfieldgroup_edit_object_v1_request_t* ezsignformfieldgroup_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignformfieldgroup_edit_object_v1_request = ezsignformfieldgroup_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignformfieldgroup_request_compound(0)
    );
  } else {
    ezsignformfieldgroup_edit_object_v1_request = ezsignformfieldgroup_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsignformfieldgroup_edit_object_v1_request;
}


#ifdef ezsignformfieldgroup_edit_object_v1_request_MAIN

void test_ezsignformfieldgroup_edit_object_v1_request(int include_optional) {
    ezsignformfieldgroup_edit_object_v1_request_t* ezsignformfieldgroup_edit_object_v1_request_1 = instantiate_ezsignformfieldgroup_edit_object_v1_request(include_optional);

	cJSON* jsonezsignformfieldgroup_edit_object_v1_request_1 = ezsignformfieldgroup_edit_object_v1_request_convertToJSON(ezsignformfieldgroup_edit_object_v1_request_1);
	printf("ezsignformfieldgroup_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_edit_object_v1_request_1));
	ezsignformfieldgroup_edit_object_v1_request_t* ezsignformfieldgroup_edit_object_v1_request_2 = ezsignformfieldgroup_edit_object_v1_request_parseFromJSON(jsonezsignformfieldgroup_edit_object_v1_request_1);
	cJSON* jsonezsignformfieldgroup_edit_object_v1_request_2 = ezsignformfieldgroup_edit_object_v1_request_convertToJSON(ezsignformfieldgroup_edit_object_v1_request_2);
	printf("repeating ezsignformfieldgroup_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_edit_object_v1_request_2));
}

int main() {
  test_ezsignformfieldgroup_edit_object_v1_request(1);
  test_ezsignformfieldgroup_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_edit_object_v1_request_MAIN
#endif // ezsignformfieldgroup_edit_object_v1_request_TEST
