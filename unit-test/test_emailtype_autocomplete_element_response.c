#ifndef emailtype_autocomplete_element_response_TEST
#define emailtype_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emailtype_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emailtype_autocomplete_element_response.h"
emailtype_autocomplete_element_response_t* instantiate_emailtype_autocomplete_element_response(int include_optional);



emailtype_autocomplete_element_response_t* instantiate_emailtype_autocomplete_element_response(int include_optional) {
  emailtype_autocomplete_element_response_t* emailtype_autocomplete_element_response = NULL;
  if (include_optional) {
    emailtype_autocomplete_element_response = emailtype_autocomplete_element_response_create(
      1,
      "Office",
      true
    );
  } else {
    emailtype_autocomplete_element_response = emailtype_autocomplete_element_response_create(
      1,
      "Office",
      true
    );
  }

  return emailtype_autocomplete_element_response;
}


#ifdef emailtype_autocomplete_element_response_MAIN

void test_emailtype_autocomplete_element_response(int include_optional) {
    emailtype_autocomplete_element_response_t* emailtype_autocomplete_element_response_1 = instantiate_emailtype_autocomplete_element_response(include_optional);

	cJSON* jsonemailtype_autocomplete_element_response_1 = emailtype_autocomplete_element_response_convertToJSON(emailtype_autocomplete_element_response_1);
	printf("emailtype_autocomplete_element_response :\n%s\n", cJSON_Print(jsonemailtype_autocomplete_element_response_1));
	emailtype_autocomplete_element_response_t* emailtype_autocomplete_element_response_2 = emailtype_autocomplete_element_response_parseFromJSON(jsonemailtype_autocomplete_element_response_1);
	cJSON* jsonemailtype_autocomplete_element_response_2 = emailtype_autocomplete_element_response_convertToJSON(emailtype_autocomplete_element_response_2);
	printf("repeating emailtype_autocomplete_element_response:\n%s\n", cJSON_Print(jsonemailtype_autocomplete_element_response_2));
}

int main() {
  test_emailtype_autocomplete_element_response(1);
  test_emailtype_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // emailtype_autocomplete_element_response_MAIN
#endif // emailtype_autocomplete_element_response_TEST
