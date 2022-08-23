#ifndef website_request_TEST
#define website_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_request.h"
website_request_t* instantiate_website_request(int include_optional);



website_request_t* instantiate_website_request(int include_optional) {
  website_request_t* website_request = NULL;
  if (include_optional) {
    website_request = website_request_create(
      1,
      "https://www.example.com"
    );
  } else {
    website_request = website_request_create(
      1,
      "https://www.example.com"
    );
  }

  return website_request;
}


#ifdef website_request_MAIN

void test_website_request(int include_optional) {
    website_request_t* website_request_1 = instantiate_website_request(include_optional);

	cJSON* jsonwebsite_request_1 = website_request_convertToJSON(website_request_1);
	printf("website_request :\n%s\n", cJSON_Print(jsonwebsite_request_1));
	website_request_t* website_request_2 = website_request_parseFromJSON(jsonwebsite_request_1);
	cJSON* jsonwebsite_request_2 = website_request_convertToJSON(website_request_2);
	printf("repeating website_request:\n%s\n", cJSON_Print(jsonwebsite_request_2));
}

int main() {
  test_website_request(1);
  test_website_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_request_MAIN
#endif // website_request_TEST
