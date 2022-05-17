#ifndef ezsigntemplateformfieldgroup_request_compound_all_of_TEST
#define ezsigntemplateformfieldgroup_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_request_compound_all_of.h"
ezsigntemplateformfieldgroup_request_compound_all_of_t* instantiate_ezsigntemplateformfieldgroup_request_compound_all_of(int include_optional);



ezsigntemplateformfieldgroup_request_compound_all_of_t* instantiate_ezsigntemplateformfieldgroup_request_compound_all_of(int include_optional) {
  ezsigntemplateformfieldgroup_request_compound_all_of_t* ezsigntemplateformfieldgroup_request_compound_all_of = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_request_compound_all_of = ezsigntemplateformfieldgroup_request_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezsigntemplateformfieldgroup_request_compound_all_of = ezsigntemplateformfieldgroup_request_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezsigntemplateformfieldgroup_request_compound_all_of;
}


#ifdef ezsigntemplateformfieldgroup_request_compound_all_of_MAIN

void test_ezsigntemplateformfieldgroup_request_compound_all_of(int include_optional) {
    ezsigntemplateformfieldgroup_request_compound_all_of_t* ezsigntemplateformfieldgroup_request_compound_all_of_1 = instantiate_ezsigntemplateformfieldgroup_request_compound_all_of(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_request_compound_all_of_1 = ezsigntemplateformfieldgroup_request_compound_all_of_convertToJSON(ezsigntemplateformfieldgroup_request_compound_all_of_1);
	printf("ezsigntemplateformfieldgroup_request_compound_all_of :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_request_compound_all_of_1));
	ezsigntemplateformfieldgroup_request_compound_all_of_t* ezsigntemplateformfieldgroup_request_compound_all_of_2 = ezsigntemplateformfieldgroup_request_compound_all_of_parseFromJSON(jsonezsigntemplateformfieldgroup_request_compound_all_of_1);
	cJSON* jsonezsigntemplateformfieldgroup_request_compound_all_of_2 = ezsigntemplateformfieldgroup_request_compound_all_of_convertToJSON(ezsigntemplateformfieldgroup_request_compound_all_of_2);
	printf("repeating ezsigntemplateformfieldgroup_request_compound_all_of:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_request_compound_all_of_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_request_compound_all_of(1);
  test_ezsigntemplateformfieldgroup_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_request_compound_all_of_MAIN
#endif // ezsigntemplateformfieldgroup_request_compound_all_of_TEST
