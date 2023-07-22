#ifndef common_reportsubsection_TEST
#define common_reportsubsection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportsubsection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportsubsection.h"
common_reportsubsection_t* instantiate_common_reportsubsection(int include_optional);

#include "test_common_reportsubsectionpart.c"
#include "test_common_reportsubsectionpart.c"
#include "test_common_reportsubsectionpart.c"


common_reportsubsection_t* instantiate_common_reportsubsection(int include_optional) {
  common_reportsubsection_t* common_reportsubsection = NULL;
  if (include_optional) {
    common_reportsubsection = common_reportsubsection_create(
       // false, not to have infinite recursion
      instantiate_common_reportsubsectionpart(0),
       // false, not to have infinite recursion
      instantiate_common_reportsubsectionpart(0),
       // false, not to have infinite recursion
      instantiate_common_reportsubsectionpart(0)
    );
  } else {
    common_reportsubsection = common_reportsubsection_create(
      NULL,
      NULL,
      NULL
    );
  }

  return common_reportsubsection;
}


#ifdef common_reportsubsection_MAIN

void test_common_reportsubsection(int include_optional) {
    common_reportsubsection_t* common_reportsubsection_1 = instantiate_common_reportsubsection(include_optional);

	cJSON* jsoncommon_reportsubsection_1 = common_reportsubsection_convertToJSON(common_reportsubsection_1);
	printf("common_reportsubsection :\n%s\n", cJSON_Print(jsoncommon_reportsubsection_1));
	common_reportsubsection_t* common_reportsubsection_2 = common_reportsubsection_parseFromJSON(jsoncommon_reportsubsection_1);
	cJSON* jsoncommon_reportsubsection_2 = common_reportsubsection_convertToJSON(common_reportsubsection_2);
	printf("repeating common_reportsubsection:\n%s\n", cJSON_Print(jsoncommon_reportsubsection_2));
}

int main() {
  test_common_reportsubsection(1);
  test_common_reportsubsection(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportsubsection_MAIN
#endif // common_reportsubsection_TEST
