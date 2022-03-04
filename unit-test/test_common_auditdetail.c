#ifndef common_auditdetail_TEST
#define common_auditdetail_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_auditdetail_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_auditdetail.h"
common_auditdetail_t* instantiate_common_auditdetail(int include_optional);



common_auditdetail_t* instantiate_common_auditdetail(int include_optional) {
  common_auditdetail_t* common_auditdetail = NULL;
  if (include_optional) {
    common_auditdetail = common_auditdetail_create(
      70,
      99,
      "JohnDoe",
      "Doe",
      "John",
      "Project X",
      "2020-12-31 23:59:59"
    );
  } else {
    common_auditdetail = common_auditdetail_create(
      70,
      99,
      "JohnDoe",
      "Doe",
      "John",
      "Project X",
      "2020-12-31 23:59:59"
    );
  }

  return common_auditdetail;
}


#ifdef common_auditdetail_MAIN

void test_common_auditdetail(int include_optional) {
    common_auditdetail_t* common_auditdetail_1 = instantiate_common_auditdetail(include_optional);

	cJSON* jsoncommon_auditdetail_1 = common_auditdetail_convertToJSON(common_auditdetail_1);
	printf("common_auditdetail :\n%s\n", cJSON_Print(jsoncommon_auditdetail_1));
	common_auditdetail_t* common_auditdetail_2 = common_auditdetail_parseFromJSON(jsoncommon_auditdetail_1);
	cJSON* jsoncommon_auditdetail_2 = common_auditdetail_convertToJSON(common_auditdetail_2);
	printf("repeating common_auditdetail:\n%s\n", cJSON_Print(jsoncommon_auditdetail_2));
}

int main() {
  test_common_auditdetail(1);
  test_common_auditdetail(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_auditdetail_MAIN
#endif // common_auditdetail_TEST
