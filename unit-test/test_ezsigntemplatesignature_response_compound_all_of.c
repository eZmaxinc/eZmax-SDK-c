#ifndef ezsigntemplatesignature_response_compound_all_of_TEST
#define ezsigntemplatesignature_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_response_compound_all_of.h"
ezsigntemplatesignature_response_compound_all_of_t* instantiate_ezsigntemplatesignature_response_compound_all_of(int include_optional);



ezsigntemplatesignature_response_compound_all_of_t* instantiate_ezsigntemplatesignature_response_compound_all_of(int include_optional) {
  ezsigntemplatesignature_response_compound_all_of_t* ezsigntemplatesignature_response_compound_all_of = NULL;
  if (include_optional) {
    ezsigntemplatesignature_response_compound_all_of = ezsigntemplatesignature_response_compound_all_of_create(
      1,
      list_createList()
    );
  } else {
    ezsigntemplatesignature_response_compound_all_of = ezsigntemplatesignature_response_compound_all_of_create(
      1,
      list_createList()
    );
  }

  return ezsigntemplatesignature_response_compound_all_of;
}


#ifdef ezsigntemplatesignature_response_compound_all_of_MAIN

void test_ezsigntemplatesignature_response_compound_all_of(int include_optional) {
    ezsigntemplatesignature_response_compound_all_of_t* ezsigntemplatesignature_response_compound_all_of_1 = instantiate_ezsigntemplatesignature_response_compound_all_of(include_optional);

	cJSON* jsonezsigntemplatesignature_response_compound_all_of_1 = ezsigntemplatesignature_response_compound_all_of_convertToJSON(ezsigntemplatesignature_response_compound_all_of_1);
	printf("ezsigntemplatesignature_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_response_compound_all_of_1));
	ezsigntemplatesignature_response_compound_all_of_t* ezsigntemplatesignature_response_compound_all_of_2 = ezsigntemplatesignature_response_compound_all_of_parseFromJSON(jsonezsigntemplatesignature_response_compound_all_of_1);
	cJSON* jsonezsigntemplatesignature_response_compound_all_of_2 = ezsigntemplatesignature_response_compound_all_of_convertToJSON(ezsigntemplatesignature_response_compound_all_of_2);
	printf("repeating ezsigntemplatesignature_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_response_compound_all_of_2));
}

int main() {
  test_ezsigntemplatesignature_response_compound_all_of(1);
  test_ezsigntemplatesignature_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_response_compound_all_of_MAIN
#endif // ezsigntemplatesignature_response_compound_all_of_TEST
