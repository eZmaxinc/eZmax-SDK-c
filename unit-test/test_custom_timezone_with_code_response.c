#ifndef custom_timezone_with_code_response_TEST
#define custom_timezone_with_code_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_timezone_with_code_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_timezone_with_code_response.h"
custom_timezone_with_code_response_t* instantiate_custom_timezone_with_code_response(int include_optional);



custom_timezone_with_code_response_t* instantiate_custom_timezone_with_code_response(int include_optional) {
  custom_timezone_with_code_response_t* custom_timezone_with_code_response = NULL;
  if (include_optional) {
    custom_timezone_with_code_response = custom_timezone_with_code_response_create(
      "0",
      "EST"
    );
  } else {
    custom_timezone_with_code_response = custom_timezone_with_code_response_create(
      "0",
      "EST"
    );
  }

  return custom_timezone_with_code_response;
}


#ifdef custom_timezone_with_code_response_MAIN

void test_custom_timezone_with_code_response(int include_optional) {
    custom_timezone_with_code_response_t* custom_timezone_with_code_response_1 = instantiate_custom_timezone_with_code_response(include_optional);

	cJSON* jsoncustom_timezone_with_code_response_1 = custom_timezone_with_code_response_convertToJSON(custom_timezone_with_code_response_1);
	printf("custom_timezone_with_code_response :\n%s\n", cJSON_Print(jsoncustom_timezone_with_code_response_1));
	custom_timezone_with_code_response_t* custom_timezone_with_code_response_2 = custom_timezone_with_code_response_parseFromJSON(jsoncustom_timezone_with_code_response_1);
	cJSON* jsoncustom_timezone_with_code_response_2 = custom_timezone_with_code_response_convertToJSON(custom_timezone_with_code_response_2);
	printf("repeating custom_timezone_with_code_response:\n%s\n", cJSON_Print(jsoncustom_timezone_with_code_response_2));
}

int main() {
  test_custom_timezone_with_code_response(1);
  test_custom_timezone_with_code_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_timezone_with_code_response_MAIN
#endif // custom_timezone_with_code_response_TEST
