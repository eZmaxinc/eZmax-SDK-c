#ifndef contact_request_compound_TEST
#define contact_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_request_compound.h"
contact_request_compound_t* instantiate_contact_request_compound(int include_optional);

#include "test_contactinformations_request_compound.c"


contact_request_compound_t* instantiate_contact_request_compound(int include_optional) {
  contact_request_compound_t* contact_request_compound = NULL;
  if (include_optional) {
    contact_request_compound = contact_request_compound_create(
       // false, not to have infinite recursion
      instantiate_contactinformations_request_compound(0),
      2,
      2,
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "1980-01-01"
    );
  } else {
    contact_request_compound = contact_request_compound_create(
      NULL,
      2,
      2,
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "1980-01-01"
    );
  }

  return contact_request_compound;
}


#ifdef contact_request_compound_MAIN

void test_contact_request_compound(int include_optional) {
    contact_request_compound_t* contact_request_compound_1 = instantiate_contact_request_compound(include_optional);

	cJSON* jsoncontact_request_compound_1 = contact_request_compound_convertToJSON(contact_request_compound_1);
	printf("contact_request_compound :\n%s\n", cJSON_Print(jsoncontact_request_compound_1));
	contact_request_compound_t* contact_request_compound_2 = contact_request_compound_parseFromJSON(jsoncontact_request_compound_1);
	cJSON* jsoncontact_request_compound_2 = contact_request_compound_convertToJSON(contact_request_compound_2);
	printf("repeating contact_request_compound:\n%s\n", cJSON_Print(jsoncontact_request_compound_2));
}

int main() {
  test_contact_request_compound(1);
  test_contact_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_request_compound_MAIN
#endif // contact_request_compound_TEST
