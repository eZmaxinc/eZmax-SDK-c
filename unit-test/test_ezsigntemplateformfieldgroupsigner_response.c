#ifndef ezsigntemplateformfieldgroupsigner_response_TEST
#define ezsigntemplateformfieldgroupsigner_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroupsigner_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroupsigner_response.h"
ezsigntemplateformfieldgroupsigner_response_t* instantiate_ezsigntemplateformfieldgroupsigner_response(int include_optional);



ezsigntemplateformfieldgroupsigner_response_t* instantiate_ezsigntemplateformfieldgroupsigner_response(int include_optional) {
  ezsigntemplateformfieldgroupsigner_response_t* ezsigntemplateformfieldgroupsigner_response = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroupsigner_response = ezsigntemplateformfieldgroupsigner_response_create(
      87,
      9
    );
  } else {
    ezsigntemplateformfieldgroupsigner_response = ezsigntemplateformfieldgroupsigner_response_create(
      87,
      9
    );
  }

  return ezsigntemplateformfieldgroupsigner_response;
}


#ifdef ezsigntemplateformfieldgroupsigner_response_MAIN

void test_ezsigntemplateformfieldgroupsigner_response(int include_optional) {
    ezsigntemplateformfieldgroupsigner_response_t* ezsigntemplateformfieldgroupsigner_response_1 = instantiate_ezsigntemplateformfieldgroupsigner_response(include_optional);

	cJSON* jsonezsigntemplateformfieldgroupsigner_response_1 = ezsigntemplateformfieldgroupsigner_response_convertToJSON(ezsigntemplateformfieldgroupsigner_response_1);
	printf("ezsigntemplateformfieldgroupsigner_response :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_response_1));
	ezsigntemplateformfieldgroupsigner_response_t* ezsigntemplateformfieldgroupsigner_response_2 = ezsigntemplateformfieldgroupsigner_response_parseFromJSON(jsonezsigntemplateformfieldgroupsigner_response_1);
	cJSON* jsonezsigntemplateformfieldgroupsigner_response_2 = ezsigntemplateformfieldgroupsigner_response_convertToJSON(ezsigntemplateformfieldgroupsigner_response_2);
	printf("repeating ezsigntemplateformfieldgroupsigner_response:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_response_2));
}

int main() {
  test_ezsigntemplateformfieldgroupsigner_response(1);
  test_ezsigntemplateformfieldgroupsigner_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroupsigner_response_MAIN
#endif // ezsigntemplateformfieldgroupsigner_response_TEST
