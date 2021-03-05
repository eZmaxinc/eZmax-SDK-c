#ifndef common_audit_TEST
#define common_audit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_audit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_audit.h"
common_audit_t* instantiate_common_audit(int include_optional);



common_audit_t* instantiate_common_audit(int include_optional) {
  common_audit_t* common_audit = NULL;
  if (include_optional) {
    common_audit = common_audit_create(
      70,
      70,
      99,
      99,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59"
    );
  } else {
    common_audit = common_audit_create(
      70,
      70,
      99,
      99,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59"
    );
  }

  return common_audit;
}


#ifdef common_audit_MAIN

void test_common_audit(int include_optional) {
    common_audit_t* common_audit_1 = instantiate_common_audit(include_optional);

	cJSON* jsoncommon_audit_1 = common_audit_convertToJSON(common_audit_1);
	printf("common_audit :\n%s\n", cJSON_Print(jsoncommon_audit_1));
	common_audit_t* common_audit_2 = common_audit_parseFromJSON(jsoncommon_audit_1);
	cJSON* jsoncommon_audit_2 = common_audit_convertToJSON(common_audit_2);
	printf("repeating common_audit:\n%s\n", cJSON_Print(jsoncommon_audit_2));
}

int main() {
  test_common_audit(1);
  test_common_audit(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_audit_MAIN
#endif // common_audit_TEST
