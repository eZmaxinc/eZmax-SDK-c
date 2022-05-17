#ifndef ezsignbulksenddocumentmapping_create_object_v1_response_all_of_TEST
#define ezsignbulksenddocumentmapping_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksenddocumentmapping_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksenddocumentmapping_create_object_v1_response_all_of.h"
ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_all_of(int include_optional);

#include "test_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload.c"


ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t* instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_all_of(int include_optional) {
  ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t* ezsignbulksenddocumentmapping_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_response_all_of = ezsignbulksenddocumentmapping_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsignbulksenddocumentmapping_create_object_v1_response_all_of = ezsignbulksenddocumentmapping_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsignbulksenddocumentmapping_create_object_v1_response_all_of;
}


#ifdef ezsignbulksenddocumentmapping_create_object_v1_response_all_of_MAIN

void test_ezsignbulksenddocumentmapping_create_object_v1_response_all_of(int include_optional) {
    ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t* ezsignbulksenddocumentmapping_create_object_v1_response_all_of_1 = instantiate_ezsignbulksenddocumentmapping_create_object_v1_response_all_of(include_optional);

	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_response_all_of_1 = ezsignbulksenddocumentmapping_create_object_v1_response_all_of_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_all_of_1);
	printf("ezsignbulksenddocumentmapping_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_response_all_of_1));
	ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t* ezsignbulksenddocumentmapping_create_object_v1_response_all_of_2 = ezsignbulksenddocumentmapping_create_object_v1_response_all_of_parseFromJSON(jsonezsignbulksenddocumentmapping_create_object_v1_response_all_of_1);
	cJSON* jsonezsignbulksenddocumentmapping_create_object_v1_response_all_of_2 = ezsignbulksenddocumentmapping_create_object_v1_response_all_of_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_all_of_2);
	printf("repeating ezsignbulksenddocumentmapping_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignbulksenddocumentmapping_create_object_v1_response_all_of_2));
}

int main() {
  test_ezsignbulksenddocumentmapping_create_object_v1_response_all_of(1);
  test_ezsignbulksenddocumentmapping_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksenddocumentmapping_create_object_v1_response_all_of_MAIN
#endif // ezsignbulksenddocumentmapping_create_object_v1_response_all_of_TEST
