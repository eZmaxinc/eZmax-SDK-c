#ifndef custom_dropdown_element_request_TEST
#define custom_dropdown_element_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_dropdown_element_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_dropdown_element_request.h"
custom_dropdown_element_request_t* instantiate_custom_dropdown_element_request(int include_optional);



custom_dropdown_element_request_t* instantiate_custom_dropdown_element_request(int include_optional) {
  custom_dropdown_element_request_t* custom_dropdown_element_request = NULL;
  if (include_optional) {
    custom_dropdown_element_request = custom_dropdown_element_request_create(
      "0",
      "0"
    );
  } else {
    custom_dropdown_element_request = custom_dropdown_element_request_create(
      "0",
      "0"
    );
  }

  return custom_dropdown_element_request;
}


#ifdef custom_dropdown_element_request_MAIN

void test_custom_dropdown_element_request(int include_optional) {
    custom_dropdown_element_request_t* custom_dropdown_element_request_1 = instantiate_custom_dropdown_element_request(include_optional);

	cJSON* jsoncustom_dropdown_element_request_1 = custom_dropdown_element_request_convertToJSON(custom_dropdown_element_request_1);
	printf("custom_dropdown_element_request :\n%s\n", cJSON_Print(jsoncustom_dropdown_element_request_1));
	custom_dropdown_element_request_t* custom_dropdown_element_request_2 = custom_dropdown_element_request_parseFromJSON(jsoncustom_dropdown_element_request_1);
	cJSON* jsoncustom_dropdown_element_request_2 = custom_dropdown_element_request_convertToJSON(custom_dropdown_element_request_2);
	printf("repeating custom_dropdown_element_request:\n%s\n", cJSON_Print(jsoncustom_dropdown_element_request_2));
}

int main() {
  test_custom_dropdown_element_request(1);
  test_custom_dropdown_element_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_dropdown_element_request_MAIN
#endif // custom_dropdown_element_request_TEST
