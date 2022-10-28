#ifndef ezsignbulksendsignermapping_get_object_v2_response_all_of_TEST
#define ezsignbulksendsignermapping_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_get_object_v2_response_all_of.h"
ezsignbulksendsignermapping_get_object_v2_response_all_of_t* instantiate_ezsignbulksendsignermapping_get_object_v2_response_all_of(int include_optional);

#include "test_ezsignbulksendsignermapping_get_object_v2_response_m_payload.c"


ezsignbulksendsignermapping_get_object_v2_response_all_of_t* instantiate_ezsignbulksendsignermapping_get_object_v2_response_all_of(int include_optional) {
  ezsignbulksendsignermapping_get_object_v2_response_all_of_t* ezsignbulksendsignermapping_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_get_object_v2_response_all_of = ezsignbulksendsignermapping_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksendsignermapping_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignbulksendsignermapping_get_object_v2_response_all_of = ezsignbulksendsignermapping_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsignbulksendsignermapping_get_object_v2_response_all_of;
}


#ifdef ezsignbulksendsignermapping_get_object_v2_response_all_of_MAIN

void test_ezsignbulksendsignermapping_get_object_v2_response_all_of(int include_optional) {
    ezsignbulksendsignermapping_get_object_v2_response_all_of_t* ezsignbulksendsignermapping_get_object_v2_response_all_of_1 = instantiate_ezsignbulksendsignermapping_get_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignbulksendsignermapping_get_object_v2_response_all_of_1 = ezsignbulksendsignermapping_get_object_v2_response_all_of_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_all_of_1);
	printf("ezsignbulksendsignermapping_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_get_object_v2_response_all_of_1));
	ezsignbulksendsignermapping_get_object_v2_response_all_of_t* ezsignbulksendsignermapping_get_object_v2_response_all_of_2 = ezsignbulksendsignermapping_get_object_v2_response_all_of_parseFromJSON(jsonezsignbulksendsignermapping_get_object_v2_response_all_of_1);
	cJSON* jsonezsignbulksendsignermapping_get_object_v2_response_all_of_2 = ezsignbulksendsignermapping_get_object_v2_response_all_of_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_all_of_2);
	printf("repeating ezsignbulksendsignermapping_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_get_object_v2_response_all_of_2));
}

int main() {
  test_ezsignbulksendsignermapping_get_object_v2_response_all_of(1);
  test_ezsignbulksendsignermapping_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_get_object_v2_response_all_of_MAIN
#endif // ezsignbulksendsignermapping_get_object_v2_response_all_of_TEST
