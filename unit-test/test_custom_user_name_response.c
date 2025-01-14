#ifndef custom_user_name_response_TEST
#define custom_user_name_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_user_name_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_user_name_response.h"
custom_user_name_response_t* instantiate_custom_user_name_response(int include_optional);



custom_user_name_response_t* instantiate_custom_user_name_response(int include_optional) {
  custom_user_name_response_t* custom_user_name_response = NULL;
  if (include_optional) {
    custom_user_name_response = custom_user_name_response_create(
      "Doe",
      "John"
    );
  } else {
    custom_user_name_response = custom_user_name_response_create(
      "Doe",
      "John"
    );
  }

  return custom_user_name_response;
}


#ifdef custom_user_name_response_MAIN

void test_custom_user_name_response(int include_optional) {
    custom_user_name_response_t* custom_user_name_response_1 = instantiate_custom_user_name_response(include_optional);

	cJSON* jsoncustom_user_name_response_1 = custom_user_name_response_convertToJSON(custom_user_name_response_1);
	printf("custom_user_name_response :\n%s\n", cJSON_Print(jsoncustom_user_name_response_1));
	custom_user_name_response_t* custom_user_name_response_2 = custom_user_name_response_parseFromJSON(jsoncustom_user_name_response_1);
	cJSON* jsoncustom_user_name_response_2 = custom_user_name_response_convertToJSON(custom_user_name_response_2);
	printf("repeating custom_user_name_response:\n%s\n", cJSON_Print(jsoncustom_user_name_response_2));
}

int main() {
  test_custom_user_name_response(1);
  test_custom_user_name_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_user_name_response_MAIN
#endif // custom_user_name_response_TEST
