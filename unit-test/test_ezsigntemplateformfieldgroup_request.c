#ifndef ezsigntemplateformfieldgroup_request_TEST
#define ezsigntemplateformfieldgroup_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_request.h"
ezsigntemplateformfieldgroup_request_t* instantiate_ezsigntemplateformfieldgroup_request(int include_optional);



ezsigntemplateformfieldgroup_request_t* instantiate_ezsigntemplateformfieldgroup_request(int include_optional) {
  ezsigntemplateformfieldgroup_request_t* ezsigntemplateformfieldgroup_request = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_request = ezsigntemplateformfieldgroup_request_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"None",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"TopLeft"
    );
  } else {
    ezsigntemplateformfieldgroup_request = ezsigntemplateformfieldgroup_request_create(
      64,
      133,
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"Text",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"None",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsigntemplateformfieldgroup_request__"TopLeft"
    );
  }

  return ezsigntemplateformfieldgroup_request;
}


#ifdef ezsigntemplateformfieldgroup_request_MAIN

void test_ezsigntemplateformfieldgroup_request(int include_optional) {
    ezsigntemplateformfieldgroup_request_t* ezsigntemplateformfieldgroup_request_1 = instantiate_ezsigntemplateformfieldgroup_request(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_request_1 = ezsigntemplateformfieldgroup_request_convertToJSON(ezsigntemplateformfieldgroup_request_1);
	printf("ezsigntemplateformfieldgroup_request :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_request_1));
	ezsigntemplateformfieldgroup_request_t* ezsigntemplateformfieldgroup_request_2 = ezsigntemplateformfieldgroup_request_parseFromJSON(jsonezsigntemplateformfieldgroup_request_1);
	cJSON* jsonezsigntemplateformfieldgroup_request_2 = ezsigntemplateformfieldgroup_request_convertToJSON(ezsigntemplateformfieldgroup_request_2);
	printf("repeating ezsigntemplateformfieldgroup_request:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_request_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_request(1);
  test_ezsigntemplateformfieldgroup_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_request_MAIN
#endif // ezsigntemplateformfieldgroup_request_TEST
