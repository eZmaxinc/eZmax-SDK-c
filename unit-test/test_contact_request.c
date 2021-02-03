#ifndef contact_request_TEST
#define contact_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_request.h"
contact_request_t* instantiate_contact_request(int include_optional);



contact_request_t* instantiate_contact_request(int include_optional) {
  contact_request_t* contact_request = NULL;
  if (include_optional) {
    contact_request = contact_request_create(
      2,
      2,
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "1980-01-01"
    );
  } else {
    contact_request = contact_request_create(
      2,
      2,
      "John",
      "Doe",
      "eZmax Solutions Inc.",
      "1980-01-01"
    );
  }

  return contact_request;
}


#ifdef contact_request_MAIN

void test_contact_request(int include_optional) {
    contact_request_t* contact_request_1 = instantiate_contact_request(include_optional);

	cJSON* jsoncontact_request_1 = contact_request_convertToJSON(contact_request_1);
	printf("contact_request :\n%s\n", cJSON_Print(jsoncontact_request_1));
	contact_request_t* contact_request_2 = contact_request_parseFromJSON(jsoncontact_request_1);
	cJSON* jsoncontact_request_2 = contact_request_convertToJSON(contact_request_2);
	printf("repeating contact_request:\n%s\n", cJSON_Print(jsoncontact_request_2));
}

int main() {
  test_contact_request(1);
  test_contact_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_request_MAIN
#endif // contact_request_TEST
