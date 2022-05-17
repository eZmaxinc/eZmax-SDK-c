#ifndef ezsigntemplate_response_compound_all_of_TEST
#define ezsigntemplate_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_response_compound_all_of.h"
ezsigntemplate_response_compound_all_of_t* instantiate_ezsigntemplate_response_compound_all_of(int include_optional);

#include "test_ezsigntemplatedocument_response.c"


ezsigntemplate_response_compound_all_of_t* instantiate_ezsigntemplate_response_compound_all_of(int include_optional) {
  ezsigntemplate_response_compound_all_of_t* ezsigntemplate_response_compound_all_of = NULL;
  if (include_optional) {
    ezsigntemplate_response_compound_all_of = ezsigntemplate_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocument_response(0),
      list_createList()
    );
  } else {
    ezsigntemplate_response_compound_all_of = ezsigntemplate_response_compound_all_of_create(
      NULL,
      list_createList()
    );
  }

  return ezsigntemplate_response_compound_all_of;
}


#ifdef ezsigntemplate_response_compound_all_of_MAIN

void test_ezsigntemplate_response_compound_all_of(int include_optional) {
    ezsigntemplate_response_compound_all_of_t* ezsigntemplate_response_compound_all_of_1 = instantiate_ezsigntemplate_response_compound_all_of(include_optional);

	cJSON* jsonezsigntemplate_response_compound_all_of_1 = ezsigntemplate_response_compound_all_of_convertToJSON(ezsigntemplate_response_compound_all_of_1);
	printf("ezsigntemplate_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsigntemplate_response_compound_all_of_1));
	ezsigntemplate_response_compound_all_of_t* ezsigntemplate_response_compound_all_of_2 = ezsigntemplate_response_compound_all_of_parseFromJSON(jsonezsigntemplate_response_compound_all_of_1);
	cJSON* jsonezsigntemplate_response_compound_all_of_2 = ezsigntemplate_response_compound_all_of_convertToJSON(ezsigntemplate_response_compound_all_of_2);
	printf("repeating ezsigntemplate_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsigntemplate_response_compound_all_of_2));
}

int main() {
  test_ezsigntemplate_response_compound_all_of(1);
  test_ezsigntemplate_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_response_compound_all_of_MAIN
#endif // ezsigntemplate_response_compound_all_of_TEST
