#ifndef activesession_list_element_TEST
#define activesession_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_list_element.h"
activesession_list_element_t* instantiate_activesession_list_element(int include_optional);



activesession_list_element_t* instantiate_activesession_list_element(int include_optional) {
  activesession_list_element_t* activesession_list_element = NULL;
  if (include_optional) {
    activesession_list_element = activesession_list_element_create(
      16,
      70,
      249,
      1,
      21,
      "Acme inc.",
      "Head Office",
      "doej",
      "PC001",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "127.0.0.1"
    );
  } else {
    activesession_list_element = activesession_list_element_create(
      16,
      70,
      249,
      1,
      21,
      "Acme inc.",
      "Head Office",
      "doej",
      "PC001",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      "127.0.0.1"
    );
  }

  return activesession_list_element;
}


#ifdef activesession_list_element_MAIN

void test_activesession_list_element(int include_optional) {
    activesession_list_element_t* activesession_list_element_1 = instantiate_activesession_list_element(include_optional);

	cJSON* jsonactivesession_list_element_1 = activesession_list_element_convertToJSON(activesession_list_element_1);
	printf("activesession_list_element :\n%s\n", cJSON_Print(jsonactivesession_list_element_1));
	activesession_list_element_t* activesession_list_element_2 = activesession_list_element_parseFromJSON(jsonactivesession_list_element_1);
	cJSON* jsonactivesession_list_element_2 = activesession_list_element_convertToJSON(activesession_list_element_2);
	printf("repeating activesession_list_element:\n%s\n", cJSON_Print(jsonactivesession_list_element_2));
}

int main() {
  test_activesession_list_element(1);
  test_activesession_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_list_element_MAIN
#endif // activesession_list_element_TEST
