#ifndef ezsigndocumentlog_response_TEST
#define ezsigndocumentlog_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocumentlog_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocumentlog_response.h"
ezsigndocumentlog_response_t* instantiate_ezsigndocumentlog_response(int include_optional);



ezsigndocumentlog_response_t* instantiate_ezsigndocumentlog_response(int include_optional) {
  ezsigndocumentlog_response_t* ezsigndocumentlog_response = NULL;
  if (include_optional) {
    ezsigndocumentlog_response = ezsigndocumentlog_response_create(
      70,
      89,
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsigndocumentlog_response__"Createpage",
      "Page 1 MD5: a56bbc742ba2a4d074f2493550cf6ea5",
      "Doe",
      "John",
      "127.0.0.1"
    );
  } else {
    ezsigndocumentlog_response = ezsigndocumentlog_response_create(
      70,
      89,
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsigndocumentlog_response__"Createpage",
      "Page 1 MD5: a56bbc742ba2a4d074f2493550cf6ea5",
      "Doe",
      "John",
      "127.0.0.1"
    );
  }

  return ezsigndocumentlog_response;
}


#ifdef ezsigndocumentlog_response_MAIN

void test_ezsigndocumentlog_response(int include_optional) {
    ezsigndocumentlog_response_t* ezsigndocumentlog_response_1 = instantiate_ezsigndocumentlog_response(include_optional);

	cJSON* jsonezsigndocumentlog_response_1 = ezsigndocumentlog_response_convertToJSON(ezsigndocumentlog_response_1);
	printf("ezsigndocumentlog_response :\n%s\n", cJSON_Print(jsonezsigndocumentlog_response_1));
	ezsigndocumentlog_response_t* ezsigndocumentlog_response_2 = ezsigndocumentlog_response_parseFromJSON(jsonezsigndocumentlog_response_1);
	cJSON* jsonezsigndocumentlog_response_2 = ezsigndocumentlog_response_convertToJSON(ezsigndocumentlog_response_2);
	printf("repeating ezsigndocumentlog_response:\n%s\n", cJSON_Print(jsonezsigndocumentlog_response_2));
}

int main() {
  test_ezsigndocumentlog_response(1);
  test_ezsigndocumentlog_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocumentlog_response_MAIN
#endif // ezsigndocumentlog_response_TEST
