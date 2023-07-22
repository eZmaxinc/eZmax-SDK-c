#ifndef common_reportcell_TEST
#define common_reportcell_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportcell_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportcell.h"
common_reportcell_t* instantiate_common_reportcell(int include_optional);



common_reportcell_t* instantiate_common_reportcell(int include_optional) {
  common_reportcell_t* common_reportcell = NULL;
  if (include_optional) {
    common_reportcell = common_reportcell_create(
      1,
      1
    );
  } else {
    common_reportcell = common_reportcell_create(
      1,
      1
    );
  }

  return common_reportcell;
}


#ifdef common_reportcell_MAIN

void test_common_reportcell(int include_optional) {
    common_reportcell_t* common_reportcell_1 = instantiate_common_reportcell(include_optional);

	cJSON* jsoncommon_reportcell_1 = common_reportcell_convertToJSON(common_reportcell_1);
	printf("common_reportcell :\n%s\n", cJSON_Print(jsoncommon_reportcell_1));
	common_reportcell_t* common_reportcell_2 = common_reportcell_parseFromJSON(jsoncommon_reportcell_1);
	cJSON* jsoncommon_reportcell_2 = common_reportcell_convertToJSON(common_reportcell_2);
	printf("repeating common_reportcell:\n%s\n", cJSON_Print(jsoncommon_reportcell_2));
}

int main() {
  test_common_reportcell(1);
  test_common_reportcell(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportcell_MAIN
#endif // common_reportcell_TEST
