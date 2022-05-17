#ifndef ezsignbulksendtransmission_response_compound_all_of_TEST
#define ezsignbulksendtransmission_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksendtransmission_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksendtransmission_response_compound_all_of.h"
ezsignbulksendtransmission_response_compound_all_of_t* instantiate_ezsignbulksendtransmission_response_compound_all_of(int include_optional);



ezsignbulksendtransmission_response_compound_all_of_t* instantiate_ezsignbulksendtransmission_response_compound_all_of(int include_optional) {
  ezsignbulksendtransmission_response_compound_all_of_t* ezsignbulksendtransmission_response_compound_all_of = NULL;
  if (include_optional) {
    ezsignbulksendtransmission_response_compound_all_of = ezsignbulksendtransmission_response_compound_all_of_create(
      list_createList()
    );
  } else {
    ezsignbulksendtransmission_response_compound_all_of = ezsignbulksendtransmission_response_compound_all_of_create(
      list_createList()
    );
  }

  return ezsignbulksendtransmission_response_compound_all_of;
}


#ifdef ezsignbulksendtransmission_response_compound_all_of_MAIN

void test_ezsignbulksendtransmission_response_compound_all_of(int include_optional) {
    ezsignbulksendtransmission_response_compound_all_of_t* ezsignbulksendtransmission_response_compound_all_of_1 = instantiate_ezsignbulksendtransmission_response_compound_all_of(include_optional);

	cJSON* jsonezsignbulksendtransmission_response_compound_all_of_1 = ezsignbulksendtransmission_response_compound_all_of_convertToJSON(ezsignbulksendtransmission_response_compound_all_of_1);
	printf("ezsignbulksendtransmission_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_response_compound_all_of_1));
	ezsignbulksendtransmission_response_compound_all_of_t* ezsignbulksendtransmission_response_compound_all_of_2 = ezsignbulksendtransmission_response_compound_all_of_parseFromJSON(jsonezsignbulksendtransmission_response_compound_all_of_1);
	cJSON* jsonezsignbulksendtransmission_response_compound_all_of_2 = ezsignbulksendtransmission_response_compound_all_of_convertToJSON(ezsignbulksendtransmission_response_compound_all_of_2);
	printf("repeating ezsignbulksendtransmission_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsignbulksendtransmission_response_compound_all_of_2));
}

int main() {
  test_ezsignbulksendtransmission_response_compound_all_of(1);
  test_ezsignbulksendtransmission_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksendtransmission_response_compound_all_of_MAIN
#endif // ezsignbulksendtransmission_response_compound_all_of_TEST
