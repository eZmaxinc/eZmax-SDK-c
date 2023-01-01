#ifndef communication_list_element_TEST
#define communication_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_list_element.h"
communication_list_element_t* instantiate_communication_list_element(int include_optional);

#include "test_custom_contact_name_response.c"


communication_list_element_t* instantiate_communication_list_element(int include_optional) {
  communication_list_element_t* communication_list_element = NULL;
  if (include_optional) {
    communication_list_element = communication_list_element_create(
      1,
      ezmax_api_definition__full_communication_list_element__"Normal",
      ezmax_api_definition__full_communication_list_element__"Email",
      "This is an example of subject",
      "2020-12-31 23:59:59",
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0)
    );
  } else {
    communication_list_element = communication_list_element_create(
      1,
      ezmax_api_definition__full_communication_list_element__"Normal",
      ezmax_api_definition__full_communication_list_element__"Email",
      "This is an example of subject",
      "2020-12-31 23:59:59",
      NULL
    );
  }

  return communication_list_element;
}


#ifdef communication_list_element_MAIN

void test_communication_list_element(int include_optional) {
    communication_list_element_t* communication_list_element_1 = instantiate_communication_list_element(include_optional);

	cJSON* jsoncommunication_list_element_1 = communication_list_element_convertToJSON(communication_list_element_1);
	printf("communication_list_element :\n%s\n", cJSON_Print(jsoncommunication_list_element_1));
	communication_list_element_t* communication_list_element_2 = communication_list_element_parseFromJSON(jsoncommunication_list_element_1);
	cJSON* jsoncommunication_list_element_2 = communication_list_element_convertToJSON(communication_list_element_2);
	printf("repeating communication_list_element:\n%s\n", cJSON_Print(jsoncommunication_list_element_2));
}

int main() {
  test_communication_list_element(1);
  test_communication_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_list_element_MAIN
#endif // communication_list_element_TEST
