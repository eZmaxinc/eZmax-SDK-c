#ifndef ezsigntemplate_request_v2_TEST
#define ezsigntemplate_request_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_request_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_request_v2.h"
ezsigntemplate_request_v2_t* instantiate_ezsigntemplate_request_v2(int include_optional);



ezsigntemplate_request_v2_t* instantiate_ezsigntemplate_request_v2(int include_optional) {
  ezsigntemplate_request_v2_t* ezsigntemplate_request_v2 = NULL;
  if (include_optional) {
    ezsigntemplate_request_v2 = ezsigntemplate_request_v2_create(
      36,
      5,
      2,
      "Standard Contract",
      "Contract",
      1,
      ezmax_api_definition__full_ezsigntemplate_request_v2__"Usergroup"
    );
  } else {
    ezsigntemplate_request_v2 = ezsigntemplate_request_v2_create(
      36,
      5,
      2,
      "Standard Contract",
      "Contract",
      1,
      ezmax_api_definition__full_ezsigntemplate_request_v2__"Usergroup"
    );
  }

  return ezsigntemplate_request_v2;
}


#ifdef ezsigntemplate_request_v2_MAIN

void test_ezsigntemplate_request_v2(int include_optional) {
    ezsigntemplate_request_v2_t* ezsigntemplate_request_v2_1 = instantiate_ezsigntemplate_request_v2(include_optional);

	cJSON* jsonezsigntemplate_request_v2_1 = ezsigntemplate_request_v2_convertToJSON(ezsigntemplate_request_v2_1);
	printf("ezsigntemplate_request_v2 :\n%s\n", cJSON_Print(jsonezsigntemplate_request_v2_1));
	ezsigntemplate_request_v2_t* ezsigntemplate_request_v2_2 = ezsigntemplate_request_v2_parseFromJSON(jsonezsigntemplate_request_v2_1);
	cJSON* jsonezsigntemplate_request_v2_2 = ezsigntemplate_request_v2_convertToJSON(ezsigntemplate_request_v2_2);
	printf("repeating ezsigntemplate_request_v2:\n%s\n", cJSON_Print(jsonezsigntemplate_request_v2_2));
}

int main() {
  test_ezsigntemplate_request_v2(1);
  test_ezsigntemplate_request_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_request_v2_MAIN
#endif // ezsigntemplate_request_v2_TEST
