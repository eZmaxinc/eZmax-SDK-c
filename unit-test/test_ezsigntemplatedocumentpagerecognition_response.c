#ifndef ezsigntemplatedocumentpagerecognition_response_TEST
#define ezsigntemplatedocumentpagerecognition_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpagerecognition_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpagerecognition_response.h"
ezsigntemplatedocumentpagerecognition_response_t* instantiate_ezsigntemplatedocumentpagerecognition_response(int include_optional);



ezsigntemplatedocumentpagerecognition_response_t* instantiate_ezsigntemplatedocumentpagerecognition_response(int include_optional) {
  ezsigntemplatedocumentpagerecognition_response_t* ezsigntemplatedocumentpagerecognition_response = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpagerecognition_response = ezsigntemplatedocumentpagerecognition_response_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response__"FirstLine",
      75,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  } else {
    ezsigntemplatedocumentpagerecognition_response = ezsigntemplatedocumentpagerecognition_response_create(
      126,
      85,
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response__"eq",
      ezmax_api_definition__full_ezsigntemplatedocumentpagerecognition_response__"FirstLine",
      75,
      36325,
      407,
      29232,
      42651,
      "Contract"
    );
  }

  return ezsigntemplatedocumentpagerecognition_response;
}


#ifdef ezsigntemplatedocumentpagerecognition_response_MAIN

void test_ezsigntemplatedocumentpagerecognition_response(int include_optional) {
    ezsigntemplatedocumentpagerecognition_response_t* ezsigntemplatedocumentpagerecognition_response_1 = instantiate_ezsigntemplatedocumentpagerecognition_response(include_optional);

	cJSON* jsonezsigntemplatedocumentpagerecognition_response_1 = ezsigntemplatedocumentpagerecognition_response_convertToJSON(ezsigntemplatedocumentpagerecognition_response_1);
	printf("ezsigntemplatedocumentpagerecognition_response :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_response_1));
	ezsigntemplatedocumentpagerecognition_response_t* ezsigntemplatedocumentpagerecognition_response_2 = ezsigntemplatedocumentpagerecognition_response_parseFromJSON(jsonezsigntemplatedocumentpagerecognition_response_1);
	cJSON* jsonezsigntemplatedocumentpagerecognition_response_2 = ezsigntemplatedocumentpagerecognition_response_convertToJSON(ezsigntemplatedocumentpagerecognition_response_2);
	printf("repeating ezsigntemplatedocumentpagerecognition_response:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpagerecognition_response_2));
}

int main() {
  test_ezsigntemplatedocumentpagerecognition_response(1);
  test_ezsigntemplatedocumentpagerecognition_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpagerecognition_response_MAIN
#endif // ezsigntemplatedocumentpagerecognition_response_TEST
