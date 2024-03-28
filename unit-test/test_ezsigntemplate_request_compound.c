#ifndef ezsigntemplate_request_compound_TEST
#define ezsigntemplate_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_request_compound.h"
ezsigntemplate_request_compound_t* instantiate_ezsigntemplate_request_compound(int include_optional);



ezsigntemplate_request_compound_t* instantiate_ezsigntemplate_request_compound(int include_optional) {
  ezsigntemplate_request_compound_t* ezsigntemplate_request_compound = NULL;
  if (include_optional) {
    ezsigntemplate_request_compound = ezsigntemplate_request_compound_create(
      36,
      5,
      2,
      "Standard Contract",
      "Contract",
      1
    );
  } else {
    ezsigntemplate_request_compound = ezsigntemplate_request_compound_create(
      36,
      5,
      2,
      "Standard Contract",
      "Contract",
      1
    );
  }

  return ezsigntemplate_request_compound;
}


#ifdef ezsigntemplate_request_compound_MAIN

void test_ezsigntemplate_request_compound(int include_optional) {
    ezsigntemplate_request_compound_t* ezsigntemplate_request_compound_1 = instantiate_ezsigntemplate_request_compound(include_optional);

	cJSON* jsonezsigntemplate_request_compound_1 = ezsigntemplate_request_compound_convertToJSON(ezsigntemplate_request_compound_1);
	printf("ezsigntemplate_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplate_request_compound_1));
	ezsigntemplate_request_compound_t* ezsigntemplate_request_compound_2 = ezsigntemplate_request_compound_parseFromJSON(jsonezsigntemplate_request_compound_1);
	cJSON* jsonezsigntemplate_request_compound_2 = ezsigntemplate_request_compound_convertToJSON(ezsigntemplate_request_compound_2);
	printf("repeating ezsigntemplate_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplate_request_compound_2));
}

int main() {
  test_ezsigntemplate_request_compound(1);
  test_ezsigntemplate_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_request_compound_MAIN
#endif // ezsigntemplate_request_compound_TEST
