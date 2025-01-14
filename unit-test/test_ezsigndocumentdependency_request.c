#ifndef ezsigndocumentdependency_request_TEST
#define ezsigndocumentdependency_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocumentdependency_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocumentdependency_request.h"
ezsigndocumentdependency_request_t* instantiate_ezsigndocumentdependency_request(int include_optional);



ezsigndocumentdependency_request_t* instantiate_ezsigndocumentdependency_request(int include_optional) {
  ezsigndocumentdependency_request_t* ezsigndocumentdependency_request = NULL;
  if (include_optional) {
    ezsigndocumentdependency_request = ezsigndocumentdependency_request_create(
      87,
      97
    );
  } else {
    ezsigndocumentdependency_request = ezsigndocumentdependency_request_create(
      87,
      97
    );
  }

  return ezsigndocumentdependency_request;
}


#ifdef ezsigndocumentdependency_request_MAIN

void test_ezsigndocumentdependency_request(int include_optional) {
    ezsigndocumentdependency_request_t* ezsigndocumentdependency_request_1 = instantiate_ezsigndocumentdependency_request(include_optional);

	cJSON* jsonezsigndocumentdependency_request_1 = ezsigndocumentdependency_request_convertToJSON(ezsigndocumentdependency_request_1);
	printf("ezsigndocumentdependency_request :\n%s\n", cJSON_Print(jsonezsigndocumentdependency_request_1));
	ezsigndocumentdependency_request_t* ezsigndocumentdependency_request_2 = ezsigndocumentdependency_request_parseFromJSON(jsonezsigndocumentdependency_request_1);
	cJSON* jsonezsigndocumentdependency_request_2 = ezsigndocumentdependency_request_convertToJSON(ezsigndocumentdependency_request_2);
	printf("repeating ezsigndocumentdependency_request:\n%s\n", cJSON_Print(jsonezsigndocumentdependency_request_2));
}

int main() {
  test_ezsigndocumentdependency_request(1);
  test_ezsigndocumentdependency_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocumentdependency_request_MAIN
#endif // ezsigndocumentdependency_request_TEST
