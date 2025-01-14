#ifndef website_response_compound_TEST
#define website_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define website_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/website_response_compound.h"
website_response_compound_t* instantiate_website_response_compound(int include_optional);



website_response_compound_t* instantiate_website_response_compound(int include_optional) {
  website_response_compound_t* website_response_compound = NULL;
  if (include_optional) {
    website_response_compound = website_response_compound_create(
      145,
      1,
      "https://www.example.com"
    );
  } else {
    website_response_compound = website_response_compound_create(
      145,
      1,
      "https://www.example.com"
    );
  }

  return website_response_compound;
}


#ifdef website_response_compound_MAIN

void test_website_response_compound(int include_optional) {
    website_response_compound_t* website_response_compound_1 = instantiate_website_response_compound(include_optional);

	cJSON* jsonwebsite_response_compound_1 = website_response_compound_convertToJSON(website_response_compound_1);
	printf("website_response_compound :\n%s\n", cJSON_Print(jsonwebsite_response_compound_1));
	website_response_compound_t* website_response_compound_2 = website_response_compound_parseFromJSON(jsonwebsite_response_compound_1);
	cJSON* jsonwebsite_response_compound_2 = website_response_compound_convertToJSON(website_response_compound_2);
	printf("repeating website_response_compound:\n%s\n", cJSON_Print(jsonwebsite_response_compound_2));
}

int main() {
  test_website_response_compound(1);
  test_website_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // website_response_compound_MAIN
#endif // website_response_compound_TEST
