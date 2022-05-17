#ifndef ezsigntemplatepackagemembership_response_compound_TEST
#define ezsigntemplatepackagemembership_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_response_compound.h"
ezsigntemplatepackagemembership_response_compound_t* instantiate_ezsigntemplatepackagemembership_response_compound(int include_optional);

#include "test_ezsigntemplate_response_compound.c"


ezsigntemplatepackagemembership_response_compound_t* instantiate_ezsigntemplatepackagemembership_response_compound(int include_optional) {
  ezsigntemplatepackagemembership_response_compound_t* ezsigntemplatepackagemembership_response_compound = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_response_compound = ezsigntemplatepackagemembership_response_compound_create(
      194,
      99,
      36,
      1,
       // false, not to have infinite recursion
      instantiate_ezsigntemplate_response_compound(0),
      list_createList()
    );
  } else {
    ezsigntemplatepackagemembership_response_compound = ezsigntemplatepackagemembership_response_compound_create(
      194,
      99,
      36,
      1,
      NULL,
      list_createList()
    );
  }

  return ezsigntemplatepackagemembership_response_compound;
}


#ifdef ezsigntemplatepackagemembership_response_compound_MAIN

void test_ezsigntemplatepackagemembership_response_compound(int include_optional) {
    ezsigntemplatepackagemembership_response_compound_t* ezsigntemplatepackagemembership_response_compound_1 = instantiate_ezsigntemplatepackagemembership_response_compound(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_response_compound_1 = ezsigntemplatepackagemembership_response_compound_convertToJSON(ezsigntemplatepackagemembership_response_compound_1);
	printf("ezsigntemplatepackagemembership_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_response_compound_1));
	ezsigntemplatepackagemembership_response_compound_t* ezsigntemplatepackagemembership_response_compound_2 = ezsigntemplatepackagemembership_response_compound_parseFromJSON(jsonezsigntemplatepackagemembership_response_compound_1);
	cJSON* jsonezsigntemplatepackagemembership_response_compound_2 = ezsigntemplatepackagemembership_response_compound_convertToJSON(ezsigntemplatepackagemembership_response_compound_2);
	printf("repeating ezsigntemplatepackagemembership_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_response_compound_2));
}

int main() {
  test_ezsigntemplatepackagemembership_response_compound(1);
  test_ezsigntemplatepackagemembership_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_response_compound_MAIN
#endif // ezsigntemplatepackagemembership_response_compound_TEST
