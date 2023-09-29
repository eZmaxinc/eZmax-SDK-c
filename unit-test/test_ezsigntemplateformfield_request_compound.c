#ifndef ezsigntemplateformfield_request_compound_TEST
#define ezsigntemplateformfield_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfield_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfield_request_compound.h"
ezsigntemplateformfield_request_compound_t* instantiate_ezsigntemplateformfield_request_compound(int include_optional);



ezsigntemplateformfield_request_compound_t* instantiate_ezsigntemplateformfield_request_compound(int include_optional) {
  ezsigntemplateformfield_request_compound_t* ezsigntemplateformfield_request_compound = NULL;
  if (include_optional) {
    ezsigntemplateformfield_request_compound = ezsigntemplateformfield_request_compound_create(
      71,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1
    );
  } else {
    ezsigntemplateformfield_request_compound = ezsigntemplateformfield_request_compound_create(
      71,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      1
    );
  }

  return ezsigntemplateformfield_request_compound;
}


#ifdef ezsigntemplateformfield_request_compound_MAIN

void test_ezsigntemplateformfield_request_compound(int include_optional) {
    ezsigntemplateformfield_request_compound_t* ezsigntemplateformfield_request_compound_1 = instantiate_ezsigntemplateformfield_request_compound(include_optional);

	cJSON* jsonezsigntemplateformfield_request_compound_1 = ezsigntemplateformfield_request_compound_convertToJSON(ezsigntemplateformfield_request_compound_1);
	printf("ezsigntemplateformfield_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplateformfield_request_compound_1));
	ezsigntemplateformfield_request_compound_t* ezsigntemplateformfield_request_compound_2 = ezsigntemplateformfield_request_compound_parseFromJSON(jsonezsigntemplateformfield_request_compound_1);
	cJSON* jsonezsigntemplateformfield_request_compound_2 = ezsigntemplateformfield_request_compound_convertToJSON(ezsigntemplateformfield_request_compound_2);
	printf("repeating ezsigntemplateformfield_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplateformfield_request_compound_2));
}

int main() {
  test_ezsigntemplateformfield_request_compound(1);
  test_ezsigntemplateformfield_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfield_request_compound_MAIN
#endif // ezsigntemplateformfield_request_compound_TEST
