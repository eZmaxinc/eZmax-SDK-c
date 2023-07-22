#ifndef enum_fontweight_TEST
#define enum_fontweight_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define enum_fontweight_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/enum_fontweight.h"
enum_fontweight_t* instantiate_enum_fontweight(int include_optional);



enum_fontweight_t* instantiate_enum_fontweight(int include_optional) {
  enum_fontweight_t* enum_fontweight = NULL;
  if (include_optional) {
    enum_fontweight = enum_fontweight_create(
    );
  } else {
    enum_fontweight = enum_fontweight_create(
    );
  }

  return enum_fontweight;
}


#ifdef enum_fontweight_MAIN

void test_enum_fontweight(int include_optional) {
    enum_fontweight_t* enum_fontweight_1 = instantiate_enum_fontweight(include_optional);

	cJSON* jsonenum_fontweight_1 = enum_fontweight_convertToJSON(enum_fontweight_1);
	printf("enum_fontweight :\n%s\n", cJSON_Print(jsonenum_fontweight_1));
	enum_fontweight_t* enum_fontweight_2 = enum_fontweight_parseFromJSON(jsonenum_fontweight_1);
	cJSON* jsonenum_fontweight_2 = enum_fontweight_convertToJSON(enum_fontweight_2);
	printf("repeating enum_fontweight:\n%s\n", cJSON_Print(jsonenum_fontweight_2));
}

int main() {
  test_enum_fontweight(1);
  test_enum_fontweight(0);

  printf("Hello world \n");
  return 0;
}

#endif // enum_fontweight_MAIN
#endif // enum_fontweight_TEST
