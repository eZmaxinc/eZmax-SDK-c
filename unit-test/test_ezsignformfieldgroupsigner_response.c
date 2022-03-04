#ifndef ezsignformfieldgroupsigner_response_TEST
#define ezsignformfieldgroupsigner_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroupsigner_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroupsigner_response.h"
ezsignformfieldgroupsigner_response_t* instantiate_ezsignformfieldgroupsigner_response(int include_optional);



ezsignformfieldgroupsigner_response_t* instantiate_ezsignformfieldgroupsigner_response(int include_optional) {
  ezsignformfieldgroupsigner_response_t* ezsignformfieldgroupsigner_response = NULL;
  if (include_optional) {
    ezsignformfieldgroupsigner_response = ezsignformfieldgroupsigner_response_create(
      81,
      20
    );
  } else {
    ezsignformfieldgroupsigner_response = ezsignformfieldgroupsigner_response_create(
      81,
      20
    );
  }

  return ezsignformfieldgroupsigner_response;
}


#ifdef ezsignformfieldgroupsigner_response_MAIN

void test_ezsignformfieldgroupsigner_response(int include_optional) {
    ezsignformfieldgroupsigner_response_t* ezsignformfieldgroupsigner_response_1 = instantiate_ezsignformfieldgroupsigner_response(include_optional);

	cJSON* jsonezsignformfieldgroupsigner_response_1 = ezsignformfieldgroupsigner_response_convertToJSON(ezsignformfieldgroupsigner_response_1);
	printf("ezsignformfieldgroupsigner_response :\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_response_1));
	ezsignformfieldgroupsigner_response_t* ezsignformfieldgroupsigner_response_2 = ezsignformfieldgroupsigner_response_parseFromJSON(jsonezsignformfieldgroupsigner_response_1);
	cJSON* jsonezsignformfieldgroupsigner_response_2 = ezsignformfieldgroupsigner_response_convertToJSON(ezsignformfieldgroupsigner_response_2);
	printf("repeating ezsignformfieldgroupsigner_response:\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_response_2));
}

int main() {
  test_ezsignformfieldgroupsigner_response(1);
  test_ezsignformfieldgroupsigner_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroupsigner_response_MAIN
#endif // ezsignformfieldgroupsigner_response_TEST
