#ifndef apikey_list_element_TEST
#define apikey_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_list_element.h"
apikey_list_element_t* instantiate_apikey_list_element(int include_optional);



apikey_list_element_t* instantiate_apikey_list_element(int include_optional) {
  apikey_list_element_t* apikey_list_element = NULL;
  if (include_optional) {
    apikey_list_element = apikey_list_element_create(
      99,
      "Project X",
      "John",
      "Doe",
      true,
      true
    );
  } else {
    apikey_list_element = apikey_list_element_create(
      99,
      "Project X",
      "John",
      "Doe",
      true,
      true
    );
  }

  return apikey_list_element;
}


#ifdef apikey_list_element_MAIN

void test_apikey_list_element(int include_optional) {
    apikey_list_element_t* apikey_list_element_1 = instantiate_apikey_list_element(include_optional);

	cJSON* jsonapikey_list_element_1 = apikey_list_element_convertToJSON(apikey_list_element_1);
	printf("apikey_list_element :\n%s\n", cJSON_Print(jsonapikey_list_element_1));
	apikey_list_element_t* apikey_list_element_2 = apikey_list_element_parseFromJSON(jsonapikey_list_element_1);
	cJSON* jsonapikey_list_element_2 = apikey_list_element_convertToJSON(apikey_list_element_2);
	printf("repeating apikey_list_element:\n%s\n", cJSON_Print(jsonapikey_list_element_2));
}

int main() {
  test_apikey_list_element(1);
  test_apikey_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_list_element_MAIN
#endif // apikey_list_element_TEST
