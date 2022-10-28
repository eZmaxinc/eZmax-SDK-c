#ifndef ezsigntemplatesigner_get_object_v2_response_all_of_TEST
#define ezsigntemplatesigner_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_get_object_v2_response_all_of.h"
ezsigntemplatesigner_get_object_v2_response_all_of_t* instantiate_ezsigntemplatesigner_get_object_v2_response_all_of(int include_optional);

#include "test_ezsigntemplatesigner_get_object_v2_response_m_payload.c"


ezsigntemplatesigner_get_object_v2_response_all_of_t* instantiate_ezsigntemplatesigner_get_object_v2_response_all_of(int include_optional) {
  ezsigntemplatesigner_get_object_v2_response_all_of_t* ezsigntemplatesigner_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsigntemplatesigner_get_object_v2_response_all_of = ezsigntemplatesigner_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesigner_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsigntemplatesigner_get_object_v2_response_all_of = ezsigntemplatesigner_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsigntemplatesigner_get_object_v2_response_all_of;
}


#ifdef ezsigntemplatesigner_get_object_v2_response_all_of_MAIN

void test_ezsigntemplatesigner_get_object_v2_response_all_of(int include_optional) {
    ezsigntemplatesigner_get_object_v2_response_all_of_t* ezsigntemplatesigner_get_object_v2_response_all_of_1 = instantiate_ezsigntemplatesigner_get_object_v2_response_all_of(include_optional);

	cJSON* jsonezsigntemplatesigner_get_object_v2_response_all_of_1 = ezsigntemplatesigner_get_object_v2_response_all_of_convertToJSON(ezsigntemplatesigner_get_object_v2_response_all_of_1);
	printf("ezsigntemplatesigner_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_get_object_v2_response_all_of_1));
	ezsigntemplatesigner_get_object_v2_response_all_of_t* ezsigntemplatesigner_get_object_v2_response_all_of_2 = ezsigntemplatesigner_get_object_v2_response_all_of_parseFromJSON(jsonezsigntemplatesigner_get_object_v2_response_all_of_1);
	cJSON* jsonezsigntemplatesigner_get_object_v2_response_all_of_2 = ezsigntemplatesigner_get_object_v2_response_all_of_convertToJSON(ezsigntemplatesigner_get_object_v2_response_all_of_2);
	printf("repeating ezsigntemplatesigner_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_get_object_v2_response_all_of_2));
}

int main() {
  test_ezsigntemplatesigner_get_object_v2_response_all_of(1);
  test_ezsigntemplatesigner_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_get_object_v2_response_all_of_MAIN
#endif // ezsigntemplatesigner_get_object_v2_response_all_of_TEST
