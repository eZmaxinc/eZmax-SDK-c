#ifndef ezsignsigner_request_compound_contact_TEST
#define ezsignsigner_request_compound_contact_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_request_compound_contact_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_request_compound_contact.h"
ezsignsigner_request_compound_contact_t* instantiate_ezsignsigner_request_compound_contact(int include_optional);



ezsignsigner_request_compound_contact_t* instantiate_ezsignsigner_request_compound_contact(int include_optional) {
  ezsignsigner_request_compound_contact_t* ezsignsigner_request_compound_contact = NULL;
  if (include_optional) {
    ezsignsigner_request_compound_contact = ezsignsigner_request_compound_contact_create(
      "0",
      "0",
      2,
      "0",
      "0",
      "0"
    );
  } else {
    ezsignsigner_request_compound_contact = ezsignsigner_request_compound_contact_create(
      "0",
      "0",
      2,
      "0",
      "0",
      "0"
    );
  }

  return ezsignsigner_request_compound_contact;
}


#ifdef ezsignsigner_request_compound_contact_MAIN

void test_ezsignsigner_request_compound_contact(int include_optional) {
    ezsignsigner_request_compound_contact_t* ezsignsigner_request_compound_contact_1 = instantiate_ezsignsigner_request_compound_contact(include_optional);

	cJSON* jsonezsignsigner_request_compound_contact_1 = ezsignsigner_request_compound_contact_convertToJSON(ezsignsigner_request_compound_contact_1);
	printf("ezsignsigner_request_compound_contact :\n%s\n", cJSON_Print(jsonezsignsigner_request_compound_contact_1));
	ezsignsigner_request_compound_contact_t* ezsignsigner_request_compound_contact_2 = ezsignsigner_request_compound_contact_parseFromJSON(jsonezsignsigner_request_compound_contact_1);
	cJSON* jsonezsignsigner_request_compound_contact_2 = ezsignsigner_request_compound_contact_convertToJSON(ezsignsigner_request_compound_contact_2);
	printf("repeating ezsignsigner_request_compound_contact:\n%s\n", cJSON_Print(jsonezsignsigner_request_compound_contact_2));
}

int main() {
  test_ezsignsigner_request_compound_contact(1);
  test_ezsignsigner_request_compound_contact(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_request_compound_contact_MAIN
#endif // ezsignsigner_request_compound_contact_TEST
