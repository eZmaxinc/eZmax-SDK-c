#ifndef ezsigndocument_request_compound_TEST
#define ezsigndocument_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_request_compound.h"
ezsigndocument_request_compound_t* instantiate_ezsigndocument_request_compound(int include_optional);



ezsigndocument_request_compound_t* instantiate_ezsigndocument_request_compound(int include_optional) {
  ezsigndocument_request_compound_t* ezsigndocument_request_compound = NULL;
  if (include_optional) {
    ezsigndocument_request_compound = ezsigndocument_request_compound_create(
      97,
      33,
      36,
      20,
      2,
      ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_Pdf,
      "[B@45cff11c",
      "http://www.example.com/document.pdf",
      1,
      "SecretPassword123",
      ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORM_Keep,
      "2020-12-31 23:59:59",
      "Contract #123",
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  } else {
    ezsigndocument_request_compound = ezsigndocument_request_compound_create(
      97,
      33,
      36,
      20,
      2,
      ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_Pdf,
      "[B@45cff11c",
      "http://www.example.com/document.pdf",
      1,
      "SecretPassword123",
      ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORM_Keep,
      "2020-12-31 23:59:59",
      "Contract #123",
      "{"ID": 1234, "TAGS": ["tag1", "tag2", "tag3"]}"
    );
  }

  return ezsigndocument_request_compound;
}


#ifdef ezsigndocument_request_compound_MAIN

void test_ezsigndocument_request_compound(int include_optional) {
    ezsigndocument_request_compound_t* ezsigndocument_request_compound_1 = instantiate_ezsigndocument_request_compound(include_optional);

	cJSON* jsonezsigndocument_request_compound_1 = ezsigndocument_request_compound_convertToJSON(ezsigndocument_request_compound_1);
	printf("ezsigndocument_request_compound :\n%s\n", cJSON_Print(jsonezsigndocument_request_compound_1));
	ezsigndocument_request_compound_t* ezsigndocument_request_compound_2 = ezsigndocument_request_compound_parseFromJSON(jsonezsigndocument_request_compound_1);
	cJSON* jsonezsigndocument_request_compound_2 = ezsigndocument_request_compound_convertToJSON(ezsigndocument_request_compound_2);
	printf("repeating ezsigndocument_request_compound:\n%s\n", cJSON_Print(jsonezsigndocument_request_compound_2));
}

int main() {
  test_ezsigndocument_request_compound(1);
  test_ezsigndocument_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_request_compound_MAIN
#endif // ezsigndocument_request_compound_TEST
