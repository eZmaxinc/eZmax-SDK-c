#ifndef enum_horizontalalignment_TEST
#define enum_horizontalalignment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define enum_horizontalalignment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/enum_horizontalalignment.h"
enum_horizontalalignment_t* instantiate_enum_horizontalalignment(int include_optional);



enum_horizontalalignment_t* instantiate_enum_horizontalalignment(int include_optional) {
  enum_horizontalalignment_t* enum_horizontalalignment = NULL;
  if (include_optional) {
    enum_horizontalalignment = enum_horizontalalignment_create(
    );
  } else {
    enum_horizontalalignment = enum_horizontalalignment_create(
    );
  }

  return enum_horizontalalignment;
}


#ifdef enum_horizontalalignment_MAIN

void test_enum_horizontalalignment(int include_optional) {
    enum_horizontalalignment_t* enum_horizontalalignment_1 = instantiate_enum_horizontalalignment(include_optional);

	cJSON* jsonenum_horizontalalignment_1 = enum_horizontalalignment_convertToJSON(enum_horizontalalignment_1);
	printf("enum_horizontalalignment :\n%s\n", cJSON_Print(jsonenum_horizontalalignment_1));
	enum_horizontalalignment_t* enum_horizontalalignment_2 = enum_horizontalalignment_parseFromJSON(jsonenum_horizontalalignment_1);
	cJSON* jsonenum_horizontalalignment_2 = enum_horizontalalignment_convertToJSON(enum_horizontalalignment_2);
	printf("repeating enum_horizontalalignment:\n%s\n", cJSON_Print(jsonenum_horizontalalignment_2));
}

int main() {
  test_enum_horizontalalignment(1);
  test_enum_horizontalalignment(0);

  printf("Hello world \n");
  return 0;
}

#endif // enum_horizontalalignment_MAIN
#endif // enum_horizontalalignment_TEST
