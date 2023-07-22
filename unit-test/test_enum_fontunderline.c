#ifndef enum_fontunderline_TEST
#define enum_fontunderline_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define enum_fontunderline_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/enum_fontunderline.h"
enum_fontunderline_t* instantiate_enum_fontunderline(int include_optional);



enum_fontunderline_t* instantiate_enum_fontunderline(int include_optional) {
  enum_fontunderline_t* enum_fontunderline = NULL;
  if (include_optional) {
    enum_fontunderline = enum_fontunderline_create(
    );
  } else {
    enum_fontunderline = enum_fontunderline_create(
    );
  }

  return enum_fontunderline;
}


#ifdef enum_fontunderline_MAIN

void test_enum_fontunderline(int include_optional) {
    enum_fontunderline_t* enum_fontunderline_1 = instantiate_enum_fontunderline(include_optional);

	cJSON* jsonenum_fontunderline_1 = enum_fontunderline_convertToJSON(enum_fontunderline_1);
	printf("enum_fontunderline :\n%s\n", cJSON_Print(jsonenum_fontunderline_1));
	enum_fontunderline_t* enum_fontunderline_2 = enum_fontunderline_parseFromJSON(jsonenum_fontunderline_1);
	cJSON* jsonenum_fontunderline_2 = enum_fontunderline_convertToJSON(enum_fontunderline_2);
	printf("repeating enum_fontunderline:\n%s\n", cJSON_Print(jsonenum_fontunderline_2));
}

int main() {
  test_enum_fontunderline(1);
  test_enum_fontunderline(0);

  printf("Hello world \n");
  return 0;
}

#endif // enum_fontunderline_MAIN
#endif // enum_fontunderline_TEST
