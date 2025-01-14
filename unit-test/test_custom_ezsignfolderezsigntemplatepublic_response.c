#ifndef custom_ezsignfolderezsigntemplatepublic_response_TEST
#define custom_ezsignfolderezsigntemplatepublic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignfolderezsigntemplatepublic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignfolderezsigntemplatepublic_response.h"
custom_ezsignfolderezsigntemplatepublic_response_t* instantiate_custom_ezsignfolderezsigntemplatepublic_response(int include_optional);



custom_ezsignfolderezsigntemplatepublic_response_t* instantiate_custom_ezsignfolderezsigntemplatepublic_response(int include_optional) {
  custom_ezsignfolderezsigntemplatepublic_response_t* custom_ezsignfolderezsigntemplatepublic_response = NULL;
  if (include_optional) {
    custom_ezsignfolderezsigntemplatepublic_response = custom_ezsignfolderezsigntemplatepublic_response_create(
      33,
      "Test eZsign Folder",
      ezmax_api_definition__full_custom_ezsignfolderezsigntemplatepublic_response__"Completed",
      4,
      4,
      3,
      list_createList()
    );
  } else {
    custom_ezsignfolderezsigntemplatepublic_response = custom_ezsignfolderezsigntemplatepublic_response_create(
      33,
      "Test eZsign Folder",
      ezmax_api_definition__full_custom_ezsignfolderezsigntemplatepublic_response__"Completed",
      4,
      4,
      3,
      list_createList()
    );
  }

  return custom_ezsignfolderezsigntemplatepublic_response;
}


#ifdef custom_ezsignfolderezsigntemplatepublic_response_MAIN

void test_custom_ezsignfolderezsigntemplatepublic_response(int include_optional) {
    custom_ezsignfolderezsigntemplatepublic_response_t* custom_ezsignfolderezsigntemplatepublic_response_1 = instantiate_custom_ezsignfolderezsigntemplatepublic_response(include_optional);

	cJSON* jsoncustom_ezsignfolderezsigntemplatepublic_response_1 = custom_ezsignfolderezsigntemplatepublic_response_convertToJSON(custom_ezsignfolderezsigntemplatepublic_response_1);
	printf("custom_ezsignfolderezsigntemplatepublic_response :\n%s\n", cJSON_Print(jsoncustom_ezsignfolderezsigntemplatepublic_response_1));
	custom_ezsignfolderezsigntemplatepublic_response_t* custom_ezsignfolderezsigntemplatepublic_response_2 = custom_ezsignfolderezsigntemplatepublic_response_parseFromJSON(jsoncustom_ezsignfolderezsigntemplatepublic_response_1);
	cJSON* jsoncustom_ezsignfolderezsigntemplatepublic_response_2 = custom_ezsignfolderezsigntemplatepublic_response_convertToJSON(custom_ezsignfolderezsigntemplatepublic_response_2);
	printf("repeating custom_ezsignfolderezsigntemplatepublic_response:\n%s\n", cJSON_Print(jsoncustom_ezsignfolderezsigntemplatepublic_response_2));
}

int main() {
  test_custom_ezsignfolderezsigntemplatepublic_response(1);
  test_custom_ezsignfolderezsigntemplatepublic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignfolderezsigntemplatepublic_response_MAIN
#endif // custom_ezsignfolderezsigntemplatepublic_response_TEST
