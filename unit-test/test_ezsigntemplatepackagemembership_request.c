#ifndef ezsigntemplatepackagemembership_request_TEST
#define ezsigntemplatepackagemembership_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_request.h"
ezsigntemplatepackagemembership_request_t* instantiate_ezsigntemplatepackagemembership_request(int include_optional);



ezsigntemplatepackagemembership_request_t* instantiate_ezsigntemplatepackagemembership_request(int include_optional) {
  ezsigntemplatepackagemembership_request_t* ezsigntemplatepackagemembership_request = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_request = ezsigntemplatepackagemembership_request_create(
      194,
      99,
      36
    );
  } else {
    ezsigntemplatepackagemembership_request = ezsigntemplatepackagemembership_request_create(
      194,
      99,
      36
    );
  }

  return ezsigntemplatepackagemembership_request;
}


#ifdef ezsigntemplatepackagemembership_request_MAIN

void test_ezsigntemplatepackagemembership_request(int include_optional) {
    ezsigntemplatepackagemembership_request_t* ezsigntemplatepackagemembership_request_1 = instantiate_ezsigntemplatepackagemembership_request(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_request_1 = ezsigntemplatepackagemembership_request_convertToJSON(ezsigntemplatepackagemembership_request_1);
	printf("ezsigntemplatepackagemembership_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_request_1));
	ezsigntemplatepackagemembership_request_t* ezsigntemplatepackagemembership_request_2 = ezsigntemplatepackagemembership_request_parseFromJSON(jsonezsigntemplatepackagemembership_request_1);
	cJSON* jsonezsigntemplatepackagemembership_request_2 = ezsigntemplatepackagemembership_request_convertToJSON(ezsigntemplatepackagemembership_request_2);
	printf("repeating ezsigntemplatepackagemembership_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_request_2));
}

int main() {
  test_ezsigntemplatepackagemembership_request(1);
  test_ezsigntemplatepackagemembership_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_request_MAIN
#endif // ezsigntemplatepackagemembership_request_TEST
