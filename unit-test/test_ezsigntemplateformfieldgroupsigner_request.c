#ifndef ezsigntemplateformfieldgroupsigner_request_TEST
#define ezsigntemplateformfieldgroupsigner_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroupsigner_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroupsigner_request.h"
ezsigntemplateformfieldgroupsigner_request_t* instantiate_ezsigntemplateformfieldgroupsigner_request(int include_optional);



ezsigntemplateformfieldgroupsigner_request_t* instantiate_ezsigntemplateformfieldgroupsigner_request(int include_optional) {
  ezsigntemplateformfieldgroupsigner_request_t* ezsigntemplateformfieldgroupsigner_request = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroupsigner_request = ezsigntemplateformfieldgroupsigner_request_create(
      87,
      9
    );
  } else {
    ezsigntemplateformfieldgroupsigner_request = ezsigntemplateformfieldgroupsigner_request_create(
      87,
      9
    );
  }

  return ezsigntemplateformfieldgroupsigner_request;
}


#ifdef ezsigntemplateformfieldgroupsigner_request_MAIN

void test_ezsigntemplateformfieldgroupsigner_request(int include_optional) {
    ezsigntemplateformfieldgroupsigner_request_t* ezsigntemplateformfieldgroupsigner_request_1 = instantiate_ezsigntemplateformfieldgroupsigner_request(include_optional);

	cJSON* jsonezsigntemplateformfieldgroupsigner_request_1 = ezsigntemplateformfieldgroupsigner_request_convertToJSON(ezsigntemplateformfieldgroupsigner_request_1);
	printf("ezsigntemplateformfieldgroupsigner_request :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_request_1));
	ezsigntemplateformfieldgroupsigner_request_t* ezsigntemplateformfieldgroupsigner_request_2 = ezsigntemplateformfieldgroupsigner_request_parseFromJSON(jsonezsigntemplateformfieldgroupsigner_request_1);
	cJSON* jsonezsigntemplateformfieldgroupsigner_request_2 = ezsigntemplateformfieldgroupsigner_request_convertToJSON(ezsigntemplateformfieldgroupsigner_request_2);
	printf("repeating ezsigntemplateformfieldgroupsigner_request:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroupsigner_request_2));
}

int main() {
  test_ezsigntemplateformfieldgroupsigner_request(1);
  test_ezsigntemplateformfieldgroupsigner_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroupsigner_request_MAIN
#endif // ezsigntemplateformfieldgroupsigner_request_TEST
