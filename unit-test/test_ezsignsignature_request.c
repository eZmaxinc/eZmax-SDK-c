#ifndef ezsignsignature_request_TEST
#define ezsignsignature_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_request.h"
ezsignsignature_request_t* instantiate_ezsignsignature_request(int include_optional);



ezsignsignature_request_t* instantiate_ezsignsignature_request(int include_optional) {
  ezsignsignature_request_t* ezsignsignature_request = NULL;
  if (include_optional) {
    ezsignsignature_request = ezsignsignature_request_create(
      49,
      20,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsignsignature_request__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_request__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_request__Normal
    );
  } else {
    ezsignsignature_request = ezsignsignature_request_create(
      49,
      20,
      1,
      200,
      300,
      1,
      ezmax_api_definition__full_ezsignsignature_request__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_ezsignsignature_request__"TopLeft",
      ezmax_api_definition__full_ezsignsignature_request__Normal
    );
  }

  return ezsignsignature_request;
}


#ifdef ezsignsignature_request_MAIN

void test_ezsignsignature_request(int include_optional) {
    ezsignsignature_request_t* ezsignsignature_request_1 = instantiate_ezsignsignature_request(include_optional);

	cJSON* jsonezsignsignature_request_1 = ezsignsignature_request_convertToJSON(ezsignsignature_request_1);
	printf("ezsignsignature_request :\n%s\n", cJSON_Print(jsonezsignsignature_request_1));
	ezsignsignature_request_t* ezsignsignature_request_2 = ezsignsignature_request_parseFromJSON(jsonezsignsignature_request_1);
	cJSON* jsonezsignsignature_request_2 = ezsignsignature_request_convertToJSON(ezsignsignature_request_2);
	printf("repeating ezsignsignature_request:\n%s\n", cJSON_Print(jsonezsignsignature_request_2));
}

int main() {
  test_ezsignsignature_request(1);
  test_ezsignsignature_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_request_MAIN
#endif // ezsignsignature_request_TEST
