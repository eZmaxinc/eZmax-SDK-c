#ifndef custom_branding_response_TEST
#define custom_branding_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_branding_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_branding_response.h"
custom_branding_response_t* instantiate_custom_branding_response(int include_optional);



custom_branding_response_t* instantiate_custom_branding_response(int include_optional) {
  custom_branding_response_t* custom_branding_response = NULL;
  if (include_optional) {
    custom_branding_response = custom_branding_response_create(
      15658734,
      "http://www.example.com/logo.jpg"
    );
  } else {
    custom_branding_response = custom_branding_response_create(
      15658734,
      "http://www.example.com/logo.jpg"
    );
  }

  return custom_branding_response;
}


#ifdef custom_branding_response_MAIN

void test_custom_branding_response(int include_optional) {
    custom_branding_response_t* custom_branding_response_1 = instantiate_custom_branding_response(include_optional);

	cJSON* jsoncustom_branding_response_1 = custom_branding_response_convertToJSON(custom_branding_response_1);
	printf("custom_branding_response :\n%s\n", cJSON_Print(jsoncustom_branding_response_1));
	custom_branding_response_t* custom_branding_response_2 = custom_branding_response_parseFromJSON(jsoncustom_branding_response_1);
	cJSON* jsoncustom_branding_response_2 = custom_branding_response_convertToJSON(custom_branding_response_2);
	printf("repeating custom_branding_response:\n%s\n", cJSON_Print(jsoncustom_branding_response_2));
}

int main() {
  test_custom_branding_response(1);
  test_custom_branding_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_branding_response_MAIN
#endif // custom_branding_response_TEST
