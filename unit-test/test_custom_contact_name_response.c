#ifndef custom_contact_name_response_TEST
#define custom_contact_name_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_contact_name_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_contact_name_response.h"
custom_contact_name_response_t* instantiate_custom_contact_name_response(int include_optional);



custom_contact_name_response_t* instantiate_custom_contact_name_response(int include_optional) {
  custom_contact_name_response_t* custom_contact_name_response = NULL;
  if (include_optional) {
    custom_contact_name_response = custom_contact_name_response_create(
      "John",
      "Doe",
      "eZmax Solutions Inc."
    );
  } else {
    custom_contact_name_response = custom_contact_name_response_create(
      "John",
      "Doe",
      "eZmax Solutions Inc."
    );
  }

  return custom_contact_name_response;
}


#ifdef custom_contact_name_response_MAIN

void test_custom_contact_name_response(int include_optional) {
    custom_contact_name_response_t* custom_contact_name_response_1 = instantiate_custom_contact_name_response(include_optional);

	cJSON* jsoncustom_contact_name_response_1 = custom_contact_name_response_convertToJSON(custom_contact_name_response_1);
	printf("custom_contact_name_response :\n%s\n", cJSON_Print(jsoncustom_contact_name_response_1));
	custom_contact_name_response_t* custom_contact_name_response_2 = custom_contact_name_response_parseFromJSON(jsoncustom_contact_name_response_1);
	cJSON* jsoncustom_contact_name_response_2 = custom_contact_name_response_convertToJSON(custom_contact_name_response_2);
	printf("repeating custom_contact_name_response:\n%s\n", cJSON_Print(jsoncustom_contact_name_response_2));
}

int main() {
  test_custom_contact_name_response(1);
  test_custom_contact_name_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_contact_name_response_MAIN
#endif // custom_contact_name_response_TEST
