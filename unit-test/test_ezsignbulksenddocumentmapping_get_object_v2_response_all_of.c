#ifndef ezsignbulksenddocumentmapping_get_object_v2_response_all_of_TEST
#define ezsignbulksenddocumentmapping_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_get_object_v2_response_all_of.h"
ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t* instantiate_ezsignbulksenddocumentmapping_get_object_v2_response_all_of(int include_optional);

#include "test_ezsignbulksenddocumentmapping_get_object_v2_response_m_payload.c"


ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t* instantiate_ezsignbulksenddocumentmapping_get_object_v2_response_all_of(int include_optional) {
  ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t* ezsignbulksenddocumentmapping_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_get_object_v2_response_all_of = ezsignbulksenddocumentmapping_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksenddocumentmapping_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignbulksenddocumentmapping_get_object_v2_response_all_of = ezsignbulksenddocumentmapping_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsignbulksenddocumentmapping_get_object_v2_response_all_of;
}


#ifdef ezsignbulksenddocumentmapping_get_object_v2_response_all_of_MAIN

void test_ezsignbulksenddocumentmapping_get_object_v2_response_all_of(int include_optional) {
    ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t* ezsignbulksenddocumentmapping_get_object_v2_response_all_of_1 = instantiate_ezsignbulksenddocumentmapping_get_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_get_object_v2_response_all_of_1 = ezsignbulksenddocumentmapping_get_object_v2_response_all_of_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_all_of_1);
	printf("ezsignbulksenddocumentmapping_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_get_object_v2_response_all_of_1));
	ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t* ezsignbulksenddocumentmapping_get_object_v2_response_all_of_2 = ezsignbulksenddocumentmapping_get_object_v2_response_all_of_parseFromJSON(jsonezsignbulksenddocumentmapping_get_object_v2_response_all_of_1);
	cJSON* jsonezsignbulksenddocumentmapping_get_object_v2_response_all_of_2 = ezsignbulksenddocumentmapping_get_object_v2_response_all_of_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_all_of_2);
	printf("repeating ezsignbulksenddocumentmapping_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_get_object_v2_response_all_of_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_get_object_v2_response_all_of(1);
  test_ezsignbulksenddocumentmapping_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_get_object_v2_response_all_of_MAIN
#endif // ezsignbulksenddocumentmapping_get_object_v2_response_all_of_TEST
