#ifndef ezsigntemplatesignaturecustomdate_response_TEST
#define ezsigntemplatesignaturecustomdate_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignaturecustomdate_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignaturecustomdate_response.h"
ezsigntemplatesignaturecustomdate_response_t* instantiate_ezsigntemplatesignaturecustomdate_response(int include_optional);



ezsigntemplatesignaturecustomdate_response_t* instantiate_ezsigntemplatesignaturecustomdate_response(int include_optional) {
  ezsigntemplatesignaturecustomdate_response_t* ezsigntemplatesignaturecustomdate_response = NULL;
  if (include_optional) {
    ezsigntemplatesignaturecustomdate_response = ezsigntemplatesignaturecustomdate_response_create(
      58,
      200,
      300,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsigntemplatesignaturecustomdate_response = ezsigntemplatesignaturecustomdate_response_create(
      58,
      200,
      300,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsigntemplatesignaturecustomdate_response;
}


#ifdef ezsigntemplatesignaturecustomdate_response_MAIN

void test_ezsigntemplatesignaturecustomdate_response(int include_optional) {
    ezsigntemplatesignaturecustomdate_response_t* ezsigntemplatesignaturecustomdate_response_1 = instantiate_ezsigntemplatesignaturecustomdate_response(include_optional);

	cJSON* jsonezsigntemplatesignaturecustomdate_response_1 = ezsigntemplatesignaturecustomdate_response_convertToJSON(ezsigntemplatesignaturecustomdate_response_1);
	printf("ezsigntemplatesignaturecustomdate_response :\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_response_1));
	ezsigntemplatesignaturecustomdate_response_t* ezsigntemplatesignaturecustomdate_response_2 = ezsigntemplatesignaturecustomdate_response_parseFromJSON(jsonezsigntemplatesignaturecustomdate_response_1);
	cJSON* jsonezsigntemplatesignaturecustomdate_response_2 = ezsigntemplatesignaturecustomdate_response_convertToJSON(ezsigntemplatesignaturecustomdate_response_2);
	printf("repeating ezsigntemplatesignaturecustomdate_response:\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_response_2));
}

int main() {
  test_ezsigntemplatesignaturecustomdate_response(1);
  test_ezsigntemplatesignaturecustomdate_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignaturecustomdate_response_MAIN
#endif // ezsigntemplatesignaturecustomdate_response_TEST
