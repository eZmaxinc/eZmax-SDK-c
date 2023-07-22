#ifndef common_reportgroup_TEST
#define common_reportgroup_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportgroup_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportgroup.h"
common_reportgroup_t* instantiate_common_reportgroup(int include_optional);



common_reportgroup_t* instantiate_common_reportgroup(int include_optional) {
  common_reportgroup_t* common_reportgroup = NULL;
  if (include_optional) {
    common_reportgroup = common_reportgroup_create(
      list_createList(),
      list_createList()
    );
  } else {
    common_reportgroup = common_reportgroup_create(
      list_createList(),
      list_createList()
    );
  }

  return common_reportgroup;
}


#ifdef common_reportgroup_MAIN

void test_common_reportgroup(int include_optional) {
    common_reportgroup_t* common_reportgroup_1 = instantiate_common_reportgroup(include_optional);

	cJSON* jsoncommon_reportgroup_1 = common_reportgroup_convertToJSON(common_reportgroup_1);
	printf("common_reportgroup :\n%s\n", cJSON_Print(jsoncommon_reportgroup_1));
	common_reportgroup_t* common_reportgroup_2 = common_reportgroup_parseFromJSON(jsoncommon_reportgroup_1);
	cJSON* jsoncommon_reportgroup_2 = common_reportgroup_convertToJSON(common_reportgroup_2);
	printf("repeating common_reportgroup:\n%s\n", cJSON_Print(jsoncommon_reportgroup_2));
}

int main() {
  test_common_reportgroup(1);
  test_common_reportgroup(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportgroup_MAIN
#endif // common_reportgroup_TEST
