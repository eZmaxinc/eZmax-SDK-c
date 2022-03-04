#ifndef ezsignsignaturecustomdate_request_compound_TEST
#define ezsignsignaturecustomdate_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignaturecustomdate_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignaturecustomdate_request_compound.h"
ezsignsignaturecustomdate_request_compound_t* instantiate_ezsignsignaturecustomdate_request_compound(int include_optional);



ezsignsignaturecustomdate_request_compound_t* instantiate_ezsignsignaturecustomdate_request_compound(int include_optional) {
  ezsignsignaturecustomdate_request_compound_t* ezsignsignaturecustomdate_request_compound = NULL;
  if (include_optional) {
    ezsignsignaturecustomdate_request_compound = ezsignsignaturecustomdate_request_compound_create(
      27,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsignsignaturecustomdate_request_compound = ezsignsignaturecustomdate_request_compound_create(
      27,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsignsignaturecustomdate_request_compound;
}


#ifdef ezsignsignaturecustomdate_request_compound_MAIN

void test_ezsignsignaturecustomdate_request_compound(int include_optional) {
    ezsignsignaturecustomdate_request_compound_t* ezsignsignaturecustomdate_request_compound_1 = instantiate_ezsignsignaturecustomdate_request_compound(include_optional);

	cJSON* jsonezsignsignaturecustomdate_request_compound_1 = ezsignsignaturecustomdate_request_compound_convertToJSON(ezsignsignaturecustomdate_request_compound_1);
	printf("ezsignsignaturecustomdate_request_compound :\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_request_compound_1));
	ezsignsignaturecustomdate_request_compound_t* ezsignsignaturecustomdate_request_compound_2 = ezsignsignaturecustomdate_request_compound_parseFromJSON(jsonezsignsignaturecustomdate_request_compound_1);
	cJSON* jsonezsignsignaturecustomdate_request_compound_2 = ezsignsignaturecustomdate_request_compound_convertToJSON(ezsignsignaturecustomdate_request_compound_2);
	printf("repeating ezsignsignaturecustomdate_request_compound:\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_request_compound_2));
}

int main() {
  test_ezsignsignaturecustomdate_request_compound(1);
  test_ezsignsignaturecustomdate_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignaturecustomdate_request_compound_MAIN
#endif // ezsignsignaturecustomdate_request_compound_TEST
