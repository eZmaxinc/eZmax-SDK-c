#ifndef language_autocomplete_element_response_TEST
#define language_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define language_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/language_autocomplete_element_response.h"
language_autocomplete_element_response_t* instantiate_language_autocomplete_element_response(int include_optional);



language_autocomplete_element_response_t* instantiate_language_autocomplete_element_response(int include_optional) {
  language_autocomplete_element_response_t* language_autocomplete_element_response = NULL;
  if (include_optional) {
    language_autocomplete_element_response = language_autocomplete_element_response_create(
      2,
      "English",
      true
    );
  } else {
    language_autocomplete_element_response = language_autocomplete_element_response_create(
      2,
      "English",
      true
    );
  }

  return language_autocomplete_element_response;
}


#ifdef language_autocomplete_element_response_MAIN

void test_language_autocomplete_element_response(int include_optional) {
    language_autocomplete_element_response_t* language_autocomplete_element_response_1 = instantiate_language_autocomplete_element_response(include_optional);

	cJSON* jsonlanguage_autocomplete_element_response_1 = language_autocomplete_element_response_convertToJSON(language_autocomplete_element_response_1);
	printf("language_autocomplete_element_response :\n%s\n", cJSON_Print(jsonlanguage_autocomplete_element_response_1));
	language_autocomplete_element_response_t* language_autocomplete_element_response_2 = language_autocomplete_element_response_parseFromJSON(jsonlanguage_autocomplete_element_response_1);
	cJSON* jsonlanguage_autocomplete_element_response_2 = language_autocomplete_element_response_convertToJSON(language_autocomplete_element_response_2);
	printf("repeating language_autocomplete_element_response:\n%s\n", cJSON_Print(jsonlanguage_autocomplete_element_response_2));
}

int main() {
  test_language_autocomplete_element_response(1);
  test_language_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // language_autocomplete_element_response_MAIN
#endif // language_autocomplete_element_response_TEST
