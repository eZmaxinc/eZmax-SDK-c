#ifndef ezsigntemplateformfield_response_TEST
#define ezsigntemplateformfield_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfield_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfield_response.h"
ezsigntemplateformfield_response_t* instantiate_ezsigntemplateformfield_response(int include_optional);



ezsigntemplateformfield_response_t* instantiate_ezsigntemplateformfield_response(int include_optional) {
  ezsigntemplateformfield_response_t* ezsigntemplateformfield_response = NULL;
  if (include_optional) {
    ezsigntemplateformfield_response = ezsigntemplateformfield_response_create(
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
    ezsigntemplateformfield_response = ezsigntemplateformfield_response_create(
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

  return ezsigntemplateformfield_response;
}


#ifdef ezsigntemplateformfield_response_MAIN

void test_ezsigntemplateformfield_response(int include_optional) {
    ezsigntemplateformfield_response_t* ezsigntemplateformfield_response_1 = instantiate_ezsigntemplateformfield_response(include_optional);

	cJSON* jsonezsigntemplateformfield_response_1 = ezsigntemplateformfield_response_convertToJSON(ezsigntemplateformfield_response_1);
	printf("ezsigntemplateformfield_response :\n%s\n", cJSON_Print(jsonezsigntemplateformfield_response_1));
	ezsigntemplateformfield_response_t* ezsigntemplateformfield_response_2 = ezsigntemplateformfield_response_parseFromJSON(jsonezsigntemplateformfield_response_1);
	cJSON* jsonezsigntemplateformfield_response_2 = ezsigntemplateformfield_response_convertToJSON(ezsigntemplateformfield_response_2);
	printf("repeating ezsigntemplateformfield_response:\n%s\n", cJSON_Print(jsonezsigntemplateformfield_response_2));
}

int main() {
  test_ezsigntemplateformfield_response(1);
  test_ezsigntemplateformfield_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfield_response_MAIN
#endif // ezsigntemplateformfield_response_TEST
