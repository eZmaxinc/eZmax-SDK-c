#ifndef ezsigntemplatesignature_response_TEST
#define ezsigntemplatesignature_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_response.h"
ezsigntemplatesignature_response_t* instantiate_ezsigntemplatesignature_response(int include_optional);



ezsigntemplatesignature_response_t* instantiate_ezsigntemplatesignature_response(int include_optional) {
  ezsigntemplatesignature_response_t* ezsigntemplatesignature_response = NULL;
  if (include_optional) {
    ezsigntemplatesignature_response = ezsigntemplatesignature_response_create(
      99,
      133,
      9,
      9,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_response__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"Description",
      1,
      75,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"None",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"AllOf"
    );
  } else {
    ezsigntemplatesignature_response = ezsigntemplatesignature_response_create(
      99,
      133,
      9,
      9,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_response__"Name",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"Normal",
      1,
      "Attachment",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"Description",
      1,
      75,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"None",
      ezmax_api_definition__full_ezsigntemplatesignature_response__"AllOf"
    );
  }

  return ezsigntemplatesignature_response;
}


#ifdef ezsigntemplatesignature_response_MAIN

void test_ezsigntemplatesignature_response(int include_optional) {
    ezsigntemplatesignature_response_t* ezsigntemplatesignature_response_1 = instantiate_ezsigntemplatesignature_response(include_optional);

	cJSON* jsonezsigntemplatesignature_response_1 = ezsigntemplatesignature_response_convertToJSON(ezsigntemplatesignature_response_1);
	printf("ezsigntemplatesignature_response :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_response_1));
	ezsigntemplatesignature_response_t* ezsigntemplatesignature_response_2 = ezsigntemplatesignature_response_parseFromJSON(jsonezsigntemplatesignature_response_1);
	cJSON* jsonezsigntemplatesignature_response_2 = ezsigntemplatesignature_response_convertToJSON(ezsigntemplatesignature_response_2);
	printf("repeating ezsigntemplatesignature_response:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_response_2));
}

int main() {
  test_ezsigntemplatesignature_response(1);
  test_ezsigntemplatesignature_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_response_MAIN
#endif // ezsigntemplatesignature_response_TEST
