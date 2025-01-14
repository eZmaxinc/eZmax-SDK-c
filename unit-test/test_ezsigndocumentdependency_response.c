#ifndef ezsigndocumentdependency_response_TEST
#define ezsigndocumentdependency_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocumentdependency_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocumentdependency_response.h"
ezsigndocumentdependency_response_t* instantiate_ezsigndocumentdependency_response(int include_optional);



ezsigndocumentdependency_response_t* instantiate_ezsigndocumentdependency_response(int include_optional) {
  ezsigndocumentdependency_response_t* ezsigndocumentdependency_response = NULL;
  if (include_optional) {
    ezsigndocumentdependency_response = ezsigndocumentdependency_response_create(
      87,
      97
    );
  } else {
    ezsigndocumentdependency_response = ezsigndocumentdependency_response_create(
      87,
      97
    );
  }

  return ezsigndocumentdependency_response;
}


#ifdef ezsigndocumentdependency_response_MAIN

void test_ezsigndocumentdependency_response(int include_optional) {
    ezsigndocumentdependency_response_t* ezsigndocumentdependency_response_1 = instantiate_ezsigndocumentdependency_response(include_optional);

	cJSON* jsonezsigndocumentdependency_response_1 = ezsigndocumentdependency_response_convertToJSON(ezsigndocumentdependency_response_1);
	printf("ezsigndocumentdependency_response :\n%s\n", cJSON_Print(jsonezsigndocumentdependency_response_1));
	ezsigndocumentdependency_response_t* ezsigndocumentdependency_response_2 = ezsigndocumentdependency_response_parseFromJSON(jsonezsigndocumentdependency_response_1);
	cJSON* jsonezsigndocumentdependency_response_2 = ezsigndocumentdependency_response_convertToJSON(ezsigndocumentdependency_response_2);
	printf("repeating ezsigndocumentdependency_response:\n%s\n", cJSON_Print(jsonezsigndocumentdependency_response_2));
}

int main() {
  test_ezsigndocumentdependency_response(1);
  test_ezsigndocumentdependency_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocumentdependency_response_MAIN
#endif // ezsigndocumentdependency_response_TEST
