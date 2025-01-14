#ifndef ezsignsignaturecustomdate_response_v2_TEST
#define ezsignsignaturecustomdate_response_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignaturecustomdate_response_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignaturecustomdate_response_v2.h"
ezsignsignaturecustomdate_response_v2_t* instantiate_ezsignsignaturecustomdate_response_v2(int include_optional);



ezsignsignaturecustomdate_response_v2_t* instantiate_ezsignsignaturecustomdate_response_v2(int include_optional) {
  ezsignsignaturecustomdate_response_v2_t* ezsignsignaturecustomdate_response_v2 = NULL;
  if (include_optional) {
    ezsignsignaturecustomdate_response_v2 = ezsignsignaturecustomdate_response_v2_create(
      27,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsignsignaturecustomdate_response_v2 = ezsignsignaturecustomdate_response_v2_create(
      27,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsignsignaturecustomdate_response_v2;
}


#ifdef ezsignsignaturecustomdate_response_v2_MAIN

void test_ezsignsignaturecustomdate_response_v2(int include_optional) {
    ezsignsignaturecustomdate_response_v2_t* ezsignsignaturecustomdate_response_v2_1 = instantiate_ezsignsignaturecustomdate_response_v2(include_optional);

	cJSON* jsonezsignsignaturecustomdate_response_v2_1 = ezsignsignaturecustomdate_response_v2_convertToJSON(ezsignsignaturecustomdate_response_v2_1);
	printf("ezsignsignaturecustomdate_response_v2 :\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_response_v2_1));
	ezsignsignaturecustomdate_response_v2_t* ezsignsignaturecustomdate_response_v2_2 = ezsignsignaturecustomdate_response_v2_parseFromJSON(jsonezsignsignaturecustomdate_response_v2_1);
	cJSON* jsonezsignsignaturecustomdate_response_v2_2 = ezsignsignaturecustomdate_response_v2_convertToJSON(ezsignsignaturecustomdate_response_v2_2);
	printf("repeating ezsignsignaturecustomdate_response_v2:\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_response_v2_2));
}

int main() {
  test_ezsignsignaturecustomdate_response_v2(1);
  test_ezsignsignaturecustomdate_response_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignaturecustomdate_response_v2_MAIN
#endif // ezsignsignaturecustomdate_response_v2_TEST
