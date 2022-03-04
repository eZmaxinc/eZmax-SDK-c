#ifndef ezsignbulksendtransmission_response_TEST
#define ezsignbulksendtransmission_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendtransmission_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendtransmission_response.h"
ezsignbulksendtransmission_response_t* instantiate_ezsignbulksendtransmission_response(int include_optional);

#include "test_common_audit.c"


ezsignbulksendtransmission_response_t* instantiate_ezsignbulksendtransmission_response(int include_optional) {
  ezsignbulksendtransmission_response_t* ezsignbulksendtransmission_response = NULL;
  if (include_optional) {
    ezsignbulksendtransmission_response = ezsignbulksendtransmission_response_create(
      21,
      8,
      "Test eZsign Bulk Send Transmission #1",
      1,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsignbulksendtransmission_response = ezsignbulksendtransmission_response_create(
      21,
      8,
      "Test eZsign Bulk Send Transmission #1",
      1,
      NULL
    );
  }

  return ezsignbulksendtransmission_response;
}


#ifdef ezsignbulksendtransmission_response_MAIN

void test_ezsignbulksendtransmission_response(int include_optional) {
    ezsignbulksendtransmission_response_t* ezsignbulksendtransmission_response_1 = instantiate_ezsignbulksendtransmission_response(include_optional);

	cJSON* jsonezsignbulksendtransmission_response_1 = ezsignbulksendtransmission_response_convertToJSON(ezsignbulksendtransmission_response_1);
	printf("ezsignbulksendtransmission_response :\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_response_1));
	ezsignbulksendtransmission_response_t* ezsignbulksendtransmission_response_2 = ezsignbulksendtransmission_response_parseFromJSON(jsonezsignbulksendtransmission_response_1);
	cJSON* jsonezsignbulksendtransmission_response_2 = ezsignbulksendtransmission_response_convertToJSON(ezsignbulksendtransmission_response_2);
	printf("repeating ezsignbulksendtransmission_response:\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_response_2));
}

int main() {
  test_ezsignbulksendtransmission_response(1);
  test_ezsignbulksendtransmission_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendtransmission_response_MAIN
#endif // ezsignbulksendtransmission_response_TEST
