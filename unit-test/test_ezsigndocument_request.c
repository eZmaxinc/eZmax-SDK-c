#ifndef ezsigndocument_request_TEST
#define ezsigndocument_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_request.h"
ezsigndocument_request_t* instantiate_ezsigndocument_request(int include_optional);



ezsigndocument_request_t* instantiate_ezsigndocument_request(int include_optional) {
  ezsigndocument_request_t* ezsigndocument_request = NULL;
  if (include_optional) {
    ezsigndocument_request = ezsigndocument_request_create(
      97,
      33,
      36,
      20,
      2,
      ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_Pdf,
      "[B@45cff11c",
      "http://www.example.com/document.pdf",
      1,
      "SecretPassword123",
      ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_Keep,
      "2020-12-31 23:59:59",
      "Contract #123",
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  } else {
    ezsigndocument_request = ezsigndocument_request_create(
      97,
      33,
      36,
      20,
      2,
      ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_Pdf,
      "[B@45cff11c",
      "http://www.example.com/document.pdf",
      1,
      "SecretPassword123",
      ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_Keep,
      "2020-12-31 23:59:59",
      "Contract #123",
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  }

  return ezsigndocument_request;
}


#ifdef ezsigndocument_request_MAIN

void test_ezsigndocument_request(int include_optional) {
    ezsigndocument_request_t* ezsigndocument_request_1 = instantiate_ezsigndocument_request(include_optional);

	cJSON* jsonezsigndocument_request_1 = ezsigndocument_request_convertToJSON(ezsigndocument_request_1);
	printf("ezsigndocument_request :\n%s\n", cJSON_Print(jsonezsigndocument_request_1));
	ezsigndocument_request_t* ezsigndocument_request_2 = ezsigndocument_request_parseFromJSON(jsonezsigndocument_request_1);
	cJSON* jsonezsigndocument_request_2 = ezsigndocument_request_convertToJSON(ezsigndocument_request_2);
	printf("repeating ezsigndocument_request:\n%s\n", cJSON_Print(jsonezsigndocument_request_2));
}

int main() {
  test_ezsigndocument_request(1);
  test_ezsigndocument_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_request_MAIN
#endif // ezsigndocument_request_TEST
