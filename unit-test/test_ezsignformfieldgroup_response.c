#ifndef ezsignformfieldgroup_response_TEST
#define ezsignformfieldgroup_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_response.h"
ezsignformfieldgroup_response_t* instantiate_ezsignformfieldgroup_response(int include_optional);



ezsignformfieldgroup_response_t* instantiate_ezsignformfieldgroup_response(int include_optional) {
  ezsignformfieldgroup_response_t* ezsignformfieldgroup_response = NULL;
  if (include_optional) {
    ezsignformfieldgroup_response = ezsignformfieldgroup_response_create(
      26,
      97,
      ezmax_api_definition_ezsignformfieldgroup_response__"Text",
      ezmax_api_definition_ezsignformfieldgroup_response__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition_ezsignformfieldgroup_response__"TopLeft"
    );
  } else {
    ezsignformfieldgroup_response = ezsignformfieldgroup_response_create(
      26,
      97,
      ezmax_api_definition_ezsignformfieldgroup_response__"Text",
      ezmax_api_definition_ezsignformfieldgroup_response__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition_ezsignformfieldgroup_response__"TopLeft"
    );
  }

  return ezsignformfieldgroup_response;
}


#ifdef ezsignformfieldgroup_response_MAIN

void test_ezsignformfieldgroup_response(int include_optional) {
    ezsignformfieldgroup_response_t* ezsignformfieldgroup_response_1 = instantiate_ezsignformfieldgroup_response(include_optional);

	cJSON* jsonezsignformfieldgroup_response_1 = ezsignformfieldgroup_response_convertToJSON(ezsignformfieldgroup_response_1);
	printf("ezsignformfieldgroup_response :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_response_1));
	ezsignformfieldgroup_response_t* ezsignformfieldgroup_response_2 = ezsignformfieldgroup_response_parseFromJSON(jsonezsignformfieldgroup_response_1);
	cJSON* jsonezsignformfieldgroup_response_2 = ezsignformfieldgroup_response_convertToJSON(ezsignformfieldgroup_response_2);
	printf("repeating ezsignformfieldgroup_response:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_response_2));
}

int main() {
  test_ezsignformfieldgroup_response(1);
  test_ezsignformfieldgroup_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_response_MAIN
#endif // ezsignformfieldgroup_response_TEST
