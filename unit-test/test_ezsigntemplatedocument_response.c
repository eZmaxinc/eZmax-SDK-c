#ifndef ezsigntemplatedocument_response_TEST
#define ezsigntemplatedocument_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_response.h"
ezsigntemplatedocument_response_t* instantiate_ezsigntemplatedocument_response(int include_optional);



ezsigntemplatedocument_response_t* instantiate_ezsigntemplatedocument_response(int include_optional) {
  ezsigntemplatedocument_response_t* ezsigntemplatedocument_response = NULL;
  if (include_optional) {
    ezsigntemplatedocument_response = ezsigntemplatedocument_response_create(
      133,
      36,
      "Standard Contract",
      5,
      8,
      8,
      true
    );
  } else {
    ezsigntemplatedocument_response = ezsigntemplatedocument_response_create(
      133,
      36,
      "Standard Contract",
      5,
      8,
      8,
      true
    );
  }

  return ezsigntemplatedocument_response;
}


#ifdef ezsigntemplatedocument_response_MAIN

void test_ezsigntemplatedocument_response(int include_optional) {
    ezsigntemplatedocument_response_t* ezsigntemplatedocument_response_1 = instantiate_ezsigntemplatedocument_response(include_optional);

	cJSON* jsonezsigntemplatedocument_response_1 = ezsigntemplatedocument_response_convertToJSON(ezsigntemplatedocument_response_1);
	printf("ezsigntemplatedocument_response :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_response_1));
	ezsigntemplatedocument_response_t* ezsigntemplatedocument_response_2 = ezsigntemplatedocument_response_parseFromJSON(jsonezsigntemplatedocument_response_1);
	cJSON* jsonezsigntemplatedocument_response_2 = ezsigntemplatedocument_response_convertToJSON(ezsigntemplatedocument_response_2);
	printf("repeating ezsigntemplatedocument_response:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_response_2));
}

int main() {
  test_ezsigntemplatedocument_response(1);
  test_ezsigntemplatedocument_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_response_MAIN
#endif // ezsigntemplatedocument_response_TEST
