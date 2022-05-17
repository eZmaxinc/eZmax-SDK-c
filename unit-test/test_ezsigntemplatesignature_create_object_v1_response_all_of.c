#ifndef ezsigntemplatesignature_create_object_v1_response_all_of_TEST
#define ezsigntemplatesignature_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_create_object_v1_response_all_of.h"
ezsigntemplatesignature_create_object_v1_response_all_of_t* instantiate_ezsigntemplatesignature_create_object_v1_response_all_of(int include_optional);

#include "test_ezsigntemplatesignature_create_object_v1_response_m_payload.c"


ezsigntemplatesignature_create_object_v1_response_all_of_t* instantiate_ezsigntemplatesignature_create_object_v1_response_all_of(int include_optional) {
  ezsigntemplatesignature_create_object_v1_response_all_of_t* ezsigntemplatesignature_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsigntemplatesignature_create_object_v1_response_all_of = ezsigntemplatesignature_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesignature_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatesignature_create_object_v1_response_all_of = ezsigntemplatesignature_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsigntemplatesignature_create_object_v1_response_all_of;
}


#ifdef ezsigntemplatesignature_create_object_v1_response_all_of_MAIN

void test_ezsigntemplatesignature_create_object_v1_response_all_of(int include_optional) {
    ezsigntemplatesignature_create_object_v1_response_all_of_t* ezsigntemplatesignature_create_object_v1_response_all_of_1 = instantiate_ezsigntemplatesignature_create_object_v1_response_all_of(include_optional);

	cJSON* jsonezsigntemplatesignature_create_object_v1_response_all_of_1 = ezsigntemplatesignature_create_object_v1_response_all_of_convertToJSON(ezsigntemplatesignature_create_object_v1_response_all_of_1);
	printf("ezsigntemplatesignature_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v1_response_all_of_1));
	ezsigntemplatesignature_create_object_v1_response_all_of_t* ezsigntemplatesignature_create_object_v1_response_all_of_2 = ezsigntemplatesignature_create_object_v1_response_all_of_parseFromJSON(jsonezsigntemplatesignature_create_object_v1_response_all_of_1);
	cJSON* jsonezsigntemplatesignature_create_object_v1_response_all_of_2 = ezsigntemplatesignature_create_object_v1_response_all_of_convertToJSON(ezsigntemplatesignature_create_object_v1_response_all_of_2);
	printf("repeating ezsigntemplatesignature_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v1_response_all_of_2));
}

int main() {
  test_ezsigntemplatesignature_create_object_v1_response_all_of(1);
  test_ezsigntemplatesignature_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_create_object_v1_response_all_of_MAIN
#endif // ezsigntemplatesignature_create_object_v1_response_all_of_TEST
