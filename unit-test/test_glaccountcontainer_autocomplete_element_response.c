#ifndef glaccountcontainer_autocomplete_element_response_TEST
#define glaccountcontainer_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define glaccountcontainer_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/glaccountcontainer_autocomplete_element_response.h"
glaccountcontainer_autocomplete_element_response_t* instantiate_glaccountcontainer_autocomplete_element_response(int include_optional);



glaccountcontainer_autocomplete_element_response_t* instantiate_glaccountcontainer_autocomplete_element_response(int include_optional) {
  glaccountcontainer_autocomplete_element_response_t* glaccountcontainer_autocomplete_element_response = NULL;
  if (include_optional) {
    glaccountcontainer_autocomplete_element_response = glaccountcontainer_autocomplete_element_response_create(
      66,
      "5170.BARE1",
      "Quebec",
      true
    );
  } else {
    glaccountcontainer_autocomplete_element_response = glaccountcontainer_autocomplete_element_response_create(
      66,
      "5170.BARE1",
      "Quebec",
      true
    );
  }

  return glaccountcontainer_autocomplete_element_response;
}


#ifdef glaccountcontainer_autocomplete_element_response_MAIN

void test_glaccountcontainer_autocomplete_element_response(int include_optional) {
    glaccountcontainer_autocomplete_element_response_t* glaccountcontainer_autocomplete_element_response_1 = instantiate_glaccountcontainer_autocomplete_element_response(include_optional);

	cJSON* jsonglaccountcontainer_autocomplete_element_response_1 = glaccountcontainer_autocomplete_element_response_convertToJSON(glaccountcontainer_autocomplete_element_response_1);
	printf("glaccountcontainer_autocomplete_element_response :\n%s\n", cJSON_Print(jsonglaccountcontainer_autocomplete_element_response_1));
	glaccountcontainer_autocomplete_element_response_t* glaccountcontainer_autocomplete_element_response_2 = glaccountcontainer_autocomplete_element_response_parseFromJSON(jsonglaccountcontainer_autocomplete_element_response_1);
	cJSON* jsonglaccountcontainer_autocomplete_element_response_2 = glaccountcontainer_autocomplete_element_response_convertToJSON(glaccountcontainer_autocomplete_element_response_2);
	printf("repeating glaccountcontainer_autocomplete_element_response:\n%s\n", cJSON_Print(jsonglaccountcontainer_autocomplete_element_response_2));
}

int main() {
  test_glaccountcontainer_autocomplete_element_response(1);
  test_glaccountcontainer_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // glaccountcontainer_autocomplete_element_response_MAIN
#endif // glaccountcontainer_autocomplete_element_response_TEST
