#ifndef ezsigntemplateformfieldgroup_response_TEST
#define ezsigntemplateformfieldgroup_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_response.h"
ezsigntemplateformfieldgroup_response_t* instantiate_ezsigntemplateformfieldgroup_response(int include_optional);



ezsigntemplateformfieldgroup_response_t* instantiate_ezsigntemplateformfieldgroup_response(int include_optional) {
  ezsigntemplateformfieldgroup_response_t* ezsigntemplateformfieldgroup_response = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_response = ezsigntemplateformfieldgroup_response_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"None",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"TopLeft"
    );
  } else {
    ezsigntemplateformfieldgroup_response = ezsigntemplateformfieldgroup_response_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"None",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_response__"TopLeft"
    );
  }

  return ezsigntemplateformfieldgroup_response;
}


#ifdef ezsigntemplateformfieldgroup_response_MAIN

void test_ezsigntemplateformfieldgroup_response(int include_optional) {
    ezsigntemplateformfieldgroup_response_t* ezsigntemplateformfieldgroup_response_1 = instantiate_ezsigntemplateformfieldgroup_response(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_response_1 = ezsigntemplateformfieldgroup_response_convertToJSON(ezsigntemplateformfieldgroup_response_1);
	printf("ezsigntemplateformfieldgroup_response :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_response_1));
	ezsigntemplateformfieldgroup_response_t* ezsigntemplateformfieldgroup_response_2 = ezsigntemplateformfieldgroup_response_parseFromJSON(jsonezsigntemplateformfieldgroup_response_1);
	cJSON* jsonezsigntemplateformfieldgroup_response_2 = ezsigntemplateformfieldgroup_response_convertToJSON(ezsigntemplateformfieldgroup_response_2);
	printf("repeating ezsigntemplateformfieldgroup_response:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_response_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_response(1);
  test_ezsigntemplateformfieldgroup_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_response_MAIN
#endif // ezsigntemplateformfieldgroup_response_TEST
