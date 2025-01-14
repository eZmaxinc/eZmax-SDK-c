#ifndef website_request_compound_TEST
#define website_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_request_compound.h"
website_request_compound_t* instantiate_website_request_compound(int include_optional);



website_request_compound_t* instantiate_website_request_compound(int include_optional) {
  website_request_compound_t* website_request_compound = NULL;
  if (include_optional) {
    website_request_compound = website_request_compound_create(
      145,
      1,
      "https://www.example.com"
    );
  } else {
    website_request_compound = website_request_compound_create(
      145,
      1,
      "https://www.example.com"
    );
  }

  return website_request_compound;
}


#ifdef website_request_compound_MAIN

void test_website_request_compound(int include_optional) {
    website_request_compound_t* website_request_compound_1 = instantiate_website_request_compound(include_optional);

	cJSON* jsonwebsite_request_compound_1 = website_request_compound_convertToJSON(website_request_compound_1);
	printf("website_request_compound :\n%s\n", cJSON_Print(jsonwebsite_request_compound_1));
	website_request_compound_t* website_request_compound_2 = website_request_compound_parseFromJSON(jsonwebsite_request_compound_1);
	cJSON* jsonwebsite_request_compound_2 = website_request_compound_convertToJSON(website_request_compound_2);
	printf("repeating website_request_compound:\n%s\n", cJSON_Print(jsonwebsite_request_compound_2));
}

int main() {
  test_website_request_compound(1);
  test_website_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_request_compound_MAIN
#endif // website_request_compound_TEST
