#ifndef phonetype_autocomplete_element_response_TEST
#define phonetype_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phonetype_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phonetype_autocomplete_element_response.h"
phonetype_autocomplete_element_response_t* instantiate_phonetype_autocomplete_element_response(int include_optional);



phonetype_autocomplete_element_response_t* instantiate_phonetype_autocomplete_element_response(int include_optional) {
  phonetype_autocomplete_element_response_t* phonetype_autocomplete_element_response = NULL;
  if (include_optional) {
    phonetype_autocomplete_element_response = phonetype_autocomplete_element_response_create(
      1,
      "Office",
      true
    );
  } else {
    phonetype_autocomplete_element_response = phonetype_autocomplete_element_response_create(
      1,
      "Office",
      true
    );
  }

  return phonetype_autocomplete_element_response;
}


#ifdef phonetype_autocomplete_element_response_MAIN

void test_phonetype_autocomplete_element_response(int include_optional) {
    phonetype_autocomplete_element_response_t* phonetype_autocomplete_element_response_1 = instantiate_phonetype_autocomplete_element_response(include_optional);

	cJSON* jsonphonetype_autocomplete_element_response_1 = phonetype_autocomplete_element_response_convertToJSON(phonetype_autocomplete_element_response_1);
	printf("phonetype_autocomplete_element_response :\n%s\n", cJSON_Print(jsonphonetype_autocomplete_element_response_1));
	phonetype_autocomplete_element_response_t* phonetype_autocomplete_element_response_2 = phonetype_autocomplete_element_response_parseFromJSON(jsonphonetype_autocomplete_element_response_1);
	cJSON* jsonphonetype_autocomplete_element_response_2 = phonetype_autocomplete_element_response_convertToJSON(phonetype_autocomplete_element_response_2);
	printf("repeating phonetype_autocomplete_element_response:\n%s\n", cJSON_Print(jsonphonetype_autocomplete_element_response_2));
}

int main() {
  test_phonetype_autocomplete_element_response(1);
  test_phonetype_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // phonetype_autocomplete_element_response_MAIN
#endif // phonetype_autocomplete_element_response_TEST
