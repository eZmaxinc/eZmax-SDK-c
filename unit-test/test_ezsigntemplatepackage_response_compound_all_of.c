#ifndef ezsigntemplatepackage_response_compound_all_of_TEST
#define ezsigntemplatepackage_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_response_compound_all_of.h"
ezsigntemplatepackage_response_compound_all_of_t* instantiate_ezsigntemplatepackage_response_compound_all_of(int include_optional);



ezsigntemplatepackage_response_compound_all_of_t* instantiate_ezsigntemplatepackage_response_compound_all_of(int include_optional) {
  ezsigntemplatepackage_response_compound_all_of_t* ezsigntemplatepackage_response_compound_all_of = NULL;
  if (include_optional) {
    ezsigntemplatepackage_response_compound_all_of = ezsigntemplatepackage_response_compound_all_of_create(
      list_createList(),
      list_createList()
    );
  } else {
    ezsigntemplatepackage_response_compound_all_of = ezsigntemplatepackage_response_compound_all_of_create(
      list_createList(),
      list_createList()
    );
  }

  return ezsigntemplatepackage_response_compound_all_of;
}


#ifdef ezsigntemplatepackage_response_compound_all_of_MAIN

void test_ezsigntemplatepackage_response_compound_all_of(int include_optional) {
    ezsigntemplatepackage_response_compound_all_of_t* ezsigntemplatepackage_response_compound_all_of_1 = instantiate_ezsigntemplatepackage_response_compound_all_of(include_optional);

	cJSON* jsonezsigntemplatepackage_response_compound_all_of_1 = ezsigntemplatepackage_response_compound_all_of_convertToJSON(ezsigntemplatepackage_response_compound_all_of_1);
	printf("ezsigntemplatepackage_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_response_compound_all_of_1));
	ezsigntemplatepackage_response_compound_all_of_t* ezsigntemplatepackage_response_compound_all_of_2 = ezsigntemplatepackage_response_compound_all_of_parseFromJSON(jsonezsigntemplatepackage_response_compound_all_of_1);
	cJSON* jsonezsigntemplatepackage_response_compound_all_of_2 = ezsigntemplatepackage_response_compound_all_of_convertToJSON(ezsigntemplatepackage_response_compound_all_of_2);
	printf("repeating ezsigntemplatepackage_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_response_compound_all_of_2));
}

int main() {
  test_ezsigntemplatepackage_response_compound_all_of(1);
  test_ezsigntemplatepackage_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_response_compound_all_of_MAIN
#endif // ezsigntemplatepackage_response_compound_all_of_TEST
