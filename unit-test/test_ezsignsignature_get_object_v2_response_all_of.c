#ifndef ezsignsignature_get_object_v2_response_all_of_TEST
#define ezsignsignature_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_get_object_v2_response_all_of.h"
ezsignsignature_get_object_v2_response_all_of_t* instantiate_ezsignsignature_get_object_v2_response_all_of(int include_optional);

#include "test_ezsignsignature_get_object_v2_response_m_payload.c"


ezsignsignature_get_object_v2_response_all_of_t* instantiate_ezsignsignature_get_object_v2_response_all_of(int include_optional) {
  ezsignsignature_get_object_v2_response_all_of_t* ezsignsignature_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignsignature_get_object_v2_response_all_of = ezsignsignature_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignature_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignsignature_get_object_v2_response_all_of = ezsignsignature_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsignsignature_get_object_v2_response_all_of;
}


#ifdef ezsignsignature_get_object_v2_response_all_of_MAIN

void test_ezsignsignature_get_object_v2_response_all_of(int include_optional) {
    ezsignsignature_get_object_v2_response_all_of_t* ezsignsignature_get_object_v2_response_all_of_1 = instantiate_ezsignsignature_get_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignsignature_get_object_v2_response_all_of_1 = ezsignsignature_get_object_v2_response_all_of_convertToJSON(ezsignsignature_get_object_v2_response_all_of_1);
	printf("ezsignsignature_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignsignature_get_object_v2_response_all_of_1));
	ezsignsignature_get_object_v2_response_all_of_t* ezsignsignature_get_object_v2_response_all_of_2 = ezsignsignature_get_object_v2_response_all_of_parseFromJSON(jsonezsignsignature_get_object_v2_response_all_of_1);
	cJSON* jsonezsignsignature_get_object_v2_response_all_of_2 = ezsignsignature_get_object_v2_response_all_of_convertToJSON(ezsignsignature_get_object_v2_response_all_of_2);
	printf("repeating ezsignsignature_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignsignature_get_object_v2_response_all_of_2));
}

int main() {
  test_ezsignsignature_get_object_v2_response_all_of(1);
  test_ezsignsignature_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_get_object_v2_response_all_of_MAIN
#endif // ezsignsignature_get_object_v2_response_all_of_TEST
