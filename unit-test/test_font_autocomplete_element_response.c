#ifndef font_autocomplete_element_response_TEST
#define font_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define font_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/font_autocomplete_element_response.h"
font_autocomplete_element_response_t* instantiate_font_autocomplete_element_response(int include_optional);



font_autocomplete_element_response_t* instantiate_font_autocomplete_element_response(int include_optional) {
  font_autocomplete_element_response_t* font_autocomplete_element_response = NULL;
  if (include_optional) {
    font_autocomplete_element_response = font_autocomplete_element_response_create(
      "Arial",
      1,
      true
    );
  } else {
    font_autocomplete_element_response = font_autocomplete_element_response_create(
      "Arial",
      1,
      true
    );
  }

  return font_autocomplete_element_response;
}


#ifdef font_autocomplete_element_response_MAIN

void test_font_autocomplete_element_response(int include_optional) {
    font_autocomplete_element_response_t* font_autocomplete_element_response_1 = instantiate_font_autocomplete_element_response(include_optional);

	cJSON* jsonfont_autocomplete_element_response_1 = font_autocomplete_element_response_convertToJSON(font_autocomplete_element_response_1);
	printf("font_autocomplete_element_response :\n%s\n", cJSON_Print(jsonfont_autocomplete_element_response_1));
	font_autocomplete_element_response_t* font_autocomplete_element_response_2 = font_autocomplete_element_response_parseFromJSON(jsonfont_autocomplete_element_response_1);
	cJSON* jsonfont_autocomplete_element_response_2 = font_autocomplete_element_response_convertToJSON(font_autocomplete_element_response_2);
	printf("repeating font_autocomplete_element_response:\n%s\n", cJSON_Print(jsonfont_autocomplete_element_response_2));
}

int main() {
  test_font_autocomplete_element_response(1);
  test_font_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // font_autocomplete_element_response_MAIN
#endif // font_autocomplete_element_response_TEST
