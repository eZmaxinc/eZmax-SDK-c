#ifndef ezsignbulksendsignermapping_create_object_v1_response_all_of_TEST
#define ezsignbulksendsignermapping_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendsignermapping_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendsignermapping_create_object_v1_response_all_of.h"
ezsignbulksendsignermapping_create_object_v1_response_all_of_t* instantiate_ezsignbulksendsignermapping_create_object_v1_response_all_of(int include_optional);

#include "test_ezsignbulksendsignermapping_create_object_v1_response_m_payload.c"


ezsignbulksendsignermapping_create_object_v1_response_all_of_t* instantiate_ezsignbulksendsignermapping_create_object_v1_response_all_of(int include_optional) {
  ezsignbulksendsignermapping_create_object_v1_response_all_of_t* ezsignbulksendsignermapping_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignbulksendsignermapping_create_object_v1_response_all_of = ezsignbulksendsignermapping_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksendsignermapping_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsignbulksendsignermapping_create_object_v1_response_all_of = ezsignbulksendsignermapping_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsignbulksendsignermapping_create_object_v1_response_all_of;
}


#ifdef ezsignbulksendsignermapping_create_object_v1_response_all_of_MAIN

void test_ezsignbulksendsignermapping_create_object_v1_response_all_of(int include_optional) {
    ezsignbulksendsignermapping_create_object_v1_response_all_of_t* ezsignbulksendsignermapping_create_object_v1_response_all_of_1 = instantiate_ezsignbulksendsignermapping_create_object_v1_response_all_of(include_optional);

	cJSON* jsonezsignbulksendsignermapping_create_object_v1_response_all_of_1 = ezsignbulksendsignermapping_create_object_v1_response_all_of_convertToJSON(ezsignbulksendsignermapping_create_object_v1_response_all_of_1);
	printf("ezsignbulksendsignermapping_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_create_object_v1_response_all_of_1));
	ezsignbulksendsignermapping_create_object_v1_response_all_of_t* ezsignbulksendsignermapping_create_object_v1_response_all_of_2 = ezsignbulksendsignermapping_create_object_v1_response_all_of_parseFromJSON(jsonezsignbulksendsignermapping_create_object_v1_response_all_of_1);
	cJSON* jsonezsignbulksendsignermapping_create_object_v1_response_all_of_2 = ezsignbulksendsignermapping_create_object_v1_response_all_of_convertToJSON(ezsignbulksendsignermapping_create_object_v1_response_all_of_2);
	printf("repeating ezsignbulksendsignermapping_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignbulksendsignermapping_create_object_v1_response_all_of_2));
}

int main() {
  test_ezsignbulksendsignermapping_create_object_v1_response_all_of(1);
  test_ezsignbulksendsignermapping_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendsignermapping_create_object_v1_response_all_of_MAIN
#endif // ezsignbulksendsignermapping_create_object_v1_response_all_of_TEST
