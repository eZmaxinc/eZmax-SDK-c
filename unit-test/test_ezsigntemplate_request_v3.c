#ifndef ezsigntemplate_request_v3_TEST
#define ezsigntemplate_request_v3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_request_v3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_request_v3.h"
ezsigntemplate_request_v3_t* instantiate_ezsigntemplate_request_v3(int include_optional);



ezsigntemplate_request_v3_t* instantiate_ezsigntemplate_request_v3(int include_optional) {
  ezsigntemplate_request_v3_t* ezsigntemplate_request_v3 = NULL;
  if (include_optional) {
    ezsigntemplate_request_v3 = ezsigntemplate_request_v3_create(
      36,
      5,
      2,
      95,
      "Standard Contract",
      "Test eZsign Folder",
      "0",
      ezmax_api_definition__full_ezsigntemplate_request_v3__"No",
      "Contract",
      1,
      ezmax_api_definition__full_ezsigntemplate_request_v3__"Ezsignfoldertype"
    );
  } else {
    ezsigntemplate_request_v3 = ezsigntemplate_request_v3_create(
      36,
      5,
      2,
      95,
      "Standard Contract",
      "Test eZsign Folder",
      "0",
      ezmax_api_definition__full_ezsigntemplate_request_v3__"No",
      "Contract",
      1,
      ezmax_api_definition__full_ezsigntemplate_request_v3__"Ezsignfoldertype"
    );
  }

  return ezsigntemplate_request_v3;
}


#ifdef ezsigntemplate_request_v3_MAIN

void test_ezsigntemplate_request_v3(int include_optional) {
    ezsigntemplate_request_v3_t* ezsigntemplate_request_v3_1 = instantiate_ezsigntemplate_request_v3(include_optional);

	cJSON* jsonezsigntemplate_request_v3_1 = ezsigntemplate_request_v3_convertToJSON(ezsigntemplate_request_v3_1);
	printf("ezsigntemplate_request_v3 :\n%s\n", cJSON_Print(jsonezsigntemplate_request_v3_1));
	ezsigntemplate_request_v3_t* ezsigntemplate_request_v3_2 = ezsigntemplate_request_v3_parseFromJSON(jsonezsigntemplate_request_v3_1);
	cJSON* jsonezsigntemplate_request_v3_2 = ezsigntemplate_request_v3_convertToJSON(ezsigntemplate_request_v3_2);
	printf("repeating ezsigntemplate_request_v3:\n%s\n", cJSON_Print(jsonezsigntemplate_request_v3_2));
}

int main() {
  test_ezsigntemplate_request_v3(1);
  test_ezsigntemplate_request_v3(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_request_v3_MAIN
#endif // ezsigntemplate_request_v3_TEST
