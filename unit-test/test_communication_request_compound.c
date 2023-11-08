#ifndef communication_request_compound_TEST
#define communication_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_request_compound.h"
communication_request_compound_t* instantiate_communication_request_compound(int include_optional);

#include "test_custom_communicationsender_request.c"


communication_request_compound_t* instantiate_communication_request_compound(int include_optional) {
  communication_request_compound_t* communication_request_compound = NULL;
  if (include_optional) {
    communication_request_compound = communication_request_compound_create(
      1,
      ezmax_api_definition__full_communication_request_compound__"Normal",
      ezmax_api_definition__full_communication_request_compound__"Email",
       // false, not to have infinite recursion
      instantiate_custom_communicationsender_request(0),
      "This is an example of subject",
      "0",
      false,
      ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_Attachment,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    communication_request_compound = communication_request_compound_create(
      1,
      ezmax_api_definition__full_communication_request_compound__"Normal",
      ezmax_api_definition__full_communication_request_compound__"Email",
      NULL,
      "This is an example of subject",
      "0",
      false,
      ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_Attachment,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return communication_request_compound;
}


#ifdef communication_request_compound_MAIN

void test_communication_request_compound(int include_optional) {
    communication_request_compound_t* communication_request_compound_1 = instantiate_communication_request_compound(include_optional);

	cJSON* jsoncommunication_request_compound_1 = communication_request_compound_convertToJSON(communication_request_compound_1);
	printf("communication_request_compound :\n%s\n", cJSON_Print(jsoncommunication_request_compound_1));
	communication_request_compound_t* communication_request_compound_2 = communication_request_compound_parseFromJSON(jsoncommunication_request_compound_1);
	cJSON* jsoncommunication_request_compound_2 = communication_request_compound_convertToJSON(communication_request_compound_2);
	printf("repeating communication_request_compound:\n%s\n", cJSON_Print(jsoncommunication_request_compound_2));
}

int main() {
  test_communication_request_compound(1);
  test_communication_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_request_compound_MAIN
#endif // communication_request_compound_TEST
