#ifndef email_request_TEST
#define email_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define email_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/email_request.h"
email_request_t* instantiate_email_request(int include_optional);



email_request_t* instantiate_email_request(int include_optional) {
  email_request_t* email_request = NULL;
  if (include_optional) {
    email_request = email_request_create(
      1,
      "email@example.com"
    );
  } else {
    email_request = email_request_create(
      1,
      "email@example.com"
    );
  }

  return email_request;
}


#ifdef email_request_MAIN

void test_email_request(int include_optional) {
    email_request_t* email_request_1 = instantiate_email_request(include_optional);

	cJSON* jsonemail_request_1 = email_request_convertToJSON(email_request_1);
	printf("email_request :\n%s\n", cJSON_Print(jsonemail_request_1));
	email_request_t* email_request_2 = email_request_parseFromJSON(jsonemail_request_1);
	cJSON* jsonemail_request_2 = email_request_convertToJSON(email_request_2);
	printf("repeating email_request:\n%s\n", cJSON_Print(jsonemail_request_2));
}

int main() {
  test_email_request(1);
  test_email_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // email_request_MAIN
#endif // email_request_TEST
