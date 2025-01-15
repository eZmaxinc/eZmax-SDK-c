#ifndef contactinformations_response_TEST
#define contactinformations_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contactinformations_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contactinformations_response.h"
contactinformations_response_t* instantiate_contactinformations_response(int include_optional);

#include "test_address_response.c"
#include "test_phone_response_compound.c"
#include "test_email_response.c"
#include "test_website_response.c"


contactinformations_response_t* instantiate_contactinformations_response(int include_optional) {
  contactinformations_response_t* contactinformations_response = NULL;
  if (include_optional) {
    contactinformations_response = contactinformations_response_create(
      55,
      142,
      1,
      22,
      145,
      ezmax_api_definition__full_contactinformations_response__"BankAccount",
      "https://www.example.com",
       // false, not to have infinite recursion
      instantiate_address_response(0),
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0),
       // false, not to have infinite recursion
      instantiate_email_response(0),
       // false, not to have infinite recursion
      instantiate_website_response(0)
    );
  } else {
    contactinformations_response = contactinformations_response_create(
      55,
      142,
      1,
      22,
      145,
      ezmax_api_definition__full_contactinformations_response__"BankAccount",
      "https://www.example.com",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return contactinformations_response;
}


#ifdef contactinformations_response_MAIN

void test_contactinformations_response(int include_optional) {
    contactinformations_response_t* contactinformations_response_1 = instantiate_contactinformations_response(include_optional);

	cJSON* jsoncontactinformations_response_1 = contactinformations_response_convertToJSON(contactinformations_response_1);
	printf("contactinformations_response :\n%s\n", cJSON_Print(jsoncontactinformations_response_1));
	contactinformations_response_t* contactinformations_response_2 = contactinformations_response_parseFromJSON(jsoncontactinformations_response_1);
	cJSON* jsoncontactinformations_response_2 = contactinformations_response_convertToJSON(contactinformations_response_2);
	printf("repeating contactinformations_response:\n%s\n", cJSON_Print(jsoncontactinformations_response_2));
}

int main() {
  test_contactinformations_response(1);
  test_contactinformations_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // contactinformations_response_MAIN
#endif // contactinformations_response_TEST
