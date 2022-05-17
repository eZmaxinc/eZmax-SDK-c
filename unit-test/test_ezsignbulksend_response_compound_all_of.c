#ifndef ezsignbulksend_response_compound_all_of_TEST
#define ezsignbulksend_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_response_compound_all_of.h"
ezsignbulksend_response_compound_all_of_t* instantiate_ezsignbulksend_response_compound_all_of(int include_optional);



ezsignbulksend_response_compound_all_of_t* instantiate_ezsignbulksend_response_compound_all_of(int include_optional) {
  ezsignbulksend_response_compound_all_of_t* ezsignbulksend_response_compound_all_of = NULL;
  if (include_optional) {
    ezsignbulksend_response_compound_all_of = ezsignbulksend_response_compound_all_of_create(
      list_createList(),
      list_createList()
    );
  } else {
    ezsignbulksend_response_compound_all_of = ezsignbulksend_response_compound_all_of_create(
      list_createList(),
      list_createList()
    );
  }

  return ezsignbulksend_response_compound_all_of;
}


#ifdef ezsignbulksend_response_compound_all_of_MAIN

void test_ezsignbulksend_response_compound_all_of(int include_optional) {
    ezsignbulksend_response_compound_all_of_t* ezsignbulksend_response_compound_all_of_1 = instantiate_ezsignbulksend_response_compound_all_of(include_optional);

	cJSON* jsonezsignbulksend_response_compound_all_of_1 = ezsignbulksend_response_compound_all_of_convertToJSON(ezsignbulksend_response_compound_all_of_1);
	printf("ezsignbulksend_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsignbulksend_response_compound_all_of_1));
	ezsignbulksend_response_compound_all_of_t* ezsignbulksend_response_compound_all_of_2 = ezsignbulksend_response_compound_all_of_parseFromJSON(jsonezsignbulksend_response_compound_all_of_1);
	cJSON* jsonezsignbulksend_response_compound_all_of_2 = ezsignbulksend_response_compound_all_of_convertToJSON(ezsignbulksend_response_compound_all_of_2);
	printf("repeating ezsignbulksend_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsignbulksend_response_compound_all_of_2));
}

int main() {
  test_ezsignbulksend_response_compound_all_of(1);
  test_ezsignbulksend_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_response_compound_all_of_MAIN
#endif // ezsignbulksend_response_compound_all_of_TEST
