#ifndef contacttitle_autocomplete_element_response_TEST
#define contacttitle_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacttitle_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacttitle_autocomplete_element_response.h"
contacttitle_autocomplete_element_response_t* instantiate_contacttitle_autocomplete_element_response(int include_optional);



contacttitle_autocomplete_element_response_t* instantiate_contacttitle_autocomplete_element_response(int include_optional) {
  contacttitle_autocomplete_element_response_t* contacttitle_autocomplete_element_response = NULL;
  if (include_optional) {
    contacttitle_autocomplete_element_response = contacttitle_autocomplete_element_response_create(
      2,
      "Sir"
    );
  } else {
    contacttitle_autocomplete_element_response = contacttitle_autocomplete_element_response_create(
      2,
      "Sir"
    );
  }

  return contacttitle_autocomplete_element_response;
}


#ifdef contacttitle_autocomplete_element_response_MAIN

void test_contacttitle_autocomplete_element_response(int include_optional) {
    contacttitle_autocomplete_element_response_t* contacttitle_autocomplete_element_response_1 = instantiate_contacttitle_autocomplete_element_response(include_optional);

	cJSON* jsoncontacttitle_autocomplete_element_response_1 = contacttitle_autocomplete_element_response_convertToJSON(contacttitle_autocomplete_element_response_1);
	printf("contacttitle_autocomplete_element_response :\n%s\n", cJSON_Print(jsoncontacttitle_autocomplete_element_response_1));
	contacttitle_autocomplete_element_response_t* contacttitle_autocomplete_element_response_2 = contacttitle_autocomplete_element_response_parseFromJSON(jsoncontacttitle_autocomplete_element_response_1);
	cJSON* jsoncontacttitle_autocomplete_element_response_2 = contacttitle_autocomplete_element_response_convertToJSON(contacttitle_autocomplete_element_response_2);
	printf("repeating contacttitle_autocomplete_element_response:\n%s\n", cJSON_Print(jsoncontacttitle_autocomplete_element_response_2));
}

int main() {
  test_contacttitle_autocomplete_element_response(1);
  test_contacttitle_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacttitle_autocomplete_element_response_MAIN
#endif // contacttitle_autocomplete_element_response_TEST
