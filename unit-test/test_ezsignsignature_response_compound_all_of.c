#ifndef ezsignsignature_response_compound_all_of_TEST
#define ezsignsignature_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_response_compound_all_of.h"
ezsignsignature_response_compound_all_of_t* instantiate_ezsignsignature_response_compound_all_of(int include_optional);



ezsignsignature_response_compound_all_of_t* instantiate_ezsignsignature_response_compound_all_of(int include_optional) {
  ezsignsignature_response_compound_all_of_t* ezsignsignature_response_compound_all_of = NULL;
  if (include_optional) {
    ezsignsignature_response_compound_all_of = ezsignsignature_response_compound_all_of_create(
      1,
      list_createList()
    );
  } else {
    ezsignsignature_response_compound_all_of = ezsignsignature_response_compound_all_of_create(
      1,
      list_createList()
    );
  }

  return ezsignsignature_response_compound_all_of;
}


#ifdef ezsignsignature_response_compound_all_of_MAIN

void test_ezsignsignature_response_compound_all_of(int include_optional) {
    ezsignsignature_response_compound_all_of_t* ezsignsignature_response_compound_all_of_1 = instantiate_ezsignsignature_response_compound_all_of(include_optional);

	cJSON* jsonezsignsignature_response_compound_all_of_1 = ezsignsignature_response_compound_all_of_convertToJSON(ezsignsignature_response_compound_all_of_1);
	printf("ezsignsignature_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsignsignature_response_compound_all_of_1));
	ezsignsignature_response_compound_all_of_t* ezsignsignature_response_compound_all_of_2 = ezsignsignature_response_compound_all_of_parseFromJSON(jsonezsignsignature_response_compound_all_of_1);
	cJSON* jsonezsignsignature_response_compound_all_of_2 = ezsignsignature_response_compound_all_of_convertToJSON(ezsignsignature_response_compound_all_of_2);
	printf("repeating ezsignsignature_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsignsignature_response_compound_all_of_2));
}

int main() {
  test_ezsignsignature_response_compound_all_of(1);
  test_ezsignsignature_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_response_compound_all_of_MAIN
#endif // ezsignsignature_response_compound_all_of_TEST
