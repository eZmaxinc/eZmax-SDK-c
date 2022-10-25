#ifndef ezmaxinvoicing_response_compound_all_of_TEST
#define ezmaxinvoicing_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_response_compound_all_of.h"
ezmaxinvoicing_response_compound_all_of_t* instantiate_ezmaxinvoicing_response_compound_all_of(int include_optional);

#include "test_ezmaxinvoicingcontract_response_compound.c"
#include "test_custom_ezmaxpricing_response.c"


ezmaxinvoicing_response_compound_all_of_t* instantiate_ezmaxinvoicing_response_compound_all_of(int include_optional) {
  ezmaxinvoicing_response_compound_all_of_t* ezmaxinvoicing_response_compound_all_of = NULL;
  if (include_optional) {
    ezmaxinvoicing_response_compound_all_of = ezmaxinvoicing_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezmaxinvoicingcontract_response_compound(0),
       // false, not to have infinite recursion
      instantiate_custom_ezmaxpricing_response(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezmaxinvoicing_response_compound_all_of = ezmaxinvoicing_response_compound_all_of_create(
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezmaxinvoicing_response_compound_all_of;
}


#ifdef ezmaxinvoicing_response_compound_all_of_MAIN

void test_ezmaxinvoicing_response_compound_all_of(int include_optional) {
    ezmaxinvoicing_response_compound_all_of_t* ezmaxinvoicing_response_compound_all_of_1 = instantiate_ezmaxinvoicing_response_compound_all_of(include_optional);

	cJSON* jsonezmaxinvoicing_response_compound_all_of_1 = ezmaxinvoicing_response_compound_all_of_convertToJSON(ezmaxinvoicing_response_compound_all_of_1);
	printf("ezmaxinvoicing_response_compound_all_of :\n%s\n", cJSON_Print(jsonezmaxinvoicing_response_compound_all_of_1));
	ezmaxinvoicing_response_compound_all_of_t* ezmaxinvoicing_response_compound_all_of_2 = ezmaxinvoicing_response_compound_all_of_parseFromJSON(jsonezmaxinvoicing_response_compound_all_of_1);
	cJSON* jsonezmaxinvoicing_response_compound_all_of_2 = ezmaxinvoicing_response_compound_all_of_convertToJSON(ezmaxinvoicing_response_compound_all_of_2);
	printf("repeating ezmaxinvoicing_response_compound_all_of:\n%s\n", cJSON_Print(jsonezmaxinvoicing_response_compound_all_of_2));
}

int main() {
  test_ezmaxinvoicing_response_compound_all_of(1);
  test_ezmaxinvoicing_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_response_compound_all_of_MAIN
#endif // ezmaxinvoicing_response_compound_all_of_TEST
