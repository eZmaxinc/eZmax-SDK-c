#ifndef ezsigntemplatepackagesigner_response_TEST
#define ezsigntemplatepackagesigner_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_response.h"
ezsigntemplatepackagesigner_response_t* instantiate_ezsigntemplatepackagesigner_response(int include_optional);



ezsigntemplatepackagesigner_response_t* instantiate_ezsigntemplatepackagesigner_response(int include_optional) {
  ezsigntemplatepackagesigner_response_t* ezsigntemplatepackagesigner_response = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_response = ezsigntemplatepackagesigner_response_create(
      174,
      99,
      95,
      70,
      2,
      "Standard Contract",
      1,
      ezmax_api_definition__full_ezsigntemplatepackagesigner_response__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  } else {
    ezsigntemplatepackagesigner_response = ezsigntemplatepackagesigner_response_create(
      174,
      99,
      95,
      70,
      2,
      "Standard Contract",
      1,
      ezmax_api_definition__full_ezsigntemplatepackagesigner_response__"Manual",
      "Customer",
      "Default",
      "Administration"
    );
  }

  return ezsigntemplatepackagesigner_response;
}


#ifdef ezsigntemplatepackagesigner_response_MAIN

void test_ezsigntemplatepackagesigner_response(int include_optional) {
    ezsigntemplatepackagesigner_response_t* ezsigntemplatepackagesigner_response_1 = instantiate_ezsigntemplatepackagesigner_response(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_response_1 = ezsigntemplatepackagesigner_response_convertToJSON(ezsigntemplatepackagesigner_response_1);
	printf("ezsigntemplatepackagesigner_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_response_1));
	ezsigntemplatepackagesigner_response_t* ezsigntemplatepackagesigner_response_2 = ezsigntemplatepackagesigner_response_parseFromJSON(jsonezsigntemplatepackagesigner_response_1);
	cJSON* jsonezsigntemplatepackagesigner_response_2 = ezsigntemplatepackagesigner_response_convertToJSON(ezsigntemplatepackagesigner_response_2);
	printf("repeating ezsigntemplatepackagesigner_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_response_2));
}

int main() {
  test_ezsigntemplatepackagesigner_response(1);
  test_ezsigntemplatepackagesigner_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_response_MAIN
#endif // ezsigntemplatepackagesigner_response_TEST
