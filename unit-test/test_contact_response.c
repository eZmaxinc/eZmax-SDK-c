#ifndef contact_response_TEST
#define contact_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_response.h"
contact_response_t* instantiate_contact_response(int include_optional);

#include "test_contactinformations_response_compound.c"


contact_response_t* instantiate_contact_response(int include_optional) {
  contact_response_t* contact_response = NULL;
  if (include_optional) {
    contact_response = contact_response_create(
      21,
      2,
      2,
      55,
      "1980-01-01",
      ezmax_api_definition__full_contact_response__"Agent",
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "Programmer",
      "This is a note",
      true,
       // false, not to have infinite recursion
      instantiate_contactinformations_response_compound(0)
    );
  } else {
    contact_response = contact_response_create(
      21,
      2,
      2,
      55,
      "1980-01-01",
      ezmax_api_definition__full_contact_response__"Agent",
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "Programmer",
      "This is a note",
      true,
      NULL
    );
  }

  return contact_response;
}


#ifdef contact_response_MAIN

void test_contact_response(int include_optional) {
    contact_response_t* contact_response_1 = instantiate_contact_response(include_optional);

	cJSON* jsoncontact_response_1 = contact_response_convertToJSON(contact_response_1);
	printf("contact_response :\n%s\n", cJSON_Print(jsoncontact_response_1));
	contact_response_t* contact_response_2 = contact_response_parseFromJSON(jsoncontact_response_1);
	cJSON* jsoncontact_response_2 = contact_response_convertToJSON(contact_response_2);
	printf("repeating contact_response:\n%s\n", cJSON_Print(jsoncontact_response_2));
}

int main() {
  test_contact_response(1);
  test_contact_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_response_MAIN
#endif // contact_response_TEST
