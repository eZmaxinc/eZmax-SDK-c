#ifndef emailstatic_response_compound_TEST
#define emailstatic_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emailstatic_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emailstatic_response_compound.h"
emailstatic_response_compound_t* instantiate_emailstatic_response_compound(int include_optional);



emailstatic_response_compound_t* instantiate_emailstatic_response_compound(int include_optional) {
  emailstatic_response_compound_t* emailstatic_response_compound = NULL;
  if (include_optional) {
    emailstatic_response_compound = emailstatic_response_compound_create(
      99,
      "email@example.com"
    );
  } else {
    emailstatic_response_compound = emailstatic_response_compound_create(
      99,
      "email@example.com"
    );
  }

  return emailstatic_response_compound;
}


#ifdef emailstatic_response_compound_MAIN

void test_emailstatic_response_compound(int include_optional) {
    emailstatic_response_compound_t* emailstatic_response_compound_1 = instantiate_emailstatic_response_compound(include_optional);

	cJSON* jsonemailstatic_response_compound_1 = emailstatic_response_compound_convertToJSON(emailstatic_response_compound_1);
	printf("emailstatic_response_compound :\n%s\n", cJSON_Print(jsonemailstatic_response_compound_1));
	emailstatic_response_compound_t* emailstatic_response_compound_2 = emailstatic_response_compound_parseFromJSON(jsonemailstatic_response_compound_1);
	cJSON* jsonemailstatic_response_compound_2 = emailstatic_response_compound_convertToJSON(emailstatic_response_compound_2);
	printf("repeating emailstatic_response_compound:\n%s\n", cJSON_Print(jsonemailstatic_response_compound_2));
}

int main() {
  test_emailstatic_response_compound(1);
  test_emailstatic_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // emailstatic_response_compound_MAIN
#endif // emailstatic_response_compound_TEST
