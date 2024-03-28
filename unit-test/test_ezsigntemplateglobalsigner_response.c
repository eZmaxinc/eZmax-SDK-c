#ifndef ezsigntemplateglobalsigner_response_TEST
#define ezsigntemplateglobalsigner_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobalsigner_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobalsigner_response.h"
ezsigntemplateglobalsigner_response_t* instantiate_ezsigntemplateglobalsigner_response(int include_optional);



ezsigntemplateglobalsigner_response_t* instantiate_ezsigntemplateglobalsigner_response(int include_optional) {
  ezsigntemplateglobalsigner_response_t* ezsigntemplateglobalsigner_response = NULL;
  if (include_optional) {
    ezsigntemplateglobalsigner_response = ezsigntemplateglobalsigner_response_create(
      9,
      36,
      "Customer"
    );
  } else {
    ezsigntemplateglobalsigner_response = ezsigntemplateglobalsigner_response_create(
      9,
      36,
      "Customer"
    );
  }

  return ezsigntemplateglobalsigner_response;
}


#ifdef ezsigntemplateglobalsigner_response_MAIN

void test_ezsigntemplateglobalsigner_response(int include_optional) {
    ezsigntemplateglobalsigner_response_t* ezsigntemplateglobalsigner_response_1 = instantiate_ezsigntemplateglobalsigner_response(include_optional);

	cJSON* jsonezsigntemplateglobalsigner_response_1 = ezsigntemplateglobalsigner_response_convertToJSON(ezsigntemplateglobalsigner_response_1);
	printf("ezsigntemplateglobalsigner_response :\n%s\n", cJSON_Print(jsonezsigntemplateglobalsigner_response_1));
	ezsigntemplateglobalsigner_response_t* ezsigntemplateglobalsigner_response_2 = ezsigntemplateglobalsigner_response_parseFromJSON(jsonezsigntemplateglobalsigner_response_1);
	cJSON* jsonezsigntemplateglobalsigner_response_2 = ezsigntemplateglobalsigner_response_convertToJSON(ezsigntemplateglobalsigner_response_2);
	printf("repeating ezsigntemplateglobalsigner_response:\n%s\n", cJSON_Print(jsonezsigntemplateglobalsigner_response_2));
}

int main() {
  test_ezsigntemplateglobalsigner_response(1);
  test_ezsigntemplateglobalsigner_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobalsigner_response_MAIN
#endif // ezsigntemplateglobalsigner_response_TEST
