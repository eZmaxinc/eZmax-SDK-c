#ifndef ezsignpage_response_TEST
#define ezsignpage_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignpage_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignpage_response.h"
ezsignpage_response_t* instantiate_ezsignpage_response(int include_optional);



ezsignpage_response_t* instantiate_ezsignpage_response(int include_optional) {
  ezsignpage_response_t* ezsignpage_response = NULL;
  if (include_optional) {
    ezsignpage_response = ezsignpage_response_create(
      64,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  } else {
    ezsignpage_response = ezsignpage_response_create(
      64,
      850,
      1100,
      612,
      792,
      1,
      "0"
    );
  }

  return ezsignpage_response;
}


#ifdef ezsignpage_response_MAIN

void test_ezsignpage_response(int include_optional) {
    ezsignpage_response_t* ezsignpage_response_1 = instantiate_ezsignpage_response(include_optional);

	cJSON* jsonezsignpage_response_1 = ezsignpage_response_convertToJSON(ezsignpage_response_1);
	printf("ezsignpage_response :\n%s\n", cJSON_Print(jsonezsignpage_response_1));
	ezsignpage_response_t* ezsignpage_response_2 = ezsignpage_response_parseFromJSON(jsonezsignpage_response_1);
	cJSON* jsonezsignpage_response_2 = ezsignpage_response_convertToJSON(ezsignpage_response_2);
	printf("repeating ezsignpage_response:\n%s\n", cJSON_Print(jsonezsignpage_response_2));
}

int main() {
  test_ezsignpage_response(1);
  test_ezsignpage_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignpage_response_MAIN
#endif // ezsignpage_response_TEST
