#ifndef email_response_TEST
#define email_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_response.h"
email_response_t* instantiate_email_response(int include_optional);



email_response_t* instantiate_email_response(int include_optional) {
  email_response_t* email_response = NULL;
  if (include_optional) {
    email_response = email_response_create(
      22,
      1,
      "email@example.com"
    );
  } else {
    email_response = email_response_create(
      22,
      1,
      "email@example.com"
    );
  }

  return email_response;
}


#ifdef email_response_MAIN

void test_email_response(int include_optional) {
    email_response_t* email_response_1 = instantiate_email_response(include_optional);

	cJSON* jsonemail_response_1 = email_response_convertToJSON(email_response_1);
	printf("email_response :\n%s\n", cJSON_Print(jsonemail_response_1));
	email_response_t* email_response_2 = email_response_parseFromJSON(jsonemail_response_1);
	cJSON* jsonemail_response_2 = email_response_convertToJSON(email_response_2);
	printf("repeating email_response:\n%s\n", cJSON_Print(jsonemail_response_2));
}

int main() {
  test_email_response(1);
  test_email_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_response_MAIN
#endif // email_response_TEST
