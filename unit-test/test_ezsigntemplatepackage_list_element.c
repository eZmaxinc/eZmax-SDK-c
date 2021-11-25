#ifndef ezsigntemplatepackage_list_element_TEST
#define ezsigntemplatepackage_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_list_element.h"
ezsigntemplatepackage_list_element_t* instantiate_ezsigntemplatepackage_list_element(int include_optional);

#include "test_one_ofintegerobject.c"
#include "test_one_ofintegerobject.c"
#include "test_one_ofintegerobject.c"


ezsigntemplatepackage_list_element_t* instantiate_ezsigntemplatepackage_list_element(int include_optional) {
  ezsigntemplatepackage_list_element_t* ezsigntemplatepackage_list_element = NULL;
  if (include_optional) {
    ezsigntemplatepackage_list_element = ezsigntemplatepackage_list_element_create(
      99,
      null,
      null,
      null,
      2,
      ezmax_api_definition_ezsigntemplatepackage_list_element__"User",
      "Package for new clients",
      1,
      56
    );
  } else {
    ezsigntemplatepackage_list_element = ezsigntemplatepackage_list_element_create(
      99,
      null,
      null,
      null,
      2,
      ezmax_api_definition_ezsigntemplatepackage_list_element__"User",
      "Package for new clients",
      1,
      56
    );
  }

  return ezsigntemplatepackage_list_element;
}


#ifdef ezsigntemplatepackage_list_element_MAIN

void test_ezsigntemplatepackage_list_element(int include_optional) {
    ezsigntemplatepackage_list_element_t* ezsigntemplatepackage_list_element_1 = instantiate_ezsigntemplatepackage_list_element(include_optional);

	cJSON* jsonezsigntemplatepackage_list_element_1 = ezsigntemplatepackage_list_element_convertToJSON(ezsigntemplatepackage_list_element_1);
	printf("ezsigntemplatepackage_list_element :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_list_element_1));
	ezsigntemplatepackage_list_element_t* ezsigntemplatepackage_list_element_2 = ezsigntemplatepackage_list_element_parseFromJSON(jsonezsigntemplatepackage_list_element_1);
	cJSON* jsonezsigntemplatepackage_list_element_2 = ezsigntemplatepackage_list_element_convertToJSON(ezsigntemplatepackage_list_element_2);
	printf("repeating ezsigntemplatepackage_list_element:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_list_element_2));
}

int main() {
  test_ezsigntemplatepackage_list_element(1);
  test_ezsigntemplatepackage_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_list_element_MAIN
#endif // ezsigntemplatepackage_list_element_TEST
