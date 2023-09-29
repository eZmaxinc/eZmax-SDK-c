#ifndef ezsigntemplateformfield_request_TEST
#define ezsigntemplateformfield_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfield_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfield_request.h"
ezsigntemplateformfield_request_t* instantiate_ezsigntemplateformfield_request(int include_optional);



ezsigntemplateformfield_request_t* instantiate_ezsigntemplateformfield_request(int include_optional) {
  ezsigntemplateformfield_request_t* ezsigntemplateformfield_request = NULL;
  if (include_optional) {
    ezsigntemplateformfield_request = ezsigntemplateformfield_request_create(
      71,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1
    );
  } else {
    ezsigntemplateformfield_request = ezsigntemplateformfield_request_create(
      71,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1
    );
  }

  return ezsigntemplateformfield_request;
}


#ifdef ezsigntemplateformfield_request_MAIN

void test_ezsigntemplateformfield_request(int include_optional) {
    ezsigntemplateformfield_request_t* ezsigntemplateformfield_request_1 = instantiate_ezsigntemplateformfield_request(include_optional);

	cJSON* jsonezsigntemplateformfield_request_1 = ezsigntemplateformfield_request_convertToJSON(ezsigntemplateformfield_request_1);
	printf("ezsigntemplateformfield_request :\n%s\n", cJSON_Print(jsonezsigntemplateformfield_request_1));
	ezsigntemplateformfield_request_t* ezsigntemplateformfield_request_2 = ezsigntemplateformfield_request_parseFromJSON(jsonezsigntemplateformfield_request_1);
	cJSON* jsonezsigntemplateformfield_request_2 = ezsigntemplateformfield_request_convertToJSON(ezsigntemplateformfield_request_2);
	printf("repeating ezsigntemplateformfield_request:\n%s\n", cJSON_Print(jsonezsigntemplateformfield_request_2));
}

int main() {
  test_ezsigntemplateformfield_request(1);
  test_ezsigntemplateformfield_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfield_request_MAIN
#endif // ezsigntemplateformfield_request_TEST
