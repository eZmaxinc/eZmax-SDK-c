#ifndef communication_response_compound_all_of_TEST
#define communication_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_response_compound_all_of.h"
communication_response_compound_all_of_t* instantiate_communication_response_compound_all_of(int include_optional);



communication_response_compound_all_of_t* instantiate_communication_response_compound_all_of(int include_optional) {
  communication_response_compound_all_of_t* communication_response_compound_all_of = NULL;
  if (include_optional) {
    communication_response_compound_all_of = communication_response_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    communication_response_compound_all_of = communication_response_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return communication_response_compound_all_of;
}


#ifdef communication_response_compound_all_of_MAIN

void test_communication_response_compound_all_of(int include_optional) {
    communication_response_compound_all_of_t* communication_response_compound_all_of_1 = instantiate_communication_response_compound_all_of(include_optional);

	cJSON* jsoncommunication_response_compound_all_of_1 = communication_response_compound_all_of_convertToJSON(communication_response_compound_all_of_1);
	printf("communication_response_compound_all_of :\n%s\n", cJSON_Print(jsoncommunication_response_compound_all_of_1));
	communication_response_compound_all_of_t* communication_response_compound_all_of_2 = communication_response_compound_all_of_parseFromJSON(jsoncommunication_response_compound_all_of_1);
	cJSON* jsoncommunication_response_compound_all_of_2 = communication_response_compound_all_of_convertToJSON(communication_response_compound_all_of_2);
	printf("repeating communication_response_compound_all_of:\n%s\n", cJSON_Print(jsoncommunication_response_compound_all_of_2));
}

int main() {
  test_communication_response_compound_all_of(1);
  test_communication_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_response_compound_all_of_MAIN
#endif // communication_response_compound_all_of_TEST
