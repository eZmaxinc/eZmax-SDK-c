#ifndef ezsigntemplatesignaturecustomdate_response_compound_TEST
#define ezsigntemplatesignaturecustomdate_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignaturecustomdate_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignaturecustomdate_response_compound.h"
ezsigntemplatesignaturecustomdate_response_compound_t* instantiate_ezsigntemplatesignaturecustomdate_response_compound(int include_optional);



ezsigntemplatesignaturecustomdate_response_compound_t* instantiate_ezsigntemplatesignaturecustomdate_response_compound(int include_optional) {
  ezsigntemplatesignaturecustomdate_response_compound_t* ezsigntemplatesignaturecustomdate_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatesignaturecustomdate_response_compound = ezsigntemplatesignaturecustomdate_response_compound_create(
      58,
      200,
      300,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsigntemplatesignaturecustomdate_response_compound = ezsigntemplatesignaturecustomdate_response_compound_create(
      58,
      200,
      300,
      200,
      200,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsigntemplatesignaturecustomdate_response_compound;
}


#ifdef ezsigntemplatesignaturecustomdate_response_compound_MAIN

void test_ezsigntemplatesignaturecustomdate_response_compound(int include_optional) {
    ezsigntemplatesignaturecustomdate_response_compound_t* ezsigntemplatesignaturecustomdate_response_compound_1 = instantiate_ezsigntemplatesignaturecustomdate_response_compound(include_optional);

	cJSON* jsonezsigntemplatesignaturecustomdate_response_compound_1 = ezsigntemplatesignaturecustomdate_response_compound_convertToJSON(ezsigntemplatesignaturecustomdate_response_compound_1);
	printf("ezsigntemplatesignaturecustomdate_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_response_compound_1));
	ezsigntemplatesignaturecustomdate_response_compound_t* ezsigntemplatesignaturecustomdate_response_compound_2 = ezsigntemplatesignaturecustomdate_response_compound_parseFromJSON(jsonezsigntemplatesignaturecustomdate_response_compound_1);
	cJSON* jsonezsigntemplatesignaturecustomdate_response_compound_2 = ezsigntemplatesignaturecustomdate_response_compound_convertToJSON(ezsigntemplatesignaturecustomdate_response_compound_2);
	printf("repeating ezsigntemplatesignaturecustomdate_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatesignaturecustomdate_response_compound_2));
}

int main() {
  test_ezsigntemplatesignaturecustomdate_response_compound(1);
  test_ezsigntemplatesignaturecustomdate_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignaturecustomdate_response_compound_MAIN
#endif // ezsigntemplatesignaturecustomdate_response_compound_TEST
