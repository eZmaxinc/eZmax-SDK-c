#ifndef ezsigndocumentdependency_request_compound_TEST
#define ezsigndocumentdependency_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocumentdependency_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocumentdependency_request_compound.h"
ezsigndocumentdependency_request_compound_t* instantiate_ezsigndocumentdependency_request_compound(int include_optional);



ezsigndocumentdependency_request_compound_t* instantiate_ezsigndocumentdependency_request_compound(int include_optional) {
  ezsigndocumentdependency_request_compound_t* ezsigndocumentdependency_request_compound = NULL;
  if (include_optional) {
    ezsigndocumentdependency_request_compound = ezsigndocumentdependency_request_compound_create(
      87,
      97
    );
  } else {
    ezsigndocumentdependency_request_compound = ezsigndocumentdependency_request_compound_create(
      87,
      97
    );
  }

  return ezsigndocumentdependency_request_compound;
}


#ifdef ezsigndocumentdependency_request_compound_MAIN

void test_ezsigndocumentdependency_request_compound(int include_optional) {
    ezsigndocumentdependency_request_compound_t* ezsigndocumentdependency_request_compound_1 = instantiate_ezsigndocumentdependency_request_compound(include_optional);

	cJSON* jsonezsigndocumentdependency_request_compound_1 = ezsigndocumentdependency_request_compound_convertToJSON(ezsigndocumentdependency_request_compound_1);
	printf("ezsigndocumentdependency_request_compound :\n%s\n", cJSON_Print(jsonezsigndocumentdependency_request_compound_1));
	ezsigndocumentdependency_request_compound_t* ezsigndocumentdependency_request_compound_2 = ezsigndocumentdependency_request_compound_parseFromJSON(jsonezsigndocumentdependency_request_compound_1);
	cJSON* jsonezsigndocumentdependency_request_compound_2 = ezsigndocumentdependency_request_compound_convertToJSON(ezsigndocumentdependency_request_compound_2);
	printf("repeating ezsigndocumentdependency_request_compound:\n%s\n", cJSON_Print(jsonezsigndocumentdependency_request_compound_2));
}

int main() {
  test_ezsigndocumentdependency_request_compound(1);
  test_ezsigndocumentdependency_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocumentdependency_request_compound_MAIN
#endif // ezsigndocumentdependency_request_compound_TEST
