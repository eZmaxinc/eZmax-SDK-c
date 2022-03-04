#ifndef ezsignformfieldgroup_request_compound_all_of_TEST
#define ezsignformfieldgroup_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroup_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroup_request_compound_all_of.h"
ezsignformfieldgroup_request_compound_all_of_t* instantiate_ezsignformfieldgroup_request_compound_all_of(int include_optional);



ezsignformfieldgroup_request_compound_all_of_t* instantiate_ezsignformfieldgroup_request_compound_all_of(int include_optional) {
  ezsignformfieldgroup_request_compound_all_of_t* ezsignformfieldgroup_request_compound_all_of = NULL;
  if (include_optional) {
    ezsignformfieldgroup_request_compound_all_of = ezsignformfieldgroup_request_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezsignformfieldgroup_request_compound_all_of = ezsignformfieldgroup_request_compound_all_of_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezsignformfieldgroup_request_compound_all_of;
}


#ifdef ezsignformfieldgroup_request_compound_all_of_MAIN

void test_ezsignformfieldgroup_request_compound_all_of(int include_optional) {
    ezsignformfieldgroup_request_compound_all_of_t* ezsignformfieldgroup_request_compound_all_of_1 = instantiate_ezsignformfieldgroup_request_compound_all_of(include_optional);

	cJSON* jsonezsignformfieldgroup_request_compound_all_of_1 = ezsignformfieldgroup_request_compound_all_of_convertToJSON(ezsignformfieldgroup_request_compound_all_of_1);
	printf("ezsignformfieldgroup_request_compound_all_of :\n%s\n", cJSON_Print(jsonezsignformfieldgroup_request_compound_all_of_1));
	ezsignformfieldgroup_request_compound_all_of_t* ezsignformfieldgroup_request_compound_all_of_2 = ezsignformfieldgroup_request_compound_all_of_parseFromJSON(jsonezsignformfieldgroup_request_compound_all_of_1);
	cJSON* jsonezsignformfieldgroup_request_compound_all_of_2 = ezsignformfieldgroup_request_compound_all_of_convertToJSON(ezsignformfieldgroup_request_compound_all_of_2);
	printf("repeating ezsignformfieldgroup_request_compound_all_of:\n%s\n", cJSON_Print(jsonezsignformfieldgroup_request_compound_all_of_2));
}

int main() {
  test_ezsignformfieldgroup_request_compound_all_of(1);
  test_ezsignformfieldgroup_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroup_request_compound_all_of_MAIN
#endif // ezsignformfieldgroup_request_compound_all_of_TEST
