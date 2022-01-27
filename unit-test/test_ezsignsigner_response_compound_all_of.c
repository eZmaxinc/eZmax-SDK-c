#ifndef ezsignsigner_response_compound_all_of_TEST
#define ezsignsigner_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_response_compound_all_of.h"
ezsignsigner_response_compound_all_of_t* instantiate_ezsignsigner_response_compound_all_of(int include_optional);

#include "test_ezsignsigner_response_compound_contact.c"


ezsignsigner_response_compound_all_of_t* instantiate_ezsignsigner_response_compound_all_of(int include_optional) {
  ezsignsigner_response_compound_all_of_t* ezsignsigner_response_compound_all_of = NULL;
  if (include_optional) {
    ezsignsigner_response_compound_all_of = ezsignsigner_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignsigner_response_compound_contact(0)
    );
  } else {
    ezsignsigner_response_compound_all_of = ezsignsigner_response_compound_all_of_create(
      NULL
    );
  }

  return ezsignsigner_response_compound_all_of;
}


#ifdef ezsignsigner_response_compound_all_of_MAIN

void test_ezsignsigner_response_compound_all_of(int include_optional) {
    ezsignsigner_response_compound_all_of_t* ezsignsigner_response_compound_all_of_1 = instantiate_ezsignsigner_response_compound_all_of(include_optional);

	cJSON* jsonezsignsigner_response_compound_all_of_1 = ezsignsigner_response_compound_all_of_convertToJSON(ezsignsigner_response_compound_all_of_1);
	printf("ezsignsigner_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsignsigner_response_compound_all_of_1));
	ezsignsigner_response_compound_all_of_t* ezsignsigner_response_compound_all_of_2 = ezsignsigner_response_compound_all_of_parseFromJSON(jsonezsignsigner_response_compound_all_of_1);
	cJSON* jsonezsignsigner_response_compound_all_of_2 = ezsignsigner_response_compound_all_of_convertToJSON(ezsignsigner_response_compound_all_of_2);
	printf("repeating ezsignsigner_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsignsigner_response_compound_all_of_2));
}

int main() {
  test_ezsignsigner_response_compound_all_of(1);
  test_ezsignsigner_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_response_compound_all_of_MAIN
#endif // ezsignsigner_response_compound_all_of_TEST
