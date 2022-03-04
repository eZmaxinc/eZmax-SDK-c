#ifndef ezsignformfieldgroupsigner_request_compound_TEST
#define ezsignformfieldgroupsigner_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroupsigner_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroupsigner_request_compound.h"
ezsignformfieldgroupsigner_request_compound_t* instantiate_ezsignformfieldgroupsigner_request_compound(int include_optional);



ezsignformfieldgroupsigner_request_compound_t* instantiate_ezsignformfieldgroupsigner_request_compound(int include_optional) {
  ezsignformfieldgroupsigner_request_compound_t* ezsignformfieldgroupsigner_request_compound = NULL;
  if (include_optional) {
    ezsignformfieldgroupsigner_request_compound = ezsignformfieldgroupsigner_request_compound_create(
      81,
      20
    );
  } else {
    ezsignformfieldgroupsigner_request_compound = ezsignformfieldgroupsigner_request_compound_create(
      81,
      20
    );
  }

  return ezsignformfieldgroupsigner_request_compound;
}


#ifdef ezsignformfieldgroupsigner_request_compound_MAIN

void test_ezsignformfieldgroupsigner_request_compound(int include_optional) {
    ezsignformfieldgroupsigner_request_compound_t* ezsignformfieldgroupsigner_request_compound_1 = instantiate_ezsignformfieldgroupsigner_request_compound(include_optional);

	cJSON* jsonezsignformfieldgroupsigner_request_compound_1 = ezsignformfieldgroupsigner_request_compound_convertToJSON(ezsignformfieldgroupsigner_request_compound_1);
	printf("ezsignformfieldgroupsigner_request_compound :\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_request_compound_1));
	ezsignformfieldgroupsigner_request_compound_t* ezsignformfieldgroupsigner_request_compound_2 = ezsignformfieldgroupsigner_request_compound_parseFromJSON(jsonezsignformfieldgroupsigner_request_compound_1);
	cJSON* jsonezsignformfieldgroupsigner_request_compound_2 = ezsignformfieldgroupsigner_request_compound_convertToJSON(ezsignformfieldgroupsigner_request_compound_2);
	printf("repeating ezsignformfieldgroupsigner_request_compound:\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_request_compound_2));
}

int main() {
  test_ezsignformfieldgroupsigner_request_compound(1);
  test_ezsignformfieldgroupsigner_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroupsigner_request_compound_MAIN
#endif // ezsignformfieldgroupsigner_request_compound_TEST
