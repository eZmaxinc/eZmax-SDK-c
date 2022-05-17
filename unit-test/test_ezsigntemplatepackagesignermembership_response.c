#ifndef ezsigntemplatepackagesignermembership_response_TEST
#define ezsigntemplatepackagesignermembership_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesignermembership_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesignermembership_response.h"
ezsigntemplatepackagesignermembership_response_t* instantiate_ezsigntemplatepackagesignermembership_response(int include_optional);



ezsigntemplatepackagesignermembership_response_t* instantiate_ezsigntemplatepackagesignermembership_response(int include_optional) {
  ezsigntemplatepackagesignermembership_response_t* ezsigntemplatepackagesignermembership_response = NULL;
  if (include_optional) {
    ezsigntemplatepackagesignermembership_response = ezsigntemplatepackagesignermembership_response_create(
      237,
      194,
      174,
      9,
      1
    );
  } else {
    ezsigntemplatepackagesignermembership_response = ezsigntemplatepackagesignermembership_response_create(
      237,
      194,
      174,
      9,
      1
    );
  }

  return ezsigntemplatepackagesignermembership_response;
}


#ifdef ezsigntemplatepackagesignermembership_response_MAIN

void test_ezsigntemplatepackagesignermembership_response(int include_optional) {
    ezsigntemplatepackagesignermembership_response_t* ezsigntemplatepackagesignermembership_response_1 = instantiate_ezsigntemplatepackagesignermembership_response(include_optional);

	cJSON* jsonezsigntemplatepackagesignermembership_response_1 = ezsigntemplatepackagesignermembership_response_convertToJSON(ezsigntemplatepackagesignermembership_response_1);
	printf("ezsigntemplatepackagesignermembership_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_response_1));
	ezsigntemplatepackagesignermembership_response_t* ezsigntemplatepackagesignermembership_response_2 = ezsigntemplatepackagesignermembership_response_parseFromJSON(jsonezsigntemplatepackagesignermembership_response_1);
	cJSON* jsonezsigntemplatepackagesignermembership_response_2 = ezsigntemplatepackagesignermembership_response_convertToJSON(ezsigntemplatepackagesignermembership_response_2);
	printf("repeating ezsigntemplatepackagesignermembership_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_response_2));
}

int main() {
  test_ezsigntemplatepackagesignermembership_response(1);
  test_ezsigntemplatepackagesignermembership_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesignermembership_response_MAIN
#endif // ezsigntemplatepackagesignermembership_response_TEST
