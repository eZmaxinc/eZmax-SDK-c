#ifndef communication_response_compound_TEST
#define communication_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_response_compound.h"
communication_response_compound_t* instantiate_communication_response_compound(int include_optional);

#include "test_custom_contact_name_response.c"


communication_response_compound_t* instantiate_communication_response_compound(int include_optional) {
  communication_response_compound_t* communication_response_compound = NULL;
  if (include_optional) {
    communication_response_compound = communication_response_compound_create(
      1,
      ezmax_api_definition__full_communication_response_compound__"Normal",
      ezmax_api_definition__full_communication_response_compound__"Email",
      "This is an example of subject",
      "2020-12-31 23:59:59",
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    communication_response_compound = communication_response_compound_create(
      1,
      ezmax_api_definition__full_communication_response_compound__"Normal",
      ezmax_api_definition__full_communication_response_compound__"Email",
      "This is an example of subject",
      "2020-12-31 23:59:59",
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return communication_response_compound;
}


#ifdef communication_response_compound_MAIN

void test_communication_response_compound(int include_optional) {
    communication_response_compound_t* communication_response_compound_1 = instantiate_communication_response_compound(include_optional);

	cJSON* jsoncommunication_response_compound_1 = communication_response_compound_convertToJSON(communication_response_compound_1);
	printf("communication_response_compound :\n%s\n", cJSON_Print(jsoncommunication_response_compound_1));
	communication_response_compound_t* communication_response_compound_2 = communication_response_compound_parseFromJSON(jsoncommunication_response_compound_1);
	cJSON* jsoncommunication_response_compound_2 = communication_response_compound_convertToJSON(communication_response_compound_2);
	printf("repeating communication_response_compound:\n%s\n", cJSON_Print(jsoncommunication_response_compound_2));
}

int main() {
  test_communication_response_compound(1);
  test_communication_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_response_compound_MAIN
#endif // communication_response_compound_TEST
