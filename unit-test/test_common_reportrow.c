#ifndef common_reportrow_TEST
#define common_reportrow_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportrow_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportrow.h"
common_reportrow_t* instantiate_common_reportrow(int include_optional);



common_reportrow_t* instantiate_common_reportrow(int include_optional) {
  common_reportrow_t* common_reportrow = NULL;
  if (include_optional) {
    common_reportrow = common_reportrow_create(
      list_createList(),
      20
    );
  } else {
    common_reportrow = common_reportrow_create(
      list_createList(),
      20
    );
  }

  return common_reportrow;
}


#ifdef common_reportrow_MAIN

void test_common_reportrow(int include_optional) {
    common_reportrow_t* common_reportrow_1 = instantiate_common_reportrow(include_optional);

	cJSON* jsoncommon_reportrow_1 = common_reportrow_convertToJSON(common_reportrow_1);
	printf("common_reportrow :\n%s\n", cJSON_Print(jsoncommon_reportrow_1));
	common_reportrow_t* common_reportrow_2 = common_reportrow_parseFromJSON(jsoncommon_reportrow_1);
	cJSON* jsoncommon_reportrow_2 = common_reportrow_convertToJSON(common_reportrow_2);
	printf("repeating common_reportrow:\n%s\n", cJSON_Print(jsoncommon_reportrow_2));
}

int main() {
  test_common_reportrow(1);
  test_common_reportrow(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportrow_MAIN
#endif // common_reportrow_TEST
