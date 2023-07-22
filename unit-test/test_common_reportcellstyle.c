#ifndef common_reportcellstyle_TEST
#define common_reportcellstyle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportcellstyle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportcellstyle.h"
common_reportcellstyle_t* instantiate_common_reportcellstyle(int include_optional);



common_reportcellstyle_t* instantiate_common_reportcellstyle(int include_optional) {
  common_reportcellstyle_t* common_reportcellstyle = NULL;
  if (include_optional) {
    common_reportcellstyle = common_reportcellstyle_create(
      true,
      true,
      true,
      true,
      ezmax_api_definition__full_common_reportcellstyle__"Center",
      ezmax_api_definition__full_common_reportcellstyle__"Bottom",
      ezmax_api_definition__full_common_reportcellstyle__"Normal",
      ezmax_api_definition__full_common_reportcellstyle__"None"
    );
  } else {
    common_reportcellstyle = common_reportcellstyle_create(
      true,
      true,
      true,
      true,
      ezmax_api_definition__full_common_reportcellstyle__"Center",
      ezmax_api_definition__full_common_reportcellstyle__"Bottom",
      ezmax_api_definition__full_common_reportcellstyle__"Normal",
      ezmax_api_definition__full_common_reportcellstyle__"None"
    );
  }

  return common_reportcellstyle;
}


#ifdef common_reportcellstyle_MAIN

void test_common_reportcellstyle(int include_optional) {
    common_reportcellstyle_t* common_reportcellstyle_1 = instantiate_common_reportcellstyle(include_optional);

	cJSON* jsoncommon_reportcellstyle_1 = common_reportcellstyle_convertToJSON(common_reportcellstyle_1);
	printf("common_reportcellstyle :\n%s\n", cJSON_Print(jsoncommon_reportcellstyle_1));
	common_reportcellstyle_t* common_reportcellstyle_2 = common_reportcellstyle_parseFromJSON(jsoncommon_reportcellstyle_1);
	cJSON* jsoncommon_reportcellstyle_2 = common_reportcellstyle_convertToJSON(common_reportcellstyle_2);
	printf("repeating common_reportcellstyle:\n%s\n", cJSON_Print(jsoncommon_reportcellstyle_2));
}

int main() {
  test_common_reportcellstyle(1);
  test_common_reportcellstyle(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportcellstyle_MAIN
#endif // common_reportcellstyle_TEST
