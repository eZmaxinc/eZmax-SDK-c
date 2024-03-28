#ifndef ezsignsignaturecustomdate_response_TEST
#define ezsignsignaturecustomdate_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignaturecustomdate_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignaturecustomdate_response.h"
ezsignsignaturecustomdate_response_t* instantiate_ezsignsignaturecustomdate_response(int include_optional);



ezsignsignaturecustomdate_response_t* instantiate_ezsignsignaturecustomdate_response(int include_optional) {
  ezsignsignaturecustomdate_response_t* ezsignsignaturecustomdate_response = NULL;
  if (include_optional) {
    ezsignsignaturecustomdate_response = ezsignsignaturecustomdate_response_create(
      27,
      200,
      300,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsignsignaturecustomdate_response = ezsignsignaturecustomdate_response_create(
      27,
      200,
      300,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsignsignaturecustomdate_response;
}


#ifdef ezsignsignaturecustomdate_response_MAIN

void test_ezsignsignaturecustomdate_response(int include_optional) {
    ezsignsignaturecustomdate_response_t* ezsignsignaturecustomdate_response_1 = instantiate_ezsignsignaturecustomdate_response(include_optional);

	cJSON* jsonezsignsignaturecustomdate_response_1 = ezsignsignaturecustomdate_response_convertToJSON(ezsignsignaturecustomdate_response_1);
	printf("ezsignsignaturecustomdate_response :\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_response_1));
	ezsignsignaturecustomdate_response_t* ezsignsignaturecustomdate_response_2 = ezsignsignaturecustomdate_response_parseFromJSON(jsonezsignsignaturecustomdate_response_1);
	cJSON* jsonezsignsignaturecustomdate_response_2 = ezsignsignaturecustomdate_response_convertToJSON(ezsignsignaturecustomdate_response_2);
	printf("repeating ezsignsignaturecustomdate_response:\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_response_2));
}

int main() {
  test_ezsignsignaturecustomdate_response(1);
  test_ezsignsignaturecustomdate_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignaturecustomdate_response_MAIN
#endif // ezsignsignaturecustomdate_response_TEST
