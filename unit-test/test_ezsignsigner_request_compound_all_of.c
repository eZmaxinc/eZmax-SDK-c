#ifndef ezsignsigner_request_compound_all_of_TEST
#define ezsignsigner_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_request_compound_all_of.h"
ezsignsigner_request_compound_all_of_t* instantiate_ezsignsigner_request_compound_all_of(int include_optional);

#include "test_ezsignsigner_request_compound_contact.c"


ezsignsigner_request_compound_all_of_t* instantiate_ezsignsigner_request_compound_all_of(int include_optional) {
  ezsignsigner_request_compound_all_of_t* ezsignsigner_request_compound_all_of = NULL;
  if (include_optional) {
    ezsignsigner_request_compound_all_of = ezsignsigner_request_compound_all_of_create(
      {"sContactFirstname":"John","sContactLastname":"Doe","fkiLanguageID":1,"sEmailAddress":"johh.doe@domain.com","sPhoneNumber":"5149901516","sPhoneNumberCell":"5149901516"}
    );
  } else {
    ezsignsigner_request_compound_all_of = ezsignsigner_request_compound_all_of_create(
      {"sContactFirstname":"John","sContactLastname":"Doe","fkiLanguageID":1,"sEmailAddress":"johh.doe@domain.com","sPhoneNumber":"5149901516","sPhoneNumberCell":"5149901516"}
    );
  }

  return ezsignsigner_request_compound_all_of;
}


#ifdef ezsignsigner_request_compound_all_of_MAIN

void test_ezsignsigner_request_compound_all_of(int include_optional) {
    ezsignsigner_request_compound_all_of_t* ezsignsigner_request_compound_all_of_1 = instantiate_ezsignsigner_request_compound_all_of(include_optional);

	cJSON* jsonezsignsigner_request_compound_all_of_1 = ezsignsigner_request_compound_all_of_convertToJSON(ezsignsigner_request_compound_all_of_1);
	printf("ezsignsigner_request_compound_all_of :\n%s\n", cJSON_Print(jsonezsignsigner_request_compound_all_of_1));
	ezsignsigner_request_compound_all_of_t* ezsignsigner_request_compound_all_of_2 = ezsignsigner_request_compound_all_of_parseFromJSON(jsonezsignsigner_request_compound_all_of_1);
	cJSON* jsonezsignsigner_request_compound_all_of_2 = ezsignsigner_request_compound_all_of_convertToJSON(ezsignsigner_request_compound_all_of_2);
	printf("repeating ezsignsigner_request_compound_all_of:\n%s\n", cJSON_Print(jsonezsignsigner_request_compound_all_of_2));
}

int main() {
  test_ezsignsigner_request_compound_all_of(1);
  test_ezsignsigner_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_request_compound_all_of_MAIN
#endif // ezsignsigner_request_compound_all_of_TEST
