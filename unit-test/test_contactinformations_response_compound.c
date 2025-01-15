#ifndef contactinformations_response_compound_TEST
#define contactinformations_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contactinformations_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contactinformations_response_compound.h"
contactinformations_response_compound_t* instantiate_contactinformations_response_compound(int include_optional);

#include "test_address_response.c"
#include "test_phone_response_compound.c"
#include "test_email_response.c"
#include "test_website_response.c"


contactinformations_response_compound_t* instantiate_contactinformations_response_compound(int include_optional) {
  contactinformations_response_compound_t* contactinformations_response_compound = NULL;
  if (include_optional) {
    contactinformations_response_compound = contactinformations_response_compound_create(
      55,
      142,
      1,
      22,
      145,
      ezmax_api_definition__full_contactinformations_response_compound__"BankAccount",
      "https://www.example.com",
       // false, not to have infinite recursion
      instantiate_address_response(0),
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0),
       // false, not to have infinite recursion
      instantiate_email_response(0),
       // false, not to have infinite recursion
      instantiate_website_response(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    contactinformations_response_compound = contactinformations_response_compound_create(
      55,
      142,
      1,
      22,
      145,
      ezmax_api_definition__full_contactinformations_response_compound__"BankAccount",
      "https://www.example.com",
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return contactinformations_response_compound;
}


#ifdef contactinformations_response_compound_MAIN

void test_contactinformations_response_compound(int include_optional) {
    contactinformations_response_compound_t* contactinformations_response_compound_1 = instantiate_contactinformations_response_compound(include_optional);

	cJSON* jsoncontactinformations_response_compound_1 = contactinformations_response_compound_convertToJSON(contactinformations_response_compound_1);
	printf("contactinformations_response_compound :\n%s\n", cJSON_Print(jsoncontactinformations_response_compound_1));
	contactinformations_response_compound_t* contactinformations_response_compound_2 = contactinformations_response_compound_parseFromJSON(jsoncontactinformations_response_compound_1);
	cJSON* jsoncontactinformations_response_compound_2 = contactinformations_response_compound_convertToJSON(contactinformations_response_compound_2);
	printf("repeating contactinformations_response_compound:\n%s\n", cJSON_Print(jsoncontactinformations_response_compound_2));
}

int main() {
  test_contactinformations_response_compound(1);
  test_contactinformations_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // contactinformations_response_compound_MAIN
#endif // contactinformations_response_compound_TEST
