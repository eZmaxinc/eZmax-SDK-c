#ifndef ezsigntemplateelementdependency_response_TEST
#define ezsigntemplateelementdependency_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateelementdependency_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateelementdependency_response.h"
ezsigntemplateelementdependency_response_t* instantiate_ezsigntemplateelementdependency_response(int include_optional);



ezsigntemplateelementdependency_response_t* instantiate_ezsigntemplateelementdependency_response(int include_optional) {
  ezsigntemplateelementdependency_response_t* ezsigntemplateelementdependency_response = NULL;
  if (include_optional) {
    ezsigntemplateelementdependency_response = ezsigntemplateelementdependency_response_create(
      314,
      71,
      99,
      71,
      64,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response__"eq",
      "Montreal"
    );
  } else {
    ezsigntemplateelementdependency_response = ezsigntemplateelementdependency_response_create(
      314,
      71,
      99,
      71,
      64,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_response__"eq",
      "Montreal"
    );
  }

  return ezsigntemplateelementdependency_response;
}


#ifdef ezsigntemplateelementdependency_response_MAIN

void test_ezsigntemplateelementdependency_response(int include_optional) {
    ezsigntemplateelementdependency_response_t* ezsigntemplateelementdependency_response_1 = instantiate_ezsigntemplateelementdependency_response(include_optional);

	cJSON* jsonezsigntemplateelementdependency_response_1 = ezsigntemplateelementdependency_response_convertToJSON(ezsigntemplateelementdependency_response_1);
	printf("ezsigntemplateelementdependency_response :\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_response_1));
	ezsigntemplateelementdependency_response_t* ezsigntemplateelementdependency_response_2 = ezsigntemplateelementdependency_response_parseFromJSON(jsonezsigntemplateelementdependency_response_1);
	cJSON* jsonezsigntemplateelementdependency_response_2 = ezsigntemplateelementdependency_response_convertToJSON(ezsigntemplateelementdependency_response_2);
	printf("repeating ezsigntemplateelementdependency_response:\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_response_2));
}

int main() {
  test_ezsigntemplateelementdependency_response(1);
  test_ezsigntemplateelementdependency_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateelementdependency_response_MAIN
#endif // ezsigntemplateelementdependency_response_TEST
