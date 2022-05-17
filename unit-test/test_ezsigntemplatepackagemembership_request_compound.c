#ifndef ezsigntemplatepackagemembership_request_compound_TEST
#define ezsigntemplatepackagemembership_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_request_compound.h"
ezsigntemplatepackagemembership_request_compound_t* instantiate_ezsigntemplatepackagemembership_request_compound(int include_optional);



ezsigntemplatepackagemembership_request_compound_t* instantiate_ezsigntemplatepackagemembership_request_compound(int include_optional) {
  ezsigntemplatepackagemembership_request_compound_t* ezsigntemplatepackagemembership_request_compound = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_request_compound = ezsigntemplatepackagemembership_request_compound_create(
      194,
      99,
      36
    );
  } else {
    ezsigntemplatepackagemembership_request_compound = ezsigntemplatepackagemembership_request_compound_create(
      194,
      99,
      36
    );
  }

  return ezsigntemplatepackagemembership_request_compound;
}


#ifdef ezsigntemplatepackagemembership_request_compound_MAIN

void test_ezsigntemplatepackagemembership_request_compound(int include_optional) {
    ezsigntemplatepackagemembership_request_compound_t* ezsigntemplatepackagemembership_request_compound_1 = instantiate_ezsigntemplatepackagemembership_request_compound(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_request_compound_1 = ezsigntemplatepackagemembership_request_compound_convertToJSON(ezsigntemplatepackagemembership_request_compound_1);
	printf("ezsigntemplatepackagemembership_request_compound :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_request_compound_1));
	ezsigntemplatepackagemembership_request_compound_t* ezsigntemplatepackagemembership_request_compound_2 = ezsigntemplatepackagemembership_request_compound_parseFromJSON(jsonezsigntemplatepackagemembership_request_compound_1);
	cJSON* jsonezsigntemplatepackagemembership_request_compound_2 = ezsigntemplatepackagemembership_request_compound_convertToJSON(ezsigntemplatepackagemembership_request_compound_2);
	printf("repeating ezsigntemplatepackagemembership_request_compound:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_request_compound_2));
}

int main() {
  test_ezsigntemplatepackagemembership_request_compound(1);
  test_ezsigntemplatepackagemembership_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_request_compound_MAIN
#endif // ezsigntemplatepackagemembership_request_compound_TEST
