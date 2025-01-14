#ifndef ezsigntemplatesignature_request_TEST
#define ezsigntemplatesignature_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_request.h"
ezsigntemplatesignature_request_t* instantiate_ezsigntemplatesignature_request(int include_optional);



ezsigntemplatesignature_request_t* instantiate_ezsigntemplatesignature_request(int include_optional) {
  ezsigntemplatesignature_request_t* ezsigntemplatesignature_request = NULL;
  if (include_optional) {
    ezsigntemplatesignature_request = ezsigntemplatesignature_request_create(
      99,
      133,
      9,
      9,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"PerCoordinates",
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Signature",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Manual",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Normal",
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Description",
      "Attachment",
      1,
      75,
      "Foo",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"None",
      "Phone number",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"All"
    );
  } else {
    ezsigntemplatesignature_request = ezsigntemplatesignature_request_create(
      99,
      133,
      9,
      9,
      1,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"PerCoordinates",
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Signature",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Manual",
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"TopLeft",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Normal",
      1,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"Description",
      "Attachment",
      1,
      75,
      "Foo",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"None",
      "Phone number",
      ezmax_api_definition__full_ezsigntemplatesignature_request__"AllOf",
      "Signature",
      200,
      200,
      ezmax_api_definition__full_ezsigntemplatesignature_request__"All"
    );
  }

  return ezsigntemplatesignature_request;
}


#ifdef ezsigntemplatesignature_request_MAIN

void test_ezsigntemplatesignature_request(int include_optional) {
    ezsigntemplatesignature_request_t* ezsigntemplatesignature_request_1 = instantiate_ezsigntemplatesignature_request(include_optional);

	cJSON* jsonezsigntemplatesignature_request_1 = ezsigntemplatesignature_request_convertToJSON(ezsigntemplatesignature_request_1);
	printf("ezsigntemplatesignature_request :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_1));
	ezsigntemplatesignature_request_t* ezsigntemplatesignature_request_2 = ezsigntemplatesignature_request_parseFromJSON(jsonezsigntemplatesignature_request_1);
	cJSON* jsonezsigntemplatesignature_request_2 = ezsigntemplatesignature_request_convertToJSON(ezsigntemplatesignature_request_2);
	printf("repeating ezsigntemplatesignature_request:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_2));
}

int main() {
  test_ezsigntemplatesignature_request(1);
  test_ezsigntemplatesignature_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_request_MAIN
#endif // ezsigntemplatesignature_request_TEST
