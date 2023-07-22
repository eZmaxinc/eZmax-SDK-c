#ifndef common_reportsection_TEST
#define common_reportsection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportsection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportsection.h"
common_reportsection_t* instantiate_common_reportsection(int include_optional);



common_reportsection_t* instantiate_common_reportsection(int include_optional) {
  common_reportsection_t* common_reportsection = NULL;
  if (include_optional) {
    common_reportsection = common_reportsection_create(
      list_createList(),
      list_createList(),
      ezmax_api_definition__full_common_reportsection__"Center",
      5,
      1200
    );
  } else {
    common_reportsection = common_reportsection_create(
      list_createList(),
      list_createList(),
      ezmax_api_definition__full_common_reportsection__"Center",
      5,
      1200
    );
  }

  return common_reportsection;
}


#ifdef common_reportsection_MAIN

void test_common_reportsection(int include_optional) {
    common_reportsection_t* common_reportsection_1 = instantiate_common_reportsection(include_optional);

	cJSON* jsoncommon_reportsection_1 = common_reportsection_convertToJSON(common_reportsection_1);
	printf("common_reportsection :\n%s\n", cJSON_Print(jsoncommon_reportsection_1));
	common_reportsection_t* common_reportsection_2 = common_reportsection_parseFromJSON(jsoncommon_reportsection_1);
	cJSON* jsoncommon_reportsection_2 = common_reportsection_convertToJSON(common_reportsection_2);
	printf("repeating common_reportsection:\n%s\n", cJSON_Print(jsoncommon_reportsection_2));
}

int main() {
  test_common_reportsection(1);
  test_common_reportsection(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportsection_MAIN
#endif // common_reportsection_TEST
