#ifndef ezsigndocument_response_compound_all_of_TEST
#define ezsigndocument_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_response_compound_all_of.h"
ezsigndocument_response_compound_all_of_t* instantiate_ezsigndocument_response_compound_all_of(int include_optional);



ezsigndocument_response_compound_all_of_t* instantiate_ezsigndocument_response_compound_all_of(int include_optional) {
  ezsigndocument_response_compound_all_of_t* ezsigndocument_response_compound_all_of = NULL;
  if (include_optional) {
    ezsigndocument_response_compound_all_of = ezsigndocument_response_compound_all_of_create(
      2,
      1,
      2,
      0,
      list_createList()
    );
  } else {
    ezsigndocument_response_compound_all_of = ezsigndocument_response_compound_all_of_create(
      2,
      1,
      2,
      0,
      list_createList()
    );
  }

  return ezsigndocument_response_compound_all_of;
}


#ifdef ezsigndocument_response_compound_all_of_MAIN

void test_ezsigndocument_response_compound_all_of(int include_optional) {
    ezsigndocument_response_compound_all_of_t* ezsigndocument_response_compound_all_of_1 = instantiate_ezsigndocument_response_compound_all_of(include_optional);

	cJSON* jsonezsigndocument_response_compound_all_of_1 = ezsigndocument_response_compound_all_of_convertToJSON(ezsigndocument_response_compound_all_of_1);
	printf("ezsigndocument_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsigndocument_response_compound_all_of_1));
	ezsigndocument_response_compound_all_of_t* ezsigndocument_response_compound_all_of_2 = ezsigndocument_response_compound_all_of_parseFromJSON(jsonezsigndocument_response_compound_all_of_1);
	cJSON* jsonezsigndocument_response_compound_all_of_2 = ezsigndocument_response_compound_all_of_convertToJSON(ezsigndocument_response_compound_all_of_2);
	printf("repeating ezsigndocument_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsigndocument_response_compound_all_of_2));
}

int main() {
  test_ezsigndocument_response_compound_all_of(1);
  test_ezsigndocument_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_response_compound_all_of_MAIN
#endif // ezsigndocument_response_compound_all_of_TEST
