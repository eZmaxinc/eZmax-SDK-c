#ifndef secretquestion_autocomplete_element_response_TEST
#define secretquestion_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define secretquestion_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/secretquestion_autocomplete_element_response.h"
secretquestion_autocomplete_element_response_t* instantiate_secretquestion_autocomplete_element_response(int include_optional);



secretquestion_autocomplete_element_response_t* instantiate_secretquestion_autocomplete_element_response(int include_optional) {
  secretquestion_autocomplete_element_response_t* secretquestion_autocomplete_element_response = NULL;
  if (include_optional) {
    secretquestion_autocomplete_element_response = secretquestion_autocomplete_element_response_create(
      "The name of the hospital in which you were born",
      7,
      true
    );
  } else {
    secretquestion_autocomplete_element_response = secretquestion_autocomplete_element_response_create(
      "The name of the hospital in which you were born",
      7,
      true
    );
  }

  return secretquestion_autocomplete_element_response;
}


#ifdef secretquestion_autocomplete_element_response_MAIN

void test_secretquestion_autocomplete_element_response(int include_optional) {
    secretquestion_autocomplete_element_response_t* secretquestion_autocomplete_element_response_1 = instantiate_secretquestion_autocomplete_element_response(include_optional);

	cJSON* jsonsecretquestion_autocomplete_element_response_1 = secretquestion_autocomplete_element_response_convertToJSON(secretquestion_autocomplete_element_response_1);
	printf("secretquestion_autocomplete_element_response :\n%s\n", cJSON_Print(jsonsecretquestion_autocomplete_element_response_1));
	secretquestion_autocomplete_element_response_t* secretquestion_autocomplete_element_response_2 = secretquestion_autocomplete_element_response_parseFromJSON(jsonsecretquestion_autocomplete_element_response_1);
	cJSON* jsonsecretquestion_autocomplete_element_response_2 = secretquestion_autocomplete_element_response_convertToJSON(secretquestion_autocomplete_element_response_2);
	printf("repeating secretquestion_autocomplete_element_response:\n%s\n", cJSON_Print(jsonsecretquestion_autocomplete_element_response_2));
}

int main() {
  test_secretquestion_autocomplete_element_response(1);
  test_secretquestion_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // secretquestion_autocomplete_element_response_MAIN
#endif // secretquestion_autocomplete_element_response_TEST
