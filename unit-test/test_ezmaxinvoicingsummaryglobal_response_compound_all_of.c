#ifndef ezmaxinvoicingsummaryglobal_response_compound_all_of_TEST
#define ezmaxinvoicingsummaryglobal_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicingsummaryglobal_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicingsummaryglobal_response_compound_all_of.h"
ezmaxinvoicingsummaryglobal_response_compound_all_of_t* instantiate_ezmaxinvoicingsummaryglobal_response_compound_all_of(int include_optional);



ezmaxinvoicingsummaryglobal_response_compound_all_of_t* instantiate_ezmaxinvoicingsummaryglobal_response_compound_all_of(int include_optional) {
  ezmaxinvoicingsummaryglobal_response_compound_all_of_t* ezmaxinvoicingsummaryglobal_response_compound_all_of = NULL;
  if (include_optional) {
    ezmaxinvoicingsummaryglobal_response_compound_all_of = ezmaxinvoicingsummaryglobal_response_compound_all_of_create(
      list_createList()
    );
  } else {
    ezmaxinvoicingsummaryglobal_response_compound_all_of = ezmaxinvoicingsummaryglobal_response_compound_all_of_create(
      list_createList()
    );
  }

  return ezmaxinvoicingsummaryglobal_response_compound_all_of;
}


#ifdef ezmaxinvoicingsummaryglobal_response_compound_all_of_MAIN

void test_ezmaxinvoicingsummaryglobal_response_compound_all_of(int include_optional) {
    ezmaxinvoicingsummaryglobal_response_compound_all_of_t* ezmaxinvoicingsummaryglobal_response_compound_all_of_1 = instantiate_ezmaxinvoicingsummaryglobal_response_compound_all_of(include_optional);

	cJSON* jsonezmaxinvoicingsummaryglobal_response_compound_all_of_1 = ezmaxinvoicingsummaryglobal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_all_of_1);
	printf("ezmaxinvoicingsummaryglobal_response_compound_all_of :\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryglobal_response_compound_all_of_1));
	ezmaxinvoicingsummaryglobal_response_compound_all_of_t* ezmaxinvoicingsummaryglobal_response_compound_all_of_2 = ezmaxinvoicingsummaryglobal_response_compound_all_of_parseFromJSON(jsonezmaxinvoicingsummaryglobal_response_compound_all_of_1);
	cJSON* jsonezmaxinvoicingsummaryglobal_response_compound_all_of_2 = ezmaxinvoicingsummaryglobal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_all_of_2);
	printf("repeating ezmaxinvoicingsummaryglobal_response_compound_all_of:\n%s\n", cJSON_Print(jsonezmaxinvoicingsummaryglobal_response_compound_all_of_2));
}

int main() {
  test_ezmaxinvoicingsummaryglobal_response_compound_all_of(1);
  test_ezmaxinvoicingsummaryglobal_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicingsummaryglobal_response_compound_all_of_MAIN
#endif // ezmaxinvoicingsummaryglobal_response_compound_all_of_TEST
