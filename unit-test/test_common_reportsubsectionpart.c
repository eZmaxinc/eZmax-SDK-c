#ifndef common_reportsubsectionpart_TEST
#define common_reportsubsectionpart_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_reportsubsectionpart_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_reportsubsectionpart.h"
common_reportsubsectionpart_t* instantiate_common_reportsubsectionpart(int include_optional);



common_reportsubsectionpart_t* instantiate_common_reportsubsectionpart(int include_optional) {
  common_reportsubsectionpart_t* common_reportsubsectionpart = NULL;
  if (include_optional) {
    common_reportsubsectionpart = common_reportsubsectionpart_create(
      ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_Header,
      list_createList()
    );
  } else {
    common_reportsubsectionpart = common_reportsubsectionpart_create(
      ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_Header,
      list_createList()
    );
  }

  return common_reportsubsectionpart;
}


#ifdef common_reportsubsectionpart_MAIN

void test_common_reportsubsectionpart(int include_optional) {
    common_reportsubsectionpart_t* common_reportsubsectionpart_1 = instantiate_common_reportsubsectionpart(include_optional);

	cJSON* jsoncommon_reportsubsectionpart_1 = common_reportsubsectionpart_convertToJSON(common_reportsubsectionpart_1);
	printf("common_reportsubsectionpart :\n%s\n", cJSON_Print(jsoncommon_reportsubsectionpart_1));
	common_reportsubsectionpart_t* common_reportsubsectionpart_2 = common_reportsubsectionpart_parseFromJSON(jsoncommon_reportsubsectionpart_1);
	cJSON* jsoncommon_reportsubsectionpart_2 = common_reportsubsectionpart_convertToJSON(common_reportsubsectionpart_2);
	printf("repeating common_reportsubsectionpart:\n%s\n", cJSON_Print(jsoncommon_reportsubsectionpart_2));
}

int main() {
  test_common_reportsubsectionpart(1);
  test_common_reportsubsectionpart(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_reportsubsectionpart_MAIN
#endif // common_reportsubsectionpart_TEST
