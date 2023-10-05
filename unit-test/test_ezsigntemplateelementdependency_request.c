#ifndef ezsigntemplateelementdependency_request_TEST
#define ezsigntemplateelementdependency_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateelementdependency_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateelementdependency_request.h"
ezsigntemplateelementdependency_request_t* instantiate_ezsigntemplateelementdependency_request(int include_optional);



ezsigntemplateelementdependency_request_t* instantiate_ezsigntemplateelementdependency_request(int include_optional) {
  ezsigntemplateelementdependency_request_t* ezsigntemplateelementdependency_request = NULL;
  if (include_optional) {
    ezsigntemplateelementdependency_request = ezsigntemplateelementdependency_request_create(
      314,
      71,
      64,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsigntemplateelementdependency_request__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_request__"eq",
      "Montreal"
    );
  } else {
    ezsigntemplateelementdependency_request = ezsigntemplateelementdependency_request_create(
      314,
      71,
      64,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsigntemplateelementdependency_request__"Value",
      false,
      ezmax_api_definition__full_ezsigntemplateelementdependency_request__"eq",
      "Montreal"
    );
  }

  return ezsigntemplateelementdependency_request;
}


#ifdef ezsigntemplateelementdependency_request_MAIN

void test_ezsigntemplateelementdependency_request(int include_optional) {
    ezsigntemplateelementdependency_request_t* ezsigntemplateelementdependency_request_1 = instantiate_ezsigntemplateelementdependency_request(include_optional);

	cJSON* jsonezsigntemplateelementdependency_request_1 = ezsigntemplateelementdependency_request_convertToJSON(ezsigntemplateelementdependency_request_1);
	printf("ezsigntemplateelementdependency_request :\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_request_1));
	ezsigntemplateelementdependency_request_t* ezsigntemplateelementdependency_request_2 = ezsigntemplateelementdependency_request_parseFromJSON(jsonezsigntemplateelementdependency_request_1);
	cJSON* jsonezsigntemplateelementdependency_request_2 = ezsigntemplateelementdependency_request_convertToJSON(ezsigntemplateelementdependency_request_2);
	printf("repeating ezsigntemplateelementdependency_request:\n%s\n", cJSON_Print(jsonezsigntemplateelementdependency_request_2));
}

int main() {
  test_ezsigntemplateelementdependency_request(1);
  test_ezsigntemplateelementdependency_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateelementdependency_request_MAIN
#endif // ezsigntemplateelementdependency_request_TEST
