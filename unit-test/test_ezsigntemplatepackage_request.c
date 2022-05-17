#ifndef ezsigntemplatepackage_request_TEST
#define ezsigntemplatepackage_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_request.h"
ezsigntemplatepackage_request_t* instantiate_ezsigntemplatepackage_request(int include_optional);



ezsigntemplatepackage_request_t* instantiate_ezsigntemplatepackage_request(int include_optional) {
  ezsigntemplatepackage_request_t* ezsigntemplatepackage_request = NULL;
  if (include_optional) {
    ezsigntemplatepackage_request = ezsigntemplatepackage_request_create(
      99,
      5,
      2,
      "Package for new clients",
      1,
      1
    );
  } else {
    ezsigntemplatepackage_request = ezsigntemplatepackage_request_create(
      99,
      5,
      2,
      "Package for new clients",
      1,
      1
    );
  }

  return ezsigntemplatepackage_request;
}


#ifdef ezsigntemplatepackage_request_MAIN

void test_ezsigntemplatepackage_request(int include_optional) {
    ezsigntemplatepackage_request_t* ezsigntemplatepackage_request_1 = instantiate_ezsigntemplatepackage_request(include_optional);

	cJSON* jsonezsigntemplatepackage_request_1 = ezsigntemplatepackage_request_convertToJSON(ezsigntemplatepackage_request_1);
	printf("ezsigntemplatepackage_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_request_1));
	ezsigntemplatepackage_request_t* ezsigntemplatepackage_request_2 = ezsigntemplatepackage_request_parseFromJSON(jsonezsigntemplatepackage_request_1);
	cJSON* jsonezsigntemplatepackage_request_2 = ezsigntemplatepackage_request_convertToJSON(ezsigntemplatepackage_request_2);
	printf("repeating ezsigntemplatepackage_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_request_2));
}

int main() {
  test_ezsigntemplatepackage_request(1);
  test_ezsigntemplatepackage_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_request_MAIN
#endif // ezsigntemplatepackage_request_TEST
