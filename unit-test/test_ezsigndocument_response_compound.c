#ifndef ezsigndocument_response_compound_TEST
#define ezsigndocument_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_response_compound.h"
ezsigndocument_response_compound_t* instantiate_ezsigndocument_response_compound(int include_optional);

#include "test_common_audit.c"


ezsigndocument_response_compound_t* instantiate_ezsigndocument_response_compound(int include_optional) {
  ezsigndocument_response_compound_t* ezsigndocument_response_compound = NULL;
  if (include_optional) {
    ezsigndocument_response_compound = ezsigndocument_response_compound_create(
      33,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      97,
      ezmax_api_definition__full_ezsigndocument_response_compound__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "012345678901234567890123456789AB",
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
      2,
      1,
      2,
      0,
      list_createList()
    );
  } else {
    ezsigndocument_response_compound = ezsigndocument_response_compound_create(
      33,
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      97,
      ezmax_api_definition__full_ezsigndocument_response_compound__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "012345678901234567890123456789AB",
      true,
      NULL,
      2,
      1,
      2,
      0,
      list_createList()
    );
  }

  return ezsigndocument_response_compound;
}


#ifdef ezsigndocument_response_compound_MAIN

void test_ezsigndocument_response_compound(int include_optional) {
    ezsigndocument_response_compound_t* ezsigndocument_response_compound_1 = instantiate_ezsigndocument_response_compound(include_optional);

	cJSON* jsonezsigndocument_response_compound_1 = ezsigndocument_response_compound_convertToJSON(ezsigndocument_response_compound_1);
	printf("ezsigndocument_response_compound :\n%s\n", cJSON_Print(jsonezsigndocument_response_compound_1));
	ezsigndocument_response_compound_t* ezsigndocument_response_compound_2 = ezsigndocument_response_compound_parseFromJSON(jsonezsigndocument_response_compound_1);
	cJSON* jsonezsigndocument_response_compound_2 = ezsigndocument_response_compound_convertToJSON(ezsigndocument_response_compound_2);
	printf("repeating ezsigndocument_response_compound:\n%s\n", cJSON_Print(jsonezsigndocument_response_compound_2));
}

int main() {
  test_ezsigndocument_response_compound(1);
  test_ezsigndocument_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_response_compound_MAIN
#endif // ezsigndocument_response_compound_TEST
