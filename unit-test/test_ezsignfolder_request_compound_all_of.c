#ifndef ezsignfolder_request_compound_all_of_TEST
#define ezsignfolder_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_request_compound_all_of.h"
ezsignfolder_request_compound_all_of_t* instantiate_ezsignfolder_request_compound_all_of(int include_optional);



ezsignfolder_request_compound_all_of_t* instantiate_ezsignfolder_request_compound_all_of(int include_optional) {
  ezsignfolder_request_compound_all_of_t* ezsignfolder_request_compound_all_of = NULL;
  if (include_optional) {
    ezsignfolder_request_compound_all_of = ezsignfolder_request_compound_all_of_create(
      list_create()
    );
  } else {
    ezsignfolder_request_compound_all_of = ezsignfolder_request_compound_all_of_create(
      list_create()
    );
  }

  return ezsignfolder_request_compound_all_of;
}


#ifdef ezsignfolder_request_compound_all_of_MAIN

void test_ezsignfolder_request_compound_all_of(int include_optional) {
    ezsignfolder_request_compound_all_of_t* ezsignfolder_request_compound_all_of_1 = instantiate_ezsignfolder_request_compound_all_of(include_optional);

	cJSON* jsonezsignfolder_request_compound_all_of_1 = ezsignfolder_request_compound_all_of_convertToJSON(ezsignfolder_request_compound_all_of_1);
	printf("ezsignfolder_request_compound_all_of :\n%s\n", cJSON_Print(jsonezsignfolder_request_compound_all_of_1));
	ezsignfolder_request_compound_all_of_t* ezsignfolder_request_compound_all_of_2 = ezsignfolder_request_compound_all_of_parseFromJSON(jsonezsignfolder_request_compound_all_of_1);
	cJSON* jsonezsignfolder_request_compound_all_of_2 = ezsignfolder_request_compound_all_of_convertToJSON(ezsignfolder_request_compound_all_of_2);
	printf("repeating ezsignfolder_request_compound_all_of:\n%s\n", cJSON_Print(jsonezsignfolder_request_compound_all_of_2));
}

int main() {
  test_ezsignfolder_request_compound_all_of(1);
  test_ezsignfolder_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_request_compound_all_of_MAIN
#endif // ezsignfolder_request_compound_all_of_TEST
