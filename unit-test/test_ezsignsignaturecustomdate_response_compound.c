#ifndef ezsignsignaturecustomdate_response_compound_TEST
#define ezsignsignaturecustomdate_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignaturecustomdate_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignaturecustomdate_response_compound.h"
ezsignsignaturecustomdate_response_compound_t* instantiate_ezsignsignaturecustomdate_response_compound(int include_optional);



ezsignsignaturecustomdate_response_compound_t* instantiate_ezsignsignaturecustomdate_response_compound(int include_optional) {
  ezsignsignaturecustomdate_response_compound_t* ezsignsignaturecustomdate_response_compound = NULL;
  if (include_optional) {
    ezsignsignaturecustomdate_response_compound = ezsignsignaturecustomdate_response_compound_create(
      27,
      200,
      300,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsignsignaturecustomdate_response_compound = ezsignsignaturecustomdate_response_compound_create(
      27,
      200,
      300,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsignsignaturecustomdate_response_compound;
}


#ifdef ezsignsignaturecustomdate_response_compound_MAIN

void test_ezsignsignaturecustomdate_response_compound(int include_optional) {
    ezsignsignaturecustomdate_response_compound_t* ezsignsignaturecustomdate_response_compound_1 = instantiate_ezsignsignaturecustomdate_response_compound(include_optional);

	cJSON* jsonezsignsignaturecustomdate_response_compound_1 = ezsignsignaturecustomdate_response_compound_convertToJSON(ezsignsignaturecustomdate_response_compound_1);
	printf("ezsignsignaturecustomdate_response_compound :\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_response_compound_1));
	ezsignsignaturecustomdate_response_compound_t* ezsignsignaturecustomdate_response_compound_2 = ezsignsignaturecustomdate_response_compound_parseFromJSON(jsonezsignsignaturecustomdate_response_compound_1);
	cJSON* jsonezsignsignaturecustomdate_response_compound_2 = ezsignsignaturecustomdate_response_compound_convertToJSON(ezsignsignaturecustomdate_response_compound_2);
	printf("repeating ezsignsignaturecustomdate_response_compound:\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_response_compound_2));
}

int main() {
  test_ezsignsignaturecustomdate_response_compound(1);
  test_ezsignsignaturecustomdate_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignaturecustomdate_response_compound_MAIN
#endif // ezsignsignaturecustomdate_response_compound_TEST
