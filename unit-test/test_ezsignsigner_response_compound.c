#ifndef ezsignsigner_response_compound_TEST
#define ezsignsigner_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_response_compound.h"
ezsignsigner_response_compound_t* instantiate_ezsignsigner_response_compound(int include_optional);

#include "test_ezsignsigner_response_compound_contact.c"


ezsignsigner_response_compound_t* instantiate_ezsignsigner_response_compound(int include_optional) {
  ezsignsigner_response_compound_t* ezsignsigner_response_compound = NULL;
  if (include_optional) {
    ezsignsigner_response_compound = ezsignsigner_response_compound_create(
       // false, not to have infinite recursion
      instantiate_ezsignsigner_response_compound_contact(0),
      89,
      1,
      7,
      2,
      "Email and phone or SMS"
    );
  } else {
    ezsignsigner_response_compound = ezsignsigner_response_compound_create(
      NULL,
      89,
      1,
      7,
      2,
      "Email and phone or SMS"
    );
  }

  return ezsignsigner_response_compound;
}


#ifdef ezsignsigner_response_compound_MAIN

void test_ezsignsigner_response_compound(int include_optional) {
    ezsignsigner_response_compound_t* ezsignsigner_response_compound_1 = instantiate_ezsignsigner_response_compound(include_optional);

	cJSON* jsonezsignsigner_response_compound_1 = ezsignsigner_response_compound_convertToJSON(ezsignsigner_response_compound_1);
	printf("ezsignsigner_response_compound :\n%s\n", cJSON_Print(jsonezsignsigner_response_compound_1));
	ezsignsigner_response_compound_t* ezsignsigner_response_compound_2 = ezsignsigner_response_compound_parseFromJSON(jsonezsignsigner_response_compound_1);
	cJSON* jsonezsignsigner_response_compound_2 = ezsignsigner_response_compound_convertToJSON(ezsignsigner_response_compound_2);
	printf("repeating ezsignsigner_response_compound:\n%s\n", cJSON_Print(jsonezsignsigner_response_compound_2));
}

int main() {
  test_ezsignsigner_response_compound(1);
  test_ezsignsigner_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_response_compound_MAIN
#endif // ezsignsigner_response_compound_TEST
