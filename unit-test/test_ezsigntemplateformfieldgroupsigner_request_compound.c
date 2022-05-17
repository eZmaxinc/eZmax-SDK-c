#ifndef ezsigntemplateformfieldgroupsigner_request_compound_TEST
#define ezsigntemplateformfieldgroupsigner_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroupsigner_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroupsigner_request_compound.h"
ezsigntemplateformfieldgroupsigner_request_compound_t* instantiate_ezsigntemplateformfieldgroupsigner_request_compound(int include_optional);



ezsigntemplateformfieldgroupsigner_request_compound_t* instantiate_ezsigntemplateformfieldgroupsigner_request_compound(int include_optional) {
  ezsigntemplateformfieldgroupsigner_request_compound_t* ezsigntemplateformfieldgroupsigner_request_compound = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroupsigner_request_compound = ezsigntemplateformfieldgroupsigner_request_compound_create(
      87,
      9
    );
  } else {
    ezsigntemplateformfieldgroupsigner_request_compound = ezsigntemplateformfieldgroupsigner_request_compound_create(
      87,
      9
    );
  }

  return ezsigntemplateformfieldgroupsigner_request_compound;
}


#ifdef ezsigntemplateformfieldgroupsigner_request_compound_MAIN

void test_ezsigntemplateformfieldgroupsigner_request_compound(int include_optional) {
    ezsigntemplateformfieldgroupsigner_request_compound_t* ezsigntemplateformfieldgroupsigner_request_compound_1 = instantiate_ezsigntemplateformfieldgroupsigner_request_compound(include_optional);

	cJSON* jsonezsigntemplateformfieldgroupsigner_request_compound_1 = ezsigntemplateformfieldgroupsigner_request_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_request_compound_1);
	printf("ezsigntemplateformfieldgroupsigner_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_request_compound_1));
	ezsigntemplateformfieldgroupsigner_request_compound_t* ezsigntemplateformfieldgroupsigner_request_compound_2 = ezsigntemplateformfieldgroupsigner_request_compound_parseFromJSON(jsonezsigntemplateformfieldgroupsigner_request_compound_1);
	cJSON* jsonezsigntemplateformfieldgroupsigner_request_compound_2 = ezsigntemplateformfieldgroupsigner_request_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_request_compound_2);
	printf("repeating ezsigntemplateformfieldgroupsigner_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_request_compound_2));
}

int main() {
  test_ezsigntemplateformfieldgroupsigner_request_compound(1);
  test_ezsigntemplateformfieldgroupsigner_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroupsigner_request_compound_MAIN
#endif // ezsigntemplateformfieldgroupsigner_request_compound_TEST
