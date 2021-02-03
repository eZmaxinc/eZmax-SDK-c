#ifndef ezsignsigner_request_compound_TEST
#define ezsignsigner_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_request_compound.h"
ezsignsigner_request_compound_t* instantiate_ezsignsigner_request_compound(int include_optional);

#include "test_ezsignsigner_request_compound_contact.c"


ezsignsigner_request_compound_t* instantiate_ezsignsigner_request_compound(int include_optional) {
  ezsignsigner_request_compound_t* ezsignsigner_request_compound = NULL;
  if (include_optional) {
    ezsignsigner_request_compound = ezsignsigner_request_compound_create(
      {"sContactFirstname":"John","sContactLastname":"Doe","fkiLanguageID":1,"sEmailAddress":"johh.doe@domain.com","sPhoneNumber":"5149901516","sPhoneNumberCell":"5149901516"},
      1,
      7,
      ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_Password,
      "0"
    );
  } else {
    ezsignsigner_request_compound = ezsignsigner_request_compound_create(
      {"sContactFirstname":"John","sContactLastname":"Doe","fkiLanguageID":1,"sEmailAddress":"johh.doe@domain.com","sPhoneNumber":"5149901516","sPhoneNumberCell":"5149901516"},
      1,
      7,
      ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_Password,
      "0"
    );
  }

  return ezsignsigner_request_compound;
}


#ifdef ezsignsigner_request_compound_MAIN

void test_ezsignsigner_request_compound(int include_optional) {
    ezsignsigner_request_compound_t* ezsignsigner_request_compound_1 = instantiate_ezsignsigner_request_compound(include_optional);

	cJSON* jsonezsignsigner_request_compound_1 = ezsignsigner_request_compound_convertToJSON(ezsignsigner_request_compound_1);
	printf("ezsignsigner_request_compound :\n%s\n", cJSON_Print(jsonezsignsigner_request_compound_1));
	ezsignsigner_request_compound_t* ezsignsigner_request_compound_2 = ezsignsigner_request_compound_parseFromJSON(jsonezsignsigner_request_compound_1);
	cJSON* jsonezsignsigner_request_compound_2 = ezsignsigner_request_compound_convertToJSON(ezsignsigner_request_compound_2);
	printf("repeating ezsignsigner_request_compound:\n%s\n", cJSON_Print(jsonezsignsigner_request_compound_2));
}

int main() {
  test_ezsignsigner_request_compound(1);
  test_ezsignsigner_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_request_compound_MAIN
#endif // ezsignsigner_request_compound_TEST
