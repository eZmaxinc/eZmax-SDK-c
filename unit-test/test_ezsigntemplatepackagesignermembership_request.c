#ifndef ezsigntemplatepackagesignermembership_request_TEST
#define ezsigntemplatepackagesignermembership_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesignermembership_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesignermembership_request.h"
ezsigntemplatepackagesignermembership_request_t* instantiate_ezsigntemplatepackagesignermembership_request(int include_optional);



ezsigntemplatepackagesignermembership_request_t* instantiate_ezsigntemplatepackagesignermembership_request(int include_optional) {
  ezsigntemplatepackagesignermembership_request_t* ezsigntemplatepackagesignermembership_request = NULL;
  if (include_optional) {
    ezsigntemplatepackagesignermembership_request = ezsigntemplatepackagesignermembership_request_create(
      237,
      194,
      174,
      9,
      1
    );
  } else {
    ezsigntemplatepackagesignermembership_request = ezsigntemplatepackagesignermembership_request_create(
      237,
      194,
      174,
      9,
      1
    );
  }

  return ezsigntemplatepackagesignermembership_request;
}


#ifdef ezsigntemplatepackagesignermembership_request_MAIN

void test_ezsigntemplatepackagesignermembership_request(int include_optional) {
    ezsigntemplatepackagesignermembership_request_t* ezsigntemplatepackagesignermembership_request_1 = instantiate_ezsigntemplatepackagesignermembership_request(include_optional);

	cJSON* jsonezsigntemplatepackagesignermembership_request_1 = ezsigntemplatepackagesignermembership_request_convertToJSON(ezsigntemplatepackagesignermembership_request_1);
	printf("ezsigntemplatepackagesignermembership_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_request_1));
	ezsigntemplatepackagesignermembership_request_t* ezsigntemplatepackagesignermembership_request_2 = ezsigntemplatepackagesignermembership_request_parseFromJSON(jsonezsigntemplatepackagesignermembership_request_1);
	cJSON* jsonezsigntemplatepackagesignermembership_request_2 = ezsigntemplatepackagesignermembership_request_convertToJSON(ezsigntemplatepackagesignermembership_request_2);
	printf("repeating ezsigntemplatepackagesignermembership_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesignermembership_request_2));
}

int main() {
  test_ezsigntemplatepackagesignermembership_request(1);
  test_ezsigntemplatepackagesignermembership_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesignermembership_request_MAIN
#endif // ezsigntemplatepackagesignermembership_request_TEST
