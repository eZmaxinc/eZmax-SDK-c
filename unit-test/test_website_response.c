#ifndef website_response_TEST
#define website_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_response.h"
website_response_t* instantiate_website_response(int include_optional);



website_response_t* instantiate_website_response(int include_optional) {
  website_response_t* website_response = NULL;
  if (include_optional) {
    website_response = website_response_create(
      145,
      1,
      "https://www.example.com"
    );
  } else {
    website_response = website_response_create(
      145,
      1,
      "https://www.example.com"
    );
  }

  return website_response;
}


#ifdef website_response_MAIN

void test_website_response(int include_optional) {
    website_response_t* website_response_1 = instantiate_website_response(include_optional);

	cJSON* jsonwebsite_response_1 = website_response_convertToJSON(website_response_1);
	printf("website_response :\n%s\n", cJSON_Print(jsonwebsite_response_1));
	website_response_t* website_response_2 = website_response_parseFromJSON(jsonwebsite_response_1);
	cJSON* jsonwebsite_response_2 = website_response_convertToJSON(website_response_2);
	printf("repeating website_response:\n%s\n", cJSON_Print(jsonwebsite_response_2));
}

int main() {
  test_website_response(1);
  test_website_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_response_MAIN
#endif // website_response_TEST
