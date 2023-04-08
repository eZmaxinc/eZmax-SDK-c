#ifndef enum_verticalalignment_TEST
#define enum_verticalalignment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define enum_verticalalignment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/enum_verticalalignment.h"
enum_verticalalignment_t* instantiate_enum_verticalalignment(int include_optional);



enum_verticalalignment_t* instantiate_enum_verticalalignment(int include_optional) {
  enum_verticalalignment_t* enum_verticalalignment = NULL;
  if (include_optional) {
    enum_verticalalignment = enum_verticalalignment_create(
    );
  } else {
    enum_verticalalignment = enum_verticalalignment_create(
    );
  }

  return enum_verticalalignment;
}


#ifdef enum_verticalalignment_MAIN

void test_enum_verticalalignment(int include_optional) {
    enum_verticalalignment_t* enum_verticalalignment_1 = instantiate_enum_verticalalignment(include_optional);

	cJSON* jsonenum_verticalalignment_1 = enum_verticalalignment_convertToJSON(enum_verticalalignment_1);
	printf("enum_verticalalignment :\n%s\n", cJSON_Print(jsonenum_verticalalignment_1));
	enum_verticalalignment_t* enum_verticalalignment_2 = enum_verticalalignment_parseFromJSON(jsonenum_verticalalignment_1);
	cJSON* jsonenum_verticalalignment_2 = enum_verticalalignment_convertToJSON(enum_verticalalignment_2);
	printf("repeating enum_verticalalignment:\n%s\n", cJSON_Print(jsonenum_verticalalignment_2));
}

int main() {
  test_enum_verticalalignment(1);
  test_enum_verticalalignment(0);

  printf("Hello world \n");
  return 0;
}

#endif // enum_verticalalignment_MAIN
#endif // enum_verticalalignment_TEST
