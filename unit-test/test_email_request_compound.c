#ifndef email_request_compound_TEST
#define email_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_request_compound.h"
email_request_compound_t* instantiate_email_request_compound(int include_optional);



email_request_compound_t* instantiate_email_request_compound(int include_optional) {
  email_request_compound_t* email_request_compound = NULL;
  if (include_optional) {
    email_request_compound = email_request_compound_create(
      1,
      "example@domain.com"
    );
  } else {
    email_request_compound = email_request_compound_create(
      1,
      "example@domain.com"
    );
  }

  return email_request_compound;
}


#ifdef email_request_compound_MAIN

void test_email_request_compound(int include_optional) {
    email_request_compound_t* email_request_compound_1 = instantiate_email_request_compound(include_optional);

	cJSON* jsonemail_request_compound_1 = email_request_compound_convertToJSON(email_request_compound_1);
	printf("email_request_compound :\n%s\n", cJSON_Print(jsonemail_request_compound_1));
	email_request_compound_t* email_request_compound_2 = email_request_compound_parseFromJSON(jsonemail_request_compound_1);
	cJSON* jsonemail_request_compound_2 = email_request_compound_convertToJSON(email_request_compound_2);
	printf("repeating email_request_compound:\n%s\n", cJSON_Print(jsonemail_request_compound_2));
}

int main() {
  test_email_request_compound(1);
  test_email_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_request_compound_MAIN
#endif // email_request_compound_TEST
