#ifndef ezsigntemplatesignaturecustomdate_response_v2_TEST
#define ezsigntemplatesignaturecustomdate_response_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignaturecustomdate_response_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignaturecustomdate_response_v2.h"
ezsigntemplatesignaturecustomdate_response_v2_t* instantiate_ezsigntemplatesignaturecustomdate_response_v2(int include_optional);



ezsigntemplatesignaturecustomdate_response_v2_t* instantiate_ezsigntemplatesignaturecustomdate_response_v2(int include_optional) {
  ezsigntemplatesignaturecustomdate_response_v2_t* ezsigntemplatesignaturecustomdate_response_v2 = NULL;
  if (include_optional) {
    ezsigntemplatesignaturecustomdate_response_v2 = ezsigntemplatesignaturecustomdate_response_v2_create(
      58,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsigntemplatesignaturecustomdate_response_v2 = ezsigntemplatesignaturecustomdate_response_v2_create(
      58,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsigntemplatesignaturecustomdate_response_v2;
}


#ifdef ezsigntemplatesignaturecustomdate_response_v2_MAIN

void test_ezsigntemplatesignaturecustomdate_response_v2(int include_optional) {
    ezsigntemplatesignaturecustomdate_response_v2_t* ezsigntemplatesignaturecustomdate_response_v2_1 = instantiate_ezsigntemplatesignaturecustomdate_response_v2(include_optional);

	cJSON* jsonezsigntemplatesignaturecustomdate_response_v2_1 = ezsigntemplatesignaturecustomdate_response_v2_convertToJSON(ezsigntemplatesignaturecustomdate_response_v2_1);
	printf("ezsigntemplatesignaturecustomdate_response_v2 :\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_response_v2_1));
	ezsigntemplatesignaturecustomdate_response_v2_t* ezsigntemplatesignaturecustomdate_response_v2_2 = ezsigntemplatesignaturecustomdate_response_v2_parseFromJSON(jsonezsigntemplatesignaturecustomdate_response_v2_1);
	cJSON* jsonezsigntemplatesignaturecustomdate_response_v2_2 = ezsigntemplatesignaturecustomdate_response_v2_convertToJSON(ezsigntemplatesignaturecustomdate_response_v2_2);
	printf("repeating ezsigntemplatesignaturecustomdate_response_v2:\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_response_v2_2));
}

int main() {
  test_ezsigntemplatesignaturecustomdate_response_v2(1);
  test_ezsigntemplatesignaturecustomdate_response_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignaturecustomdate_response_v2_MAIN
#endif // ezsigntemplatesignaturecustomdate_response_v2_TEST
