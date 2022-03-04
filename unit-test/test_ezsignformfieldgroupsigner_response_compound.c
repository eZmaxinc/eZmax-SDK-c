#ifndef ezsignformfieldgroupsigner_response_compound_TEST
#define ezsignformfieldgroupsigner_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroupsigner_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroupsigner_response_compound.h"
ezsignformfieldgroupsigner_response_compound_t* instantiate_ezsignformfieldgroupsigner_response_compound(int include_optional);



ezsignformfieldgroupsigner_response_compound_t* instantiate_ezsignformfieldgroupsigner_response_compound(int include_optional) {
  ezsignformfieldgroupsigner_response_compound_t* ezsignformfieldgroupsigner_response_compound = NULL;
  if (include_optional) {
    ezsignformfieldgroupsigner_response_compound = ezsignformfieldgroupsigner_response_compound_create(
      81,
      20
    );
  } else {
    ezsignformfieldgroupsigner_response_compound = ezsignformfieldgroupsigner_response_compound_create(
      81,
      20
    );
  }

  return ezsignformfieldgroupsigner_response_compound;
}


#ifdef ezsignformfieldgroupsigner_response_compound_MAIN

void test_ezsignformfieldgroupsigner_response_compound(int include_optional) {
    ezsignformfieldgroupsigner_response_compound_t* ezsignformfieldgroupsigner_response_compound_1 = instantiate_ezsignformfieldgroupsigner_response_compound(include_optional);

	cJSON* jsonezsignformfieldgroupsigner_response_compound_1 = ezsignformfieldgroupsigner_response_compound_convertToJSON(ezsignformfieldgroupsigner_response_compound_1);
	printf("ezsignformfieldgroupsigner_response_compound :\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_response_compound_1));
	ezsignformfieldgroupsigner_response_compound_t* ezsignformfieldgroupsigner_response_compound_2 = ezsignformfieldgroupsigner_response_compound_parseFromJSON(jsonezsignformfieldgroupsigner_response_compound_1);
	cJSON* jsonezsignformfieldgroupsigner_response_compound_2 = ezsignformfieldgroupsigner_response_compound_convertToJSON(ezsignformfieldgroupsigner_response_compound_2);
	printf("repeating ezsignformfieldgroupsigner_response_compound:\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_response_compound_2));
}

int main() {
  test_ezsignformfieldgroupsigner_response_compound(1);
  test_ezsignformfieldgroupsigner_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroupsigner_response_compound_MAIN
#endif // ezsignformfieldgroupsigner_response_compound_TEST
