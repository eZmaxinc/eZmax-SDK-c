#ifndef ezsigntemplatesignature_request_compound_all_of_TEST
#define ezsigntemplatesignature_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_request_compound_all_of.h"
ezsigntemplatesignature_request_compound_all_of_t* instantiate_ezsigntemplatesignature_request_compound_all_of(int include_optional);



ezsigntemplatesignature_request_compound_all_of_t* instantiate_ezsigntemplatesignature_request_compound_all_of(int include_optional) {
  ezsigntemplatesignature_request_compound_all_of_t* ezsigntemplatesignature_request_compound_all_of = NULL;
  if (include_optional) {
    ezsigntemplatesignature_request_compound_all_of = ezsigntemplatesignature_request_compound_all_of_create(
      1,
      list_createList()
    );
  } else {
    ezsigntemplatesignature_request_compound_all_of = ezsigntemplatesignature_request_compound_all_of_create(
      1,
      list_createList()
    );
  }

  return ezsigntemplatesignature_request_compound_all_of;
}


#ifdef ezsigntemplatesignature_request_compound_all_of_MAIN

void test_ezsigntemplatesignature_request_compound_all_of(int include_optional) {
    ezsigntemplatesignature_request_compound_all_of_t* ezsigntemplatesignature_request_compound_all_of_1 = instantiate_ezsigntemplatesignature_request_compound_all_of(include_optional);

	cJSON* jsonezsigntemplatesignature_request_compound_all_of_1 = ezsigntemplatesignature_request_compound_all_of_convertToJSON(ezsigntemplatesignature_request_compound_all_of_1);
	printf("ezsigntemplatesignature_request_compound_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_compound_all_of_1));
	ezsigntemplatesignature_request_compound_all_of_t* ezsigntemplatesignature_request_compound_all_of_2 = ezsigntemplatesignature_request_compound_all_of_parseFromJSON(jsonezsigntemplatesignature_request_compound_all_of_1);
	cJSON* jsonezsigntemplatesignature_request_compound_all_of_2 = ezsigntemplatesignature_request_compound_all_of_convertToJSON(ezsigntemplatesignature_request_compound_all_of_2);
	printf("repeating ezsigntemplatesignature_request_compound_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_request_compound_all_of_2));
}

int main() {
  test_ezsigntemplatesignature_request_compound_all_of(1);
  test_ezsigntemplatesignature_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_request_compound_all_of_MAIN
#endif // ezsigntemplatesignature_request_compound_all_of_TEST
