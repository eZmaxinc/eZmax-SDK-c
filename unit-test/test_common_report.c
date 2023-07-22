#ifndef common_report_TEST
#define common_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_report.h"
common_report_t* instantiate_common_report(int include_optional);



common_report_t* instantiate_common_report(int include_optional) {
  common_report_t* common_report = NULL;
  if (include_optional) {
    common_report = common_report_create(
      list_createList()
    );
  } else {
    common_report = common_report_create(
      list_createList()
    );
  }

  return common_report;
}


#ifdef common_report_MAIN

void test_common_report(int include_optional) {
    common_report_t* common_report_1 = instantiate_common_report(include_optional);

	cJSON* jsoncommon_report_1 = common_report_convertToJSON(common_report_1);
	printf("common_report :\n%s\n", cJSON_Print(jsoncommon_report_1));
	common_report_t* common_report_2 = common_report_parseFromJSON(jsoncommon_report_1);
	cJSON* jsoncommon_report_2 = common_report_convertToJSON(common_report_2);
	printf("repeating common_report:\n%s\n", cJSON_Print(jsoncommon_report_2));
}

int main() {
  test_common_report(1);
  test_common_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_report_MAIN
#endif // common_report_TEST
