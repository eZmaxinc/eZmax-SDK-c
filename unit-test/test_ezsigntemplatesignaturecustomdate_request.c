#ifndef ezsigntemplatesignaturecustomdate_request_TEST
#define ezsigntemplatesignaturecustomdate_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignaturecustomdate_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignaturecustomdate_request.h"
ezsigntemplatesignaturecustomdate_request_t* instantiate_ezsigntemplatesignaturecustomdate_request(int include_optional);



ezsigntemplatesignaturecustomdate_request_t* instantiate_ezsigntemplatesignaturecustomdate_request(int include_optional) {
  ezsigntemplatesignaturecustomdate_request_t* ezsigntemplatesignaturecustomdate_request = NULL;
  if (include_optional) {
    ezsigntemplatesignaturecustomdate_request = ezsigntemplatesignaturecustomdate_request_create(
      58,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsigntemplatesignaturecustomdate_request = ezsigntemplatesignaturecustomdate_request_create(
      58,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsigntemplatesignaturecustomdate_request;
}


#ifdef ezsigntemplatesignaturecustomdate_request_MAIN

void test_ezsigntemplatesignaturecustomdate_request(int include_optional) {
    ezsigntemplatesignaturecustomdate_request_t* ezsigntemplatesignaturecustomdate_request_1 = instantiate_ezsigntemplatesignaturecustomdate_request(include_optional);

	cJSON* jsonezsigntemplatesignaturecustomdate_request_1 = ezsigntemplatesignaturecustomdate_request_convertToJSON(ezsigntemplatesignaturecustomdate_request_1);
	printf("ezsigntemplatesignaturecustomdate_request :\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_request_1));
	ezsigntemplatesignaturecustomdate_request_t* ezsigntemplatesignaturecustomdate_request_2 = ezsigntemplatesignaturecustomdate_request_parseFromJSON(jsonezsigntemplatesignaturecustomdate_request_1);
	cJSON* jsonezsigntemplatesignaturecustomdate_request_2 = ezsigntemplatesignaturecustomdate_request_convertToJSON(ezsigntemplatesignaturecustomdate_request_2);
	printf("repeating ezsigntemplatesignaturecustomdate_request:\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_request_2));
}

int main() {
  test_ezsigntemplatesignaturecustomdate_request(1);
  test_ezsigntemplatesignaturecustomdate_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignaturecustomdate_request_MAIN
#endif // ezsigntemplatesignaturecustomdate_request_TEST
