#ifndef common_get_report_v1_response_all_of_TEST
#define common_get_report_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_get_report_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_get_report_v1_response_all_of.h"
common_get_report_v1_response_all_of_t* instantiate_common_get_report_v1_response_all_of(int include_optional);

#include "test_common_get_report_v1_response_m_payload.c"


common_get_report_v1_response_all_of_t* instantiate_common_get_report_v1_response_all_of(int include_optional) {
  common_get_report_v1_response_all_of_t* common_get_report_v1_response_all_of = NULL;
  if (include_optional) {
    common_get_report_v1_response_all_of = common_get_report_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_common_get_report_v1_response_m_payload(0)
    );
  } else {
    common_get_report_v1_response_all_of = common_get_report_v1_response_all_of_create(
      NULL
    );
  }

  return common_get_report_v1_response_all_of;
}


#ifdef common_get_report_v1_response_all_of_MAIN

void test_common_get_report_v1_response_all_of(int include_optional) {
    common_get_report_v1_response_all_of_t* common_get_report_v1_response_all_of_1 = instantiate_common_get_report_v1_response_all_of(include_optional);

	cJSON* jsoncommon_get_report_v1_response_all_of_1 = common_get_report_v1_response_all_of_convertToJSON(common_get_report_v1_response_all_of_1);
	printf("common_get_report_v1_response_all_of :\n%s\n", cJSON_Print(jsoncommon_get_report_v1_response_all_of_1));
	common_get_report_v1_response_all_of_t* common_get_report_v1_response_all_of_2 = common_get_report_v1_response_all_of_parseFromJSON(jsoncommon_get_report_v1_response_all_of_1);
	cJSON* jsoncommon_get_report_v1_response_all_of_2 = common_get_report_v1_response_all_of_convertToJSON(common_get_report_v1_response_all_of_2);
	printf("repeating common_get_report_v1_response_all_of:\n%s\n", cJSON_Print(jsoncommon_get_report_v1_response_all_of_2));
}

int main() {
  test_common_get_report_v1_response_all_of(1);
  test_common_get_report_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_get_report_v1_response_all_of_MAIN
#endif // common_get_report_v1_response_all_of_TEST
