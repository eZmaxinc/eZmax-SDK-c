#ifndef ezsigntemplatepackage_response_TEST
#define ezsigntemplatepackage_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_response.h"
ezsigntemplatepackage_response_t* instantiate_ezsigntemplatepackage_response(int include_optional);



ezsigntemplatepackage_response_t* instantiate_ezsigntemplatepackage_response(int include_optional) {
  ezsigntemplatepackage_response_t* ezsigntemplatepackage_response = NULL;
  if (include_optional) {
    ezsigntemplatepackage_response = ezsigntemplatepackage_response_create(
      99,
      5,
      2,
      "English",
      "Package for new clients",
      1,
      1,
      1,
      "Default"
    );
  } else {
    ezsigntemplatepackage_response = ezsigntemplatepackage_response_create(
      99,
      5,
      2,
      "English",
      "Package for new clients",
      1,
      1,
      1,
      "Default"
    );
  }

  return ezsigntemplatepackage_response;
}


#ifdef ezsigntemplatepackage_response_MAIN

void test_ezsigntemplatepackage_response(int include_optional) {
    ezsigntemplatepackage_response_t* ezsigntemplatepackage_response_1 = instantiate_ezsigntemplatepackage_response(include_optional);

	cJSON* jsonezsigntemplatepackage_response_1 = ezsigntemplatepackage_response_convertToJSON(ezsigntemplatepackage_response_1);
	printf("ezsigntemplatepackage_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_response_1));
	ezsigntemplatepackage_response_t* ezsigntemplatepackage_response_2 = ezsigntemplatepackage_response_parseFromJSON(jsonezsigntemplatepackage_response_1);
	cJSON* jsonezsigntemplatepackage_response_2 = ezsigntemplatepackage_response_convertToJSON(ezsigntemplatepackage_response_2);
	printf("repeating ezsigntemplatepackage_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_response_2));
}

int main() {
  test_ezsigntemplatepackage_response(1);
  test_ezsigntemplatepackage_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_response_MAIN
#endif // ezsigntemplatepackage_response_TEST
