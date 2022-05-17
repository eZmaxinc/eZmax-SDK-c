#ifndef ezsigntemplateformfieldgroupsigner_response_compound_TEST
#define ezsigntemplateformfieldgroupsigner_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroupsigner_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroupsigner_response_compound.h"
ezsigntemplateformfieldgroupsigner_response_compound_t* instantiate_ezsigntemplateformfieldgroupsigner_response_compound(int include_optional);



ezsigntemplateformfieldgroupsigner_response_compound_t* instantiate_ezsigntemplateformfieldgroupsigner_response_compound(int include_optional) {
  ezsigntemplateformfieldgroupsigner_response_compound_t* ezsigntemplateformfieldgroupsigner_response_compound = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroupsigner_response_compound = ezsigntemplateformfieldgroupsigner_response_compound_create(
      87,
      9
    );
  } else {
    ezsigntemplateformfieldgroupsigner_response_compound = ezsigntemplateformfieldgroupsigner_response_compound_create(
      87,
      9
    );
  }

  return ezsigntemplateformfieldgroupsigner_response_compound;
}


#ifdef ezsigntemplateformfieldgroupsigner_response_compound_MAIN

void test_ezsigntemplateformfieldgroupsigner_response_compound(int include_optional) {
    ezsigntemplateformfieldgroupsigner_response_compound_t* ezsigntemplateformfieldgroupsigner_response_compound_1 = instantiate_ezsigntemplateformfieldgroupsigner_response_compound(include_optional);

	cJSON* jsonezsigntemplateformfieldgroupsigner_response_compound_1 = ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_response_compound_1);
	printf("ezsigntemplateformfieldgroupsigner_response_compound :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_response_compound_1));
	ezsigntemplateformfieldgroupsigner_response_compound_t* ezsigntemplateformfieldgroupsigner_response_compound_2 = ezsigntemplateformfieldgroupsigner_response_compound_parseFromJSON(jsonezsigntemplateformfieldgroupsigner_response_compound_1);
	cJSON* jsonezsigntemplateformfieldgroupsigner_response_compound_2 = ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_response_compound_2);
	printf("repeating ezsigntemplateformfieldgroupsigner_response_compound:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_response_compound_2));
}

int main() {
  test_ezsigntemplateformfieldgroupsigner_response_compound(1);
  test_ezsigntemplateformfieldgroupsigner_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroupsigner_response_compound_MAIN
#endif // ezsigntemplateformfieldgroupsigner_response_compound_TEST
