#ifndef ezsignbulksendtransmission_get_object_v2_response_all_of_TEST
#define ezsignbulksendtransmission_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendtransmission_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendtransmission_get_object_v2_response_all_of.h"
ezsignbulksendtransmission_get_object_v2_response_all_of_t* instantiate_ezsignbulksendtransmission_get_object_v2_response_all_of(int include_optional);

#include "test_ezsignbulksendtransmission_get_object_v2_response_m_payload.c"


ezsignbulksendtransmission_get_object_v2_response_all_of_t* instantiate_ezsignbulksendtransmission_get_object_v2_response_all_of(int include_optional) {
  ezsignbulksendtransmission_get_object_v2_response_all_of_t* ezsignbulksendtransmission_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignbulksendtransmission_get_object_v2_response_all_of = ezsignbulksendtransmission_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksendtransmission_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignbulksendtransmission_get_object_v2_response_all_of = ezsignbulksendtransmission_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsignbulksendtransmission_get_object_v2_response_all_of;
}


#ifdef ezsignbulksendtransmission_get_object_v2_response_all_of_MAIN

void test_ezsignbulksendtransmission_get_object_v2_response_all_of(int include_optional) {
    ezsignbulksendtransmission_get_object_v2_response_all_of_t* ezsignbulksendtransmission_get_object_v2_response_all_of_1 = instantiate_ezsignbulksendtransmission_get_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignbulksendtransmission_get_object_v2_response_all_of_1 = ezsignbulksendtransmission_get_object_v2_response_all_of_convertToJSON(ezsignbulksendtransmission_get_object_v2_response_all_of_1);
	printf("ezsignbulksendtransmission_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_get_object_v2_response_all_of_1));
	ezsignbulksendtransmission_get_object_v2_response_all_of_t* ezsignbulksendtransmission_get_object_v2_response_all_of_2 = ezsignbulksendtransmission_get_object_v2_response_all_of_parseFromJSON(jsonezsignbulksendtransmission_get_object_v2_response_all_of_1);
	cJSON* jsonezsignbulksendtransmission_get_object_v2_response_all_of_2 = ezsignbulksendtransmission_get_object_v2_response_all_of_convertToJSON(ezsignbulksendtransmission_get_object_v2_response_all_of_2);
	printf("repeating ezsignbulksendtransmission_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_get_object_v2_response_all_of_2));
}

int main() {
  test_ezsignbulksendtransmission_get_object_v2_response_all_of(1);
  test_ezsignbulksendtransmission_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendtransmission_get_object_v2_response_all_of_MAIN
#endif // ezsignbulksendtransmission_get_object_v2_response_all_of_TEST
