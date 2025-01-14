#ifndef colleague_response_compound_v2_TEST
#define colleague_response_compound_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define colleague_response_compound_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/colleague_response_compound_v2.h"
colleague_response_compound_v2_t* instantiate_colleague_response_compound_v2(int include_optional);

#include "test_custom_user_name_response.c"
#include "test_common_audit.c"


colleague_response_compound_v2_t* instantiate_colleague_response_compound_v2(int include_optional) {
  colleague_response_compound_v2_t* colleague_response_compound_v2 = NULL;
  if (include_optional) {
    colleague_response_compound_v2 = colleague_response_compound_v2_create(
      60,
      70,
      70,
      false,
      true,
      true,
      true,
      true,
      true,
      true,
      "2020-12-31",
      "2020-12-31",
      ezmax_api_definition__full_colleague_response_compound_v2__"Full",
      ezmax_api_definition__full_colleague_response_compound_v2__"Create",
       // false, not to have infinite recursion
      instantiate_custom_user_name_response(0),
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    colleague_response_compound_v2 = colleague_response_compound_v2_create(
      60,
      70,
      70,
      false,
      true,
      true,
      true,
      true,
      true,
      true,
      "2020-12-31",
      "2020-12-31",
      ezmax_api_definition__full_colleague_response_compound_v2__"Full",
      ezmax_api_definition__full_colleague_response_compound_v2__"Create",
      NULL,
      NULL
    );
  }

  return colleague_response_compound_v2;
}


#ifdef colleague_response_compound_v2_MAIN

void test_colleague_response_compound_v2(int include_optional) {
    colleague_response_compound_v2_t* colleague_response_compound_v2_1 = instantiate_colleague_response_compound_v2(include_optional);

	cJSON* jsoncolleague_response_compound_v2_1 = colleague_response_compound_v2_convertToJSON(colleague_response_compound_v2_1);
	printf("colleague_response_compound_v2 :\n%s\n", cJSON_Print(jsoncolleague_response_compound_v2_1));
	colleague_response_compound_v2_t* colleague_response_compound_v2_2 = colleague_response_compound_v2_parseFromJSON(jsoncolleague_response_compound_v2_1);
	cJSON* jsoncolleague_response_compound_v2_2 = colleague_response_compound_v2_convertToJSON(colleague_response_compound_v2_2);
	printf("repeating colleague_response_compound_v2:\n%s\n", cJSON_Print(jsoncolleague_response_compound_v2_2));
}

int main() {
  test_colleague_response_compound_v2(1);
  test_colleague_response_compound_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // colleague_response_compound_v2_MAIN
#endif // colleague_response_compound_v2_TEST
