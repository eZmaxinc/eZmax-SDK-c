#ifndef enum_textvalidation_TEST
#define enum_textvalidation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define enum_textvalidation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/enum_textvalidation.h"
enum_textvalidation_t* instantiate_enum_textvalidation(int include_optional);



enum_textvalidation_t* instantiate_enum_textvalidation(int include_optional) {
  enum_textvalidation_t* enum_textvalidation = NULL;
  if (include_optional) {
    enum_textvalidation = enum_textvalidation_create(
    );
  } else {
    enum_textvalidation = enum_textvalidation_create(
    );
  }

  return enum_textvalidation;
}


#ifdef enum_textvalidation_MAIN

void test_enum_textvalidation(int include_optional) {
    enum_textvalidation_t* enum_textvalidation_1 = instantiate_enum_textvalidation(include_optional);

	cJSON* jsonenum_textvalidation_1 = enum_textvalidation_convertToJSON(enum_textvalidation_1);
	printf("enum_textvalidation :\n%s\n", cJSON_Print(jsonenum_textvalidation_1));
	enum_textvalidation_t* enum_textvalidation_2 = enum_textvalidation_parseFromJSON(jsonenum_textvalidation_1);
	cJSON* jsonenum_textvalidation_2 = enum_textvalidation_convertToJSON(enum_textvalidation_2);
	printf("repeating enum_textvalidation:\n%s\n", cJSON_Print(jsonenum_textvalidation_2));
}

int main() {
  test_enum_textvalidation(1);
  test_enum_textvalidation(0);

  printf("Hello world \n");
  return 0;
}

#endif // enum_textvalidation_MAIN
#endif // enum_textvalidation_TEST
