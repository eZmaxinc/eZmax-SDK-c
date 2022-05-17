#ifndef ezsigntemplatedocumentpage_response_TEST
#define ezsigntemplatedocumentpage_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocumentpage_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocumentpage_response.h"
ezsigntemplatedocumentpage_response_t* instantiate_ezsigntemplatedocumentpage_response(int include_optional);



ezsigntemplatedocumentpage_response_t* instantiate_ezsigntemplatedocumentpage_response(int include_optional) {
  ezsigntemplatedocumentpage_response_t* ezsigntemplatedocumentpage_response = NULL;
  if (include_optional) {
    ezsigntemplatedocumentpage_response = ezsigntemplatedocumentpage_response_create(
      85,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  } else {
    ezsigntemplatedocumentpage_response = ezsigntemplatedocumentpage_response_create(
      85,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  }

  return ezsigntemplatedocumentpage_response;
}


#ifdef ezsigntemplatedocumentpage_response_MAIN

void test_ezsigntemplatedocumentpage_response(int include_optional) {
    ezsigntemplatedocumentpage_response_t* ezsigntemplatedocumentpage_response_1 = instantiate_ezsigntemplatedocumentpage_response(include_optional);

	cJSON* jsonezsigntemplatedocumentpage_response_1 = ezsigntemplatedocumentpage_response_convertToJSON(ezsigntemplatedocumentpage_response_1);
	printf("ezsigntemplatedocumentpage_response :\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpage_response_1));
	ezsigntemplatedocumentpage_response_t* ezsigntemplatedocumentpage_response_2 = ezsigntemplatedocumentpage_response_parseFromJSON(jsonezsigntemplatedocumentpage_response_1);
	cJSON* jsonezsigntemplatedocumentpage_response_2 = ezsigntemplatedocumentpage_response_convertToJSON(ezsigntemplatedocumentpage_response_2);
	printf("repeating ezsigntemplatedocumentpage_response:\n%s\n", cJSON_Print(jsonezsigntemplatedocumentpage_response_2));
}

int main() {
  test_ezsigntemplatedocumentpage_response(1);
  test_ezsigntemplatedocumentpage_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocumentpage_response_MAIN
#endif // ezsigntemplatedocumentpage_response_TEST
