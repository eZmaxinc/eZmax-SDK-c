#ifndef ezsignsigner_response_compound_contact_TEST
#define ezsignsigner_response_compound_contact_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_response_compound_contact_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_response_compound_contact.h"
ezsignsigner_response_compound_contact_t* instantiate_ezsignsigner_response_compound_contact(int include_optional);



ezsignsigner_response_compound_contact_t* instantiate_ezsignsigner_response_compound_contact(int include_optional) {
  ezsignsigner_response_compound_contact_t* ezsignsigner_response_compound_contact = NULL;
  if (include_optional) {
    ezsignsigner_response_compound_contact = ezsignsigner_response_compound_contact_create(
      "John",
      "Doe",
      2,
      "example@domain.com",
      "+5149901516",
      "+5149901516"
    );
  } else {
    ezsignsigner_response_compound_contact = ezsignsigner_response_compound_contact_create(
      "John",
      "Doe",
      2,
      "example@domain.com",
      "+5149901516",
      "+5149901516"
    );
  }

  return ezsignsigner_response_compound_contact;
}


#ifdef ezsignsigner_response_compound_contact_MAIN

void test_ezsignsigner_response_compound_contact(int include_optional) {
    ezsignsigner_response_compound_contact_t* ezsignsigner_response_compound_contact_1 = instantiate_ezsignsigner_response_compound_contact(include_optional);

	cJSON* jsonezsignsigner_response_compound_contact_1 = ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound_contact_1);
	printf("ezsignsigner_response_compound_contact :\n%s\n", cJSON_Print(jsonezsignsigner_response_compound_contact_1));
	ezsignsigner_response_compound_contact_t* ezsignsigner_response_compound_contact_2 = ezsignsigner_response_compound_contact_parseFromJSON(jsonezsignsigner_response_compound_contact_1);
	cJSON* jsonezsignsigner_response_compound_contact_2 = ezsignsigner_response_compound_contact_convertToJSON(ezsignsigner_response_compound_contact_2);
	printf("repeating ezsignsigner_response_compound_contact:\n%s\n", cJSON_Print(jsonezsignsigner_response_compound_contact_2));
}

int main() {
  test_ezsignsigner_response_compound_contact(1);
  test_ezsignsigner_response_compound_contact(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_response_compound_contact_MAIN
#endif // ezsignsigner_response_compound_contact_TEST
