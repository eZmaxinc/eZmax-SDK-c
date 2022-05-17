#ifndef ezsigntemplatepackagesigner_request_TEST
#define ezsigntemplatepackagesigner_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_request.h"
ezsigntemplatepackagesigner_request_t* instantiate_ezsigntemplatepackagesigner_request(int include_optional);



ezsigntemplatepackagesigner_request_t* instantiate_ezsigntemplatepackagesigner_request(int include_optional) {
  ezsigntemplatepackagesigner_request_t* ezsigntemplatepackagesigner_request = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_request = ezsigntemplatepackagesigner_request_create(
      174,
      99,
      "Customer"
    );
  } else {
    ezsigntemplatepackagesigner_request = ezsigntemplatepackagesigner_request_create(
      174,
      99,
      "Customer"
    );
  }

  return ezsigntemplatepackagesigner_request;
}


#ifdef ezsigntemplatepackagesigner_request_MAIN

void test_ezsigntemplatepackagesigner_request(int include_optional) {
    ezsigntemplatepackagesigner_request_t* ezsigntemplatepackagesigner_request_1 = instantiate_ezsigntemplatepackagesigner_request(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_request_1 = ezsigntemplatepackagesigner_request_convertToJSON(ezsigntemplatepackagesigner_request_1);
	printf("ezsigntemplatepackagesigner_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_request_1));
	ezsigntemplatepackagesigner_request_t* ezsigntemplatepackagesigner_request_2 = ezsigntemplatepackagesigner_request_parseFromJSON(jsonezsigntemplatepackagesigner_request_1);
	cJSON* jsonezsigntemplatepackagesigner_request_2 = ezsigntemplatepackagesigner_request_convertToJSON(ezsigntemplatepackagesigner_request_2);
	printf("repeating ezsigntemplatepackagesigner_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_request_2));
}

int main() {
  test_ezsigntemplatepackagesigner_request(1);
  test_ezsigntemplatepackagesigner_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_request_MAIN
#endif // ezsigntemplatepackagesigner_request_TEST
