#ifndef colleague_request_compound_v2_TEST
#define colleague_request_compound_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define colleague_request_compound_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/colleague_request_compound_v2.h"
colleague_request_compound_v2_t* instantiate_colleague_request_compound_v2(int include_optional);



colleague_request_compound_v2_t* instantiate_colleague_request_compound_v2(int include_optional) {
  colleague_request_compound_v2_t* colleague_request_compound_v2 = NULL;
  if (include_optional) {
    colleague_request_compound_v2 = colleague_request_compound_v2_create(
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
      ezmax_api_definition__full_colleague_request_compound_v2__"Full",
      ezmax_api_definition__full_colleague_request_compound_v2__"Create"
    );
  } else {
    colleague_request_compound_v2 = colleague_request_compound_v2_create(
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
      ezmax_api_definition__full_colleague_request_compound_v2__"Full",
      ezmax_api_definition__full_colleague_request_compound_v2__"Create"
    );
  }

  return colleague_request_compound_v2;
}


#ifdef colleague_request_compound_v2_MAIN

void test_colleague_request_compound_v2(int include_optional) {
    colleague_request_compound_v2_t* colleague_request_compound_v2_1 = instantiate_colleague_request_compound_v2(include_optional);

	cJSON* jsoncolleague_request_compound_v2_1 = colleague_request_compound_v2_convertToJSON(colleague_request_compound_v2_1);
	printf("colleague_request_compound_v2 :\n%s\n", cJSON_Print(jsoncolleague_request_compound_v2_1));
	colleague_request_compound_v2_t* colleague_request_compound_v2_2 = colleague_request_compound_v2_parseFromJSON(jsoncolleague_request_compound_v2_1);
	cJSON* jsoncolleague_request_compound_v2_2 = colleague_request_compound_v2_convertToJSON(colleague_request_compound_v2_2);
	printf("repeating colleague_request_compound_v2:\n%s\n", cJSON_Print(jsoncolleague_request_compound_v2_2));
}

int main() {
  test_colleague_request_compound_v2(1);
  test_colleague_request_compound_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // colleague_request_compound_v2_MAIN
#endif // colleague_request_compound_v2_TEST
