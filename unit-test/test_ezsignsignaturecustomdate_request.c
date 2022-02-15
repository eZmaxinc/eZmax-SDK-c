#ifndef ezsignsignaturecustomdate_request_TEST
#define ezsignsignaturecustomdate_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignaturecustomdate_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignaturecustomdate_request.h"
ezsignsignaturecustomdate_request_t* instantiate_ezsignsignaturecustomdate_request(int include_optional);



ezsignsignaturecustomdate_request_t* instantiate_ezsignsignaturecustomdate_request(int include_optional) {
  ezsignsignaturecustomdate_request_t* ezsignsignaturecustomdate_request = NULL;
  if (include_optional) {
    ezsignsignaturecustomdate_request = ezsignsignaturecustomdate_request_create(
      27,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  } else {
    ezsignsignaturecustomdate_request = ezsignsignaturecustomdate_request_create(
      27,
      200,
      300,
      "Signature date: {YYYY}/{MM}/{DD} {hh}:{mm}{ss} {Z}"
    );
  }

  return ezsignsignaturecustomdate_request;
}


#ifdef ezsignsignaturecustomdate_request_MAIN

void test_ezsignsignaturecustomdate_request(int include_optional) {
    ezsignsignaturecustomdate_request_t* ezsignsignaturecustomdate_request_1 = instantiate_ezsignsignaturecustomdate_request(include_optional);

	cJSON* jsonezsignsignaturecustomdate_request_1 = ezsignsignaturecustomdate_request_convertToJSON(ezsignsignaturecustomdate_request_1);
	printf("ezsignsignaturecustomdate_request :\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_request_1));
	ezsignsignaturecustomdate_request_t* ezsignsignaturecustomdate_request_2 = ezsignsignaturecustomdate_request_parseFromJSON(jsonezsignsignaturecustomdate_request_1);
	cJSON* jsonezsignsignaturecustomdate_request_2 = ezsignsignaturecustomdate_request_convertToJSON(ezsignsignaturecustomdate_request_2);
	printf("repeating ezsignsignaturecustomdate_request:\n%s\n", cJSON_Print(jsonezsignsignaturecustomdate_request_2));
}

int main() {
  test_ezsignsignaturecustomdate_request(1);
  test_ezsignsignaturecustomdate_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignaturecustomdate_request_MAIN
#endif // ezsignsignaturecustomdate_request_TEST
