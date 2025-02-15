#ifndef custom_communicationrecipientsgroup_response_TEST
#define custom_communicationrecipientsgroup_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_communicationrecipientsgroup_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_communicationrecipientsgroup_response.h"
custom_communicationrecipientsgroup_response_t* instantiate_custom_communicationrecipientsgroup_response(int include_optional);



custom_communicationrecipientsgroup_response_t* instantiate_custom_communicationrecipientsgroup_response(int include_optional) {
  custom_communicationrecipientsgroup_response_t* custom_communicationrecipientsgroup_response = NULL;
  if (include_optional) {
    custom_communicationrecipientsgroup_response = custom_communicationrecipientsgroup_response_create(
      "0",
      list_createList()
    );
  } else {
    custom_communicationrecipientsgroup_response = custom_communicationrecipientsgroup_response_create(
      "0",
      list_createList()
    );
  }

  return custom_communicationrecipientsgroup_response;
}


#ifdef custom_communicationrecipientsgroup_response_MAIN

void test_custom_communicationrecipientsgroup_response(int include_optional) {
    custom_communicationrecipientsgroup_response_t* custom_communicationrecipientsgroup_response_1 = instantiate_custom_communicationrecipientsgroup_response(include_optional);

	cJSON* jsoncustom_communicationrecipientsgroup_response_1 = custom_communicationrecipientsgroup_response_convertToJSON(custom_communicationrecipientsgroup_response_1);
	printf("custom_communicationrecipientsgroup_response :\n%s\n", cJSON_Print(jsoncustom_communicationrecipientsgroup_response_1));
	custom_communicationrecipientsgroup_response_t* custom_communicationrecipientsgroup_response_2 = custom_communicationrecipientsgroup_response_parseFromJSON(jsoncustom_communicationrecipientsgroup_response_1);
	cJSON* jsoncustom_communicationrecipientsgroup_response_2 = custom_communicationrecipientsgroup_response_convertToJSON(custom_communicationrecipientsgroup_response_2);
	printf("repeating custom_communicationrecipientsgroup_response:\n%s\n", cJSON_Print(jsoncustom_communicationrecipientsgroup_response_2));
}

int main() {
  test_custom_communicationrecipientsgroup_response(1);
  test_custom_communicationrecipientsgroup_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_communicationrecipientsgroup_response_MAIN
#endif // custom_communicationrecipientsgroup_response_TEST
