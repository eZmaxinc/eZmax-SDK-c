#ifndef common_reportcolumn_TEST
#define common_reportcolumn_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportcolumn_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportcolumn.h"
common_reportcolumn_t* instantiate_common_reportcolumn(int include_optional);

#include "test_common_reportcellstyle.c"


common_reportcolumn_t* instantiate_common_reportcolumn(int include_optional) {
  common_reportcolumn_t* common_reportcolumn = NULL;
  if (include_optional) {
    common_reportcolumn = common_reportcolumn_create(
       // false, not to have infinite recursion
      instantiate_common_reportcellstyle(0),
      120
    );
  } else {
    common_reportcolumn = common_reportcolumn_create(
      NULL,
      120
    );
  }

  return common_reportcolumn;
}


#ifdef common_reportcolumn_MAIN

void test_common_reportcolumn(int include_optional) {
    common_reportcolumn_t* common_reportcolumn_1 = instantiate_common_reportcolumn(include_optional);

	cJSON* jsoncommon_reportcolumn_1 = common_reportcolumn_convertToJSON(common_reportcolumn_1);
	printf("common_reportcolumn :\n%s\n", cJSON_Print(jsoncommon_reportcolumn_1));
	common_reportcolumn_t* common_reportcolumn_2 = common_reportcolumn_parseFromJSON(jsoncommon_reportcolumn_1);
	cJSON* jsoncommon_reportcolumn_2 = common_reportcolumn_convertToJSON(common_reportcolumn_2);
	printf("repeating common_reportcolumn:\n%s\n", cJSON_Print(jsoncommon_reportcolumn_2));
}

int main() {
  test_common_reportcolumn(1);
  test_common_reportcolumn(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportcolumn_MAIN
#endif // common_reportcolumn_TEST
