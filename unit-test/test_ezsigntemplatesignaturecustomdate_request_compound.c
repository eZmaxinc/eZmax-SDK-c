#ifndef ezsigntemplatesignaturecustomdate_request_compound_TEST
#define ezsigntemplatesignaturecustomdate_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignaturecustomdate_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignaturecustomdate_request_compound.h"
ezsigntemplatesignaturecustomdate_request_compound_t* instantiate_ezsigntemplatesignaturecustomdate_request_compound(int include_optional);



ezsigntemplatesignaturecustomdate_request_compound_t* instantiate_ezsigntemplatesignaturecustomdate_request_compound(int include_optional) {
  ezsigntemplatesignaturecustomdate_request_compound_t* ezsigntemplatesignaturecustomdate_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatesignaturecustomdate_request_compound = ezsigntemplatesignaturecustomdate_request_compound_create(
      58,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsigntemplatesignaturecustomdate_request_compound = ezsigntemplatesignaturecustomdate_request_compound_create(
      58,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsigntemplatesignaturecustomdate_request_compound;
}


#ifdef ezsigntemplatesignaturecustomdate_request_compound_MAIN

void test_ezsigntemplatesignaturecustomdate_request_compound(int include_optional) {
    ezsigntemplatesignaturecustomdate_request_compound_t* ezsigntemplatesignaturecustomdate_request_compound_1 = instantiate_ezsigntemplatesignaturecustomdate_request_compound(include_optional);

	cJSON* jsonezsigntemplatesignaturecustomdate_request_compound_1 = ezsigntemplatesignaturecustomdate_request_compound_convertToJSON(ezsigntemplatesignaturecustomdate_request_compound_1);
	printf("ezsigntemplatesignaturecustomdate_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_request_compound_1));
	ezsigntemplatesignaturecustomdate_request_compound_t* ezsigntemplatesignaturecustomdate_request_compound_2 = ezsigntemplatesignaturecustomdate_request_compound_parseFromJSON(jsonezsigntemplatesignaturecustomdate_request_compound_1);
	cJSON* jsonezsigntemplatesignaturecustomdate_request_compound_2 = ezsigntemplatesignaturecustomdate_request_compound_convertToJSON(ezsigntemplatesignaturecustomdate_request_compound_2);
	printf("repeating ezsigntemplatesignaturecustomdate_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_request_compound_2));
}

int main() {
  test_ezsigntemplatesignaturecustomdate_request_compound(1);
  test_ezsigntemplatesignaturecustomdate_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignaturecustomdate_request_compound_MAIN
#endif // ezsigntemplatesignaturecustomdate_request_compound_TEST
