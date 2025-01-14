#ifndef ezsigntemplatesignaturecustomdate_request_compound_v2_TEST
#define ezsigntemplatesignaturecustomdate_request_compound_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignaturecustomdate_request_compound_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignaturecustomdate_request_compound_v2.h"
ezsigntemplatesignaturecustomdate_request_compound_v2_t* instantiate_ezsigntemplatesignaturecustomdate_request_compound_v2(int include_optional);



ezsigntemplatesignaturecustomdate_request_compound_v2_t* instantiate_ezsigntemplatesignaturecustomdate_request_compound_v2(int include_optional) {
  ezsigntemplatesignaturecustomdate_request_compound_v2_t* ezsigntemplatesignaturecustomdate_request_compound_v2 = NULL;
  if (include_optional) {
    ezsigntemplatesignaturecustomdate_request_compound_v2 = ezsigntemplatesignaturecustomdate_request_compound_v2_create(
      58,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsigntemplatesignaturecustomdate_request_compound_v2 = ezsigntemplatesignaturecustomdate_request_compound_v2_create(
      58,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsigntemplatesignaturecustomdate_request_compound_v2;
}


#ifdef ezsigntemplatesignaturecustomdate_request_compound_v2_MAIN

void test_ezsigntemplatesignaturecustomdate_request_compound_v2(int include_optional) {
    ezsigntemplatesignaturecustomdate_request_compound_v2_t* ezsigntemplatesignaturecustomdate_request_compound_v2_1 = instantiate_ezsigntemplatesignaturecustomdate_request_compound_v2(include_optional);

	cJSON* jsonezsigntemplatesignaturecustomdate_request_compound_v2_1 = ezsigntemplatesignaturecustomdate_request_compound_v2_convertToJSON(ezsigntemplatesignaturecustomdate_request_compound_v2_1);
	printf("ezsigntemplatesignaturecustomdate_request_compound_v2 :\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_request_compound_v2_1));
	ezsigntemplatesignaturecustomdate_request_compound_v2_t* ezsigntemplatesignaturecustomdate_request_compound_v2_2 = ezsigntemplatesignaturecustomdate_request_compound_v2_parseFromJSON(jsonezsigntemplatesignaturecustomdate_request_compound_v2_1);
	cJSON* jsonezsigntemplatesignaturecustomdate_request_compound_v2_2 = ezsigntemplatesignaturecustomdate_request_compound_v2_convertToJSON(ezsigntemplatesignaturecustomdate_request_compound_v2_2);
	printf("repeating ezsigntemplatesignaturecustomdate_request_compound_v2:\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_request_compound_v2_2));
}

int main() {
  test_ezsigntemplatesignaturecustomdate_request_compound_v2(1);
  test_ezsigntemplatesignaturecustomdate_request_compound_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignaturecustomdate_request_compound_v2_MAIN
#endif // ezsigntemplatesignaturecustomdate_request_compound_v2_TEST
