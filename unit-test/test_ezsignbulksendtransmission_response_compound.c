#ifndef ezsignbulksendtransmission_response_compound_TEST
#define ezsignbulksendtransmission_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendtransmission_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendtransmission_response_compound.h"
ezsignbulksendtransmission_response_compound_t* instantiate_ezsignbulksendtransmission_response_compound(int include_optional);

#include "test_common_audit.c"


ezsignbulksendtransmission_response_compound_t* instantiate_ezsignbulksendtransmission_response_compound(int include_optional) {
  ezsignbulksendtransmission_response_compound_t* ezsignbulksendtransmission_response_compound = NULL;
  if (include_optional) {
    ezsignbulksendtransmission_response_compound = ezsignbulksendtransmission_response_compound_create(
      21,
      8,
      "Test eZsign Bulk Send Transmission #1",
      1,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsignbulksendtransmission_response_compound = ezsignbulksendtransmission_response_compound_create(
      21,
      8,
      "Test eZsign Bulk Send Transmission #1",
      1,
      NULL
    );
  }

  return ezsignbulksendtransmission_response_compound;
}


#ifdef ezsignbulksendtransmission_response_compound_MAIN

void test_ezsignbulksendtransmission_response_compound(int include_optional) {
    ezsignbulksendtransmission_response_compound_t* ezsignbulksendtransmission_response_compound_1 = instantiate_ezsignbulksendtransmission_response_compound(include_optional);

	cJSON* jsonezsignbulksendtransmission_response_compound_1 = ezsignbulksendtransmission_response_compound_convertToJSON(ezsignbulksendtransmission_response_compound_1);
	printf("ezsignbulksendtransmission_response_compound :\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_response_compound_1));
	ezsignbulksendtransmission_response_compound_t* ezsignbulksendtransmission_response_compound_2 = ezsignbulksendtransmission_response_compound_parseFromJSON(jsonezsignbulksendtransmission_response_compound_1);
	cJSON* jsonezsignbulksendtransmission_response_compound_2 = ezsignbulksendtransmission_response_compound_convertToJSON(ezsignbulksendtransmission_response_compound_2);
	printf("repeating ezsignbulksendtransmission_response_compound:\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_response_compound_2));
}

int main() {
  test_ezsignbulksendtransmission_response_compound(1);
  test_ezsignbulksendtransmission_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendtransmission_response_compound_MAIN
#endif // ezsignbulksendtransmission_response_compound_TEST
