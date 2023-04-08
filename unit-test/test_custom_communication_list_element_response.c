#ifndef custom_communication_list_element_response_TEST
#define custom_communication_list_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_communication_list_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_communication_list_element_response.h"
custom_communication_list_element_response_t* instantiate_custom_communication_list_element_response(int include_optional);



custom_communication_list_element_response_t* instantiate_custom_communication_list_element_response(int include_optional) {
  custom_communication_list_element_response_t* custom_communication_list_element_response = NULL;
  if (include_optional) {
    custom_communication_list_element_response = custom_communication_list_element_response_create(
      1,
      "2020-12-31 23:59:59",
      ezmax_api_definition__full_custom_communication_list_element_response__"Outbound",
      ezmax_api_definition__full_custom_communication_list_element_response__"Normal",
      ezmax_api_definition__full_custom_communication_list_element_response__"Email",
      8,
      "This is an example of subject",
      "John Doe",
      "Jane Doe"
    );
  } else {
    custom_communication_list_element_response = custom_communication_list_element_response_create(
      1,
      "2020-12-31 23:59:59",
      ezmax_api_definition__full_custom_communication_list_element_response__"Outbound",
      ezmax_api_definition__full_custom_communication_list_element_response__"Normal",
      ezmax_api_definition__full_custom_communication_list_element_response__"Email",
      8,
      "This is an example of subject",
      "John Doe",
      "Jane Doe"
    );
  }

  return custom_communication_list_element_response;
}


#ifdef custom_communication_list_element_response_MAIN

void test_custom_communication_list_element_response(int include_optional) {
    custom_communication_list_element_response_t* custom_communication_list_element_response_1 = instantiate_custom_communication_list_element_response(include_optional);

	cJSON* jsoncustom_communication_list_element_response_1 = custom_communication_list_element_response_convertToJSON(custom_communication_list_element_response_1);
	printf("custom_communication_list_element_response :\n%s\n", cJSON_Print(jsoncustom_communication_list_element_response_1));
	custom_communication_list_element_response_t* custom_communication_list_element_response_2 = custom_communication_list_element_response_parseFromJSON(jsoncustom_communication_list_element_response_1);
	cJSON* jsoncustom_communication_list_element_response_2 = custom_communication_list_element_response_convertToJSON(custom_communication_list_element_response_2);
	printf("repeating custom_communication_list_element_response:\n%s\n", cJSON_Print(jsoncustom_communication_list_element_response_2));
}

int main() {
  test_custom_communication_list_element_response(1);
  test_custom_communication_list_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_communication_list_element_response_MAIN
#endif // custom_communication_list_element_response_TEST
