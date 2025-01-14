#ifndef contact_request_v2_TEST
#define contact_request_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_request_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_request_v2.h"
contact_request_v2_t* instantiate_contact_request_v2(int include_optional);

#include "test_contactinformations_request_compound.c"


contact_request_v2_t* instantiate_contact_request_v2(int include_optional) {
  contact_request_v2_t* contact_request_v2 = NULL;
  if (include_optional) {
    contact_request_v2 = contact_request_v2_create(
      2,
      2,
      ezmax_api_definition__full_contact_request_v2__"Agent",
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "1980-01-01",
      "Programmer",
      "This is a note",
      true,
       // false, not to have infinite recursion
      instantiate_contactinformations_request_compound(0)
    );
  } else {
    contact_request_v2 = contact_request_v2_create(
      2,
      2,
      ezmax_api_definition__full_contact_request_v2__"Agent",
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "1980-01-01",
      "Programmer",
      "This is a note",
      true,
      NULL
    );
  }

  return contact_request_v2;
}


#ifdef contact_request_v2_MAIN

void test_contact_request_v2(int include_optional) {
    contact_request_v2_t* contact_request_v2_1 = instantiate_contact_request_v2(include_optional);

	cJSON* jsoncontact_request_v2_1 = contact_request_v2_convertToJSON(contact_request_v2_1);
	printf("contact_request_v2 :\n%s\n", cJSON_Print(jsoncontact_request_v2_1));
	contact_request_v2_t* contact_request_v2_2 = contact_request_v2_parseFromJSON(jsoncontact_request_v2_1);
	cJSON* jsoncontact_request_v2_2 = contact_request_v2_convertToJSON(contact_request_v2_2);
	printf("repeating contact_request_v2:\n%s\n", cJSON_Print(jsoncontact_request_v2_2));
}

int main() {
  test_contact_request_v2(1);
  test_contact_request_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_request_v2_MAIN
#endif // contact_request_v2_TEST
