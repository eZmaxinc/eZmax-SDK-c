#ifndef ezsigndocument_response_TEST
#define ezsigndocument_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_response.h"
ezsigndocument_response_t* instantiate_ezsigndocument_response(int include_optional);

#include "test_common_audit.c"


ezsigndocument_response_t* instantiate_ezsigndocument_response(int include_optional) {
  ezsigndocument_response_t* ezsigndocument_response = NULL;
  if (include_optional) {
    ezsigndocument_response = ezsigndocument_response_create(
      33,
      20,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      97,
      ezmax_api_definition__full_ezsigndocument_response__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "The conditions in the contract are different than those discuted",
      "012345678901234567890123456789AB",
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsigndocument_response = ezsigndocument_response_create(
      33,
      20,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      97,
      ezmax_api_definition__full_ezsigndocument_response__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "The conditions in the contract are different than those discuted",
      "012345678901234567890123456789AB",
      true,
      NULL
    );
  }

  return ezsigndocument_response;
}


#ifdef ezsigndocument_response_MAIN

void test_ezsigndocument_response(int include_optional) {
    ezsigndocument_response_t* ezsigndocument_response_1 = instantiate_ezsigndocument_response(include_optional);

	cJSON* jsonezsigndocument_response_1 = ezsigndocument_response_convertToJSON(ezsigndocument_response_1);
	printf("ezsigndocument_response :\n%s\n", cJSON_Print(jsonezsigndocument_response_1));
	ezsigndocument_response_t* ezsigndocument_response_2 = ezsigndocument_response_parseFromJSON(jsonezsigndocument_response_1);
	cJSON* jsonezsigndocument_response_2 = ezsigndocument_response_convertToJSON(ezsigndocument_response_2);
	printf("repeating ezsigndocument_response:\n%s\n", cJSON_Print(jsonezsigndocument_response_2));
}

int main() {
  test_ezsigndocument_response(1);
  test_ezsigndocument_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_response_MAIN
#endif // ezsigndocument_response_TEST
