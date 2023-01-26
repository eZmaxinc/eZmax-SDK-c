#ifndef emailstatic_response_TEST
#define emailstatic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emailstatic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emailstatic_response.h"
emailstatic_response_t* instantiate_emailstatic_response(int include_optional);



emailstatic_response_t* instantiate_emailstatic_response(int include_optional) {
  emailstatic_response_t* emailstatic_response = NULL;
  if (include_optional) {
    emailstatic_response = emailstatic_response_create(
      99,
      "email@example.com"
    );
  } else {
    emailstatic_response = emailstatic_response_create(
      99,
      "email@example.com"
    );
  }

  return emailstatic_response;
}


#ifdef emailstatic_response_MAIN

void test_emailstatic_response(int include_optional) {
    emailstatic_response_t* emailstatic_response_1 = instantiate_emailstatic_response(include_optional);

	cJSON* jsonemailstatic_response_1 = emailstatic_response_convertToJSON(emailstatic_response_1);
	printf("emailstatic_response :\n%s\n", cJSON_Print(jsonemailstatic_response_1));
	emailstatic_response_t* emailstatic_response_2 = emailstatic_response_parseFromJSON(jsonemailstatic_response_1);
	cJSON* jsonemailstatic_response_2 = emailstatic_response_convertToJSON(emailstatic_response_2);
	printf("repeating emailstatic_response:\n%s\n", cJSON_Print(jsonemailstatic_response_2));
}

int main() {
  test_emailstatic_response(1);
  test_emailstatic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // emailstatic_response_MAIN
#endif // emailstatic_response_TEST
