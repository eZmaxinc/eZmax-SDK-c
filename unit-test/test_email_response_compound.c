#ifndef email_response_compound_TEST
#define email_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_response_compound.h"
email_response_compound_t* instantiate_email_response_compound(int include_optional);



email_response_compound_t* instantiate_email_response_compound(int include_optional) {
  email_response_compound_t* email_response_compound = NULL;
  if (include_optional) {
    email_response_compound = email_response_compound_create(
      22,
      1,
      "email@example.com"
    );
  } else {
    email_response_compound = email_response_compound_create(
      22,
      1,
      "email@example.com"
    );
  }

  return email_response_compound;
}


#ifdef email_response_compound_MAIN

void test_email_response_compound(int include_optional) {
    email_response_compound_t* email_response_compound_1 = instantiate_email_response_compound(include_optional);

	cJSON* jsonemail_response_compound_1 = email_response_compound_convertToJSON(email_response_compound_1);
	printf("email_response_compound :\n%s\n", cJSON_Print(jsonemail_response_compound_1));
	email_response_compound_t* email_response_compound_2 = email_response_compound_parseFromJSON(jsonemail_response_compound_1);
	cJSON* jsonemail_response_compound_2 = email_response_compound_convertToJSON(email_response_compound_2);
	printf("repeating email_response_compound:\n%s\n", cJSON_Print(jsonemail_response_compound_2));
}

int main() {
  test_email_response_compound(1);
  test_email_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_response_compound_MAIN
#endif // email_response_compound_TEST
