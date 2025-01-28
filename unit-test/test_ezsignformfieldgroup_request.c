#ifndef ezsignformfieldgroup_request_TEST
#define ezsignformfieldgroup_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_request.h"
ezsignformfieldgroup_request_t* instantiate_ezsignformfieldgroup_request(int include_optional);



ezsignformfieldgroup_request_t* instantiate_ezsignformfieldgroup_request(int include_optional) {
  ezsignformfieldgroup_request_t* ezsignformfieldgroup_request = NULL;
  if (include_optional) {
    ezsignformfieldgroup_request = ezsignformfieldgroup_request_create(
      26,
      97,
      ezmax_api_definition__full_ezsignformfieldgroup_request__"Text",
      ezmax_api_definition__full_ezsignformfieldgroup_request__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "^[0-9]{9}$",
      "Phone number",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsignformfieldgroup_request__"TopLeft",
      ezmax_api_definition__full_ezsignformfieldgroup_request__"None"
    );
  } else {
    ezsignformfieldgroup_request = ezsignformfieldgroup_request_create(
      26,
      97,
      ezmax_api_definition__full_ezsignformfieldgroup_request__"Text",
      ezmax_api_definition__full_ezsignformfieldgroup_request__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "^[0-9]{9}$",
      "Phone number",
      "Please enter a valid email address",
      ezmax_api_definition__full_ezsignformfieldgroup_request__"TopLeft",
      ezmax_api_definition__full_ezsignformfieldgroup_request__"None"
    );
  }

  return ezsignformfieldgroup_request;
}


#ifdef ezsignformfieldgroup_request_MAIN

void test_ezsignformfieldgroup_request(int include_optional) {
    ezsignformfieldgroup_request_t* ezsignformfieldgroup_request_1 = instantiate_ezsignformfieldgroup_request(include_optional);

	cJSON* jsonezsignformfieldgroup_request_1 = ezsignformfieldgroup_request_convertToJSON(ezsignformfieldgroup_request_1);
	printf("ezsignformfieldgroup_request :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_request_1));
	ezsignformfieldgroup_request_t* ezsignformfieldgroup_request_2 = ezsignformfieldgroup_request_parseFromJSON(jsonezsignformfieldgroup_request_1);
	cJSON* jsonezsignformfieldgroup_request_2 = ezsignformfieldgroup_request_convertToJSON(ezsignformfieldgroup_request_2);
	printf("repeating ezsignformfieldgroup_request:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_request_2));
}

int main() {
  test_ezsignformfieldgroup_request(1);
  test_ezsignformfieldgroup_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_request_MAIN
#endif // ezsignformfieldgroup_request_TEST
