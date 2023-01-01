#ifndef ezsigntemplatedocument_request_TEST
#define ezsigntemplatedocument_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_request.h"
ezsigntemplatedocument_request_t* instantiate_ezsigntemplatedocument_request(int include_optional);



ezsigntemplatedocument_request_t* instantiate_ezsigntemplatedocument_request(int include_optional) {
  ezsigntemplatedocument_request_t* ezsigntemplatedocument_request = NULL;
  if (include_optional) {
    ezsigntemplatedocument_request = ezsigntemplatedocument_request_create(
      133,
      36,
      97,
      9,
      "Standard Contract",
      ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_Pdf,
      "[B@62163b39",
      "http://www.example.com/template.pdf",
      1,
      ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_Keep,
      "0"
    );
  } else {
    ezsigntemplatedocument_request = ezsigntemplatedocument_request_create(
      133,
      36,
      97,
      9,
      "Standard Contract",
      ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTSOURCE_Base64,
      ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORMAT_Pdf,
      "[B@62163b39",
      "http://www.example.com/template.pdf",
      1,
      ezmax_api_definition__full_ezsigntemplatedocument_request_EEZSIGNTEMPLATEDOCUMENTFORM_Keep,
      "0"
    );
  }

  return ezsigntemplatedocument_request;
}


#ifdef ezsigntemplatedocument_request_MAIN

void test_ezsigntemplatedocument_request(int include_optional) {
    ezsigntemplatedocument_request_t* ezsigntemplatedocument_request_1 = instantiate_ezsigntemplatedocument_request(include_optional);

	cJSON* jsonezsigntemplatedocument_request_1 = ezsigntemplatedocument_request_convertToJSON(ezsigntemplatedocument_request_1);
	printf("ezsigntemplatedocument_request :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_request_1));
	ezsigntemplatedocument_request_t* ezsigntemplatedocument_request_2 = ezsigntemplatedocument_request_parseFromJSON(jsonezsigntemplatedocument_request_1);
	cJSON* jsonezsigntemplatedocument_request_2 = ezsigntemplatedocument_request_convertToJSON(ezsigntemplatedocument_request_2);
	printf("repeating ezsigntemplatedocument_request:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_request_2));
}

int main() {
  test_ezsigntemplatedocument_request(1);
  test_ezsigntemplatedocument_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_request_MAIN
#endif // ezsigntemplatedocument_request_TEST
