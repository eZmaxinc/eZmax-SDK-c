#ifndef ezsignformfieldgroupsigner_request_TEST
#define ezsignformfieldgroupsigner_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfieldgroupsigner_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfieldgroupsigner_request.h"
ezsignformfieldgroupsigner_request_t* instantiate_ezsignformfieldgroupsigner_request(int include_optional);



ezsignformfieldgroupsigner_request_t* instantiate_ezsignformfieldgroupsigner_request(int include_optional) {
  ezsignformfieldgroupsigner_request_t* ezsignformfieldgroupsigner_request = NULL;
  if (include_optional) {
    ezsignformfieldgroupsigner_request = ezsignformfieldgroupsigner_request_create(
      81,
      20
    );
  } else {
    ezsignformfieldgroupsigner_request = ezsignformfieldgroupsigner_request_create(
      81,
      20
    );
  }

  return ezsignformfieldgroupsigner_request;
}


#ifdef ezsignformfieldgroupsigner_request_MAIN

void test_ezsignformfieldgroupsigner_request(int include_optional) {
    ezsignformfieldgroupsigner_request_t* ezsignformfieldgroupsigner_request_1 = instantiate_ezsignformfieldgroupsigner_request(include_optional);

	cJSON* jsonezsignformfieldgroupsigner_request_1 = ezsignformfieldgroupsigner_request_convertToJSON(ezsignformfieldgroupsigner_request_1);
	printf("ezsignformfieldgroupsigner_request :\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_request_1));
	ezsignformfieldgroupsigner_request_t* ezsignformfieldgroupsigner_request_2 = ezsignformfieldgroupsigner_request_parseFromJSON(jsonezsignformfieldgroupsigner_request_1);
	cJSON* jsonezsignformfieldgroupsigner_request_2 = ezsignformfieldgroupsigner_request_convertToJSON(ezsignformfieldgroupsigner_request_2);
	printf("repeating ezsignformfieldgroupsigner_request:\n%s\n", cJSON_Print(jsonezsignformfieldgroupsigner_request_2));
}

int main() {
  test_ezsignformfieldgroupsigner_request(1);
  test_ezsignformfieldgroupsigner_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfieldgroupsigner_request_MAIN
#endif // ezsignformfieldgroupsigner_request_TEST
