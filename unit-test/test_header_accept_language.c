#ifndef header_accept_language_TEST
#define header_accept_language_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define header_accept_language_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/header_accept_language.h"
header_accept_language_t* instantiate_header_accept_language(int include_optional);



header_accept_language_t* instantiate_header_accept_language(int include_optional) {
  header_accept_language_t* header_accept_language = NULL;
  if (include_optional) {
    header_accept_language = header_accept_language_create(
    );
  } else {
    header_accept_language = header_accept_language_create(
    );
  }

  return header_accept_language;
}


#ifdef header_accept_language_MAIN

void test_header_accept_language(int include_optional) {
    header_accept_language_t* header_accept_language_1 = instantiate_header_accept_language(include_optional);

	cJSON* jsonheader_accept_language_1 = header_accept_language_convertToJSON(header_accept_language_1);
	printf("header_accept_language :\n%s\n", cJSON_Print(jsonheader_accept_language_1));
	header_accept_language_t* header_accept_language_2 = header_accept_language_parseFromJSON(jsonheader_accept_language_1);
	cJSON* jsonheader_accept_language_2 = header_accept_language_convertToJSON(header_accept_language_2);
	printf("repeating header_accept_language:\n%s\n", cJSON_Print(jsonheader_accept_language_2));
}

int main() {
  test_header_accept_language(1);
  test_header_accept_language(0);

  printf("Hello world \n");
  return 0;
}

#endif // header_accept_language_MAIN
#endif // header_accept_language_TEST
