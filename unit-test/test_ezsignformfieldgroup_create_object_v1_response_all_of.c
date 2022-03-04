#ifndef ezsignformfieldgroup_create_object_v1_response_all_of_TEST
#define ezsignformfieldgroup_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_create_object_v1_response_all_of.h"
ezsignformfieldgroup_create_object_v1_response_all_of_t* instantiate_ezsignformfieldgroup_create_object_v1_response_all_of(int include_optional);

#include "test_ezsignformfieldgroup_create_object_v1_response_m_payload.c"


ezsignformfieldgroup_create_object_v1_response_all_of_t* instantiate_ezsignformfieldgroup_create_object_v1_response_all_of(int include_optional) {
  ezsignformfieldgroup_create_object_v1_response_all_of_t* ezsignformfieldgroup_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignformfieldgroup_create_object_v1_response_all_of = ezsignformfieldgroup_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignformfieldgroup_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsignformfieldgroup_create_object_v1_response_all_of = ezsignformfieldgroup_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsignformfieldgroup_create_object_v1_response_all_of;
}


#ifdef ezsignformfieldgroup_create_object_v1_response_all_of_MAIN

void test_ezsignformfieldgroup_create_object_v1_response_all_of(int include_optional) {
    ezsignformfieldgroup_create_object_v1_response_all_of_t* ezsignformfieldgroup_create_object_v1_response_all_of_1 = instantiate_ezsignformfieldgroup_create_object_v1_response_all_of(include_optional);

	cJSON* jsonezsignformfieldgroup_create_object_v1_response_all_of_1 = ezsignformfieldgroup_create_object_v1_response_all_of_convertToJSON(ezsignformfieldgroup_create_object_v1_response_all_of_1);
	printf("ezsignformfieldgroup_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_create_object_v1_response_all_of_1));
	ezsignformfieldgroup_create_object_v1_response_all_of_t* ezsignformfieldgroup_create_object_v1_response_all_of_2 = ezsignformfieldgroup_create_object_v1_response_all_of_parseFromJSON(jsonezsignformfieldgroup_create_object_v1_response_all_of_1);
	cJSON* jsonezsignformfieldgroup_create_object_v1_response_all_of_2 = ezsignformfieldgroup_create_object_v1_response_all_of_convertToJSON(ezsignformfieldgroup_create_object_v1_response_all_of_2);
	printf("repeating ezsignformfieldgroup_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_create_object_v1_response_all_of_2));
}

int main() {
  test_ezsignformfieldgroup_create_object_v1_response_all_of(1);
  test_ezsignformfieldgroup_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_create_object_v1_response_all_of_MAIN
#endif // ezsignformfieldgroup_create_object_v1_response_all_of_TEST
