#ifndef ezsigntemplatepackagemembership_response_TEST
#define ezsigntemplatepackagemembership_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_response.h"
ezsigntemplatepackagemembership_response_t* instantiate_ezsigntemplatepackagemembership_response(int include_optional);



ezsigntemplatepackagemembership_response_t* instantiate_ezsigntemplatepackagemembership_response(int include_optional) {
  ezsigntemplatepackagemembership_response_t* ezsigntemplatepackagemembership_response = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_response = ezsigntemplatepackagemembership_response_create(
      194,
      99,
      36,
      1
    );
  } else {
    ezsigntemplatepackagemembership_response = ezsigntemplatepackagemembership_response_create(
      194,
      99,
      36,
      1
    );
  }

  return ezsigntemplatepackagemembership_response;
}


#ifdef ezsigntemplatepackagemembership_response_MAIN

void test_ezsigntemplatepackagemembership_response(int include_optional) {
    ezsigntemplatepackagemembership_response_t* ezsigntemplatepackagemembership_response_1 = instantiate_ezsigntemplatepackagemembership_response(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_response_1 = ezsigntemplatepackagemembership_response_convertToJSON(ezsigntemplatepackagemembership_response_1);
	printf("ezsigntemplatepackagemembership_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_response_1));
	ezsigntemplatepackagemembership_response_t* ezsigntemplatepackagemembership_response_2 = ezsigntemplatepackagemembership_response_parseFromJSON(jsonezsigntemplatepackagemembership_response_1);
	cJSON* jsonezsigntemplatepackagemembership_response_2 = ezsigntemplatepackagemembership_response_convertToJSON(ezsigntemplatepackagemembership_response_2);
	printf("repeating ezsigntemplatepackagemembership_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_response_2));
}

int main() {
  test_ezsigntemplatepackagemembership_response(1);
  test_ezsigntemplatepackagemembership_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_response_MAIN
#endif // ezsigntemplatepackagemembership_response_TEST
