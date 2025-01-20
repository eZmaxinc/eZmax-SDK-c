#ifndef common_file_TEST
#define common_file_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_file_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_file.h"
common_file_t* instantiate_common_file(int include_optional);



common_file_t* instantiate_common_file(int include_optional) {
  common_file_t* common_file = NULL;
  if (include_optional) {
    common_file = common_file_create(
      "example.pdf",
      "0",
      "[B@53812a9b",
      ezmax_api_definition__full_common_file_EFILESOURCE_Base64
    );
  } else {
    common_file = common_file_create(
      "example.pdf",
      "0",
      "[B@53812a9b",
      ezmax_api_definition__full_common_file_EFILESOURCE_Base64
    );
  }

  return common_file;
}


#ifdef common_file_MAIN

void test_common_file(int include_optional) {
    common_file_t* common_file_1 = instantiate_common_file(include_optional);

	cJSON* jsoncommon_file_1 = common_file_convertToJSON(common_file_1);
	printf("common_file :\n%s\n", cJSON_Print(jsoncommon_file_1));
	common_file_t* common_file_2 = common_file_parseFromJSON(jsoncommon_file_1);
	cJSON* jsoncommon_file_2 = common_file_convertToJSON(common_file_2);
	printf("repeating common_file:\n%s\n", cJSON_Print(jsoncommon_file_2));
}

int main() {
  test_common_file(1);
  test_common_file(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_file_MAIN
#endif // common_file_TEST
