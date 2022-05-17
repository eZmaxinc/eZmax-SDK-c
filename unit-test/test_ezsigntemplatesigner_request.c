#ifndef ezsigntemplatesigner_request_TEST
#define ezsigntemplatesigner_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesigner_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesigner_request.h"
ezsigntemplatesigner_request_t* instantiate_ezsigntemplatesigner_request(int include_optional);



ezsigntemplatesigner_request_t* instantiate_ezsigntemplatesigner_request(int include_optional) {
  ezsigntemplatesigner_request_t* ezsigntemplatesigner_request = NULL;
  if (include_optional) {
    ezsigntemplatesigner_request = ezsigntemplatesigner_request_create(
      9,
      36,
      "Customer"
    );
  } else {
    ezsigntemplatesigner_request = ezsigntemplatesigner_request_create(
      9,
      36,
      "Customer"
    );
  }

  return ezsigntemplatesigner_request;
}


#ifdef ezsigntemplatesigner_request_MAIN

void test_ezsigntemplatesigner_request(int include_optional) {
    ezsigntemplatesigner_request_t* ezsigntemplatesigner_request_1 = instantiate_ezsigntemplatesigner_request(include_optional);

	cJSON* jsonezsigntemplatesigner_request_1 = ezsigntemplatesigner_request_convertToJSON(ezsigntemplatesigner_request_1);
	printf("ezsigntemplatesigner_request :\n%s\n", cJSON_Print(jsonezsigntemplatesigner_request_1));
	ezsigntemplatesigner_request_t* ezsigntemplatesigner_request_2 = ezsigntemplatesigner_request_parseFromJSON(jsonezsigntemplatesigner_request_1);
	cJSON* jsonezsigntemplatesigner_request_2 = ezsigntemplatesigner_request_convertToJSON(ezsigntemplatesigner_request_2);
	printf("repeating ezsigntemplatesigner_request:\n%s\n", cJSON_Print(jsonezsigntemplatesigner_request_2));
}

int main() {
  test_ezsigntemplatesigner_request(1);
  test_ezsigntemplatesigner_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesigner_request_MAIN
#endif // ezsigntemplatesigner_request_TEST
