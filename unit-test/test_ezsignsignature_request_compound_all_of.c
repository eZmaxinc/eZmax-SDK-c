#ifndef ezsignsignature_request_compound_all_of_TEST
#define ezsignsignature_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_request_compound_all_of.h"
ezsignsignature_request_compound_all_of_t* instantiate_ezsignsignature_request_compound_all_of(int include_optional);



ezsignsignature_request_compound_all_of_t* instantiate_ezsignsignature_request_compound_all_of(int include_optional) {
  ezsignsignature_request_compound_all_of_t* ezsignsignature_request_compound_all_of = NULL;
  if (include_optional) {
    ezsignsignature_request_compound_all_of = ezsignsignature_request_compound_all_of_create(
      1,
      list_createList()
    );
  } else {
    ezsignsignature_request_compound_all_of = ezsignsignature_request_compound_all_of_create(
      1,
      list_createList()
    );
  }

  return ezsignsignature_request_compound_all_of;
}


#ifdef ezsignsignature_request_compound_all_of_MAIN

void test_ezsignsignature_request_compound_all_of(int include_optional) {
    ezsignsignature_request_compound_all_of_t* ezsignsignature_request_compound_all_of_1 = instantiate_ezsignsignature_request_compound_all_of(include_optional);

	cJSON* jsonezsignsignature_request_compound_all_of_1 = ezsignsignature_request_compound_all_of_convertToJSON(ezsignsignature_request_compound_all_of_1);
	printf("ezsignsignature_request_compound_all_of :\n%s\n", cJSON_Print(jsonezsignsignature_request_compound_all_of_1));
	ezsignsignature_request_compound_all_of_t* ezsignsignature_request_compound_all_of_2 = ezsignsignature_request_compound_all_of_parseFromJSON(jsonezsignsignature_request_compound_all_of_1);
	cJSON* jsonezsignsignature_request_compound_all_of_2 = ezsignsignature_request_compound_all_of_convertToJSON(ezsignsignature_request_compound_all_of_2);
	printf("repeating ezsignsignature_request_compound_all_of:\n%s\n", cJSON_Print(jsonezsignsignature_request_compound_all_of_2));
}

int main() {
  test_ezsignsignature_request_compound_all_of(1);
  test_ezsignsignature_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_request_compound_all_of_MAIN
#endif // ezsignsignature_request_compound_all_of_TEST
