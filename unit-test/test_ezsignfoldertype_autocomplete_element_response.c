#ifndef ezsignfoldertype_autocomplete_element_response_TEST
#define ezsignfoldertype_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_autocomplete_element_response.h"
ezsignfoldertype_autocomplete_element_response_t* instantiate_ezsignfoldertype_autocomplete_element_response(int include_optional);



ezsignfoldertype_autocomplete_element_response_t* instantiate_ezsignfoldertype_autocomplete_element_response(int include_optional) {
  ezsignfoldertype_autocomplete_element_response_t* ezsignfoldertype_autocomplete_element_response = NULL;
  if (include_optional) {
    ezsignfoldertype_autocomplete_element_response = ezsignfoldertype_autocomplete_element_response_create(
      ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__User,
      "Default",
      5,
      true
    );
  } else {
    ezsignfoldertype_autocomplete_element_response = ezsignfoldertype_autocomplete_element_response_create(
      ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__User,
      "Default",
      5,
      true
    );
  }

  return ezsignfoldertype_autocomplete_element_response;
}


#ifdef ezsignfoldertype_autocomplete_element_response_MAIN

void test_ezsignfoldertype_autocomplete_element_response(int include_optional) {
    ezsignfoldertype_autocomplete_element_response_t* ezsignfoldertype_autocomplete_element_response_1 = instantiate_ezsignfoldertype_autocomplete_element_response(include_optional);

	cJSON* jsonezsignfoldertype_autocomplete_element_response_1 = ezsignfoldertype_autocomplete_element_response_convertToJSON(ezsignfoldertype_autocomplete_element_response_1);
	printf("ezsignfoldertype_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezsignfoldertype_autocomplete_element_response_1));
	ezsignfoldertype_autocomplete_element_response_t* ezsignfoldertype_autocomplete_element_response_2 = ezsignfoldertype_autocomplete_element_response_parseFromJSON(jsonezsignfoldertype_autocomplete_element_response_1);
	cJSON* jsonezsignfoldertype_autocomplete_element_response_2 = ezsignfoldertype_autocomplete_element_response_convertToJSON(ezsignfoldertype_autocomplete_element_response_2);
	printf("repeating ezsignfoldertype_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezsignfoldertype_autocomplete_element_response_2));
}

int main() {
  test_ezsignfoldertype_autocomplete_element_response(1);
  test_ezsignfoldertype_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_autocomplete_element_response_MAIN
#endif // ezsignfoldertype_autocomplete_element_response_TEST
