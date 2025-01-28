#ifndef ezsigntemplatedocumentpagerecognition_request_TEST
#define ezsigntemplatedocumentpagerecognition_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpagerecognition_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpagerecognition_request.h"
ezsigntemplatedocumentpagerecognition_request_t* instantiate_ezsigntemplatedocumentpagerecognition_request(int include_optional);



ezsigntemplatedocumentpagerecognition_request_t* instantiate_ezsigntemplatedocumentpagerecognition_request(int include_optional) {
  ezsigntemplatedocumentpagerecognition_request_t* ezsigntemplatedocumentpagerecognition_request = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpagerecognition_request = ezsigntemplatedocumentpagerecognition_request_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__"FirstLine",
      75,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  } else {
    ezsigntemplatedocumentpagerecognition_request = ezsigntemplatedocumentpagerecognition_request_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_request__"FirstLine",
      75,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  }

  return ezsigntemplatedocumentpagerecognition_request;
}


#ifdef ezsigntemplatedocumentpagerecognition_request_MAIN

void test_ezsigntemplatedocumentpagerecognition_request(int include_optional) {
    ezsigntemplatedocumentpagerecognition_request_t* ezsigntemplatedocumentpagerecognition_request_1 = instantiate_ezsigntemplatedocumentpagerecognition_request(include_optional);

	cJSON* jsonezsigntemplatedocumentpagerecognition_request_1 = ezsigntemplatedocumentpagerecognition_request_convertToJSON(ezsigntemplatedocumentpagerecognition_request_1);
	printf("ezsigntemplatedocumentpagerecognition_request :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_request_1));
	ezsigntemplatedocumentpagerecognition_request_t* ezsigntemplatedocumentpagerecognition_request_2 = ezsigntemplatedocumentpagerecognition_request_parseFromJSON(jsonezsigntemplatedocumentpagerecognition_request_1);
	cJSON* jsonezsigntemplatedocumentpagerecognition_request_2 = ezsigntemplatedocumentpagerecognition_request_convertToJSON(ezsigntemplatedocumentpagerecognition_request_2);
	printf("repeating ezsigntemplatedocumentpagerecognition_request:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_request_2));
}

int main() {
  test_ezsigntemplatedocumentpagerecognition_request(1);
  test_ezsigntemplatedocumentpagerecognition_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpagerecognition_request_MAIN
#endif // ezsigntemplatedocumentpagerecognition_request_TEST
