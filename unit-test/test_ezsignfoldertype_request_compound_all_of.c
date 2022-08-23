#ifndef ezsignfoldertype_request_compound_all_of_TEST
#define ezsignfoldertype_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldertype_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldertype_request_compound_all_of.h"
ezsignfoldertype_request_compound_all_of_t* instantiate_ezsignfoldertype_request_compound_all_of(int include_optional);



ezsignfoldertype_request_compound_all_of_t* instantiate_ezsignfoldertype_request_compound_all_of(int include_optional) {
  ezsignfoldertype_request_compound_all_of_t* ezsignfoldertype_request_compound_all_of = NULL;
  if (include_optional) {
    ezsignfoldertype_request_compound_all_of = ezsignfoldertype_request_compound_all_of_create(
      list_createList(),
      list_createList()
    );
  } else {
    ezsignfoldertype_request_compound_all_of = ezsignfoldertype_request_compound_all_of_create(
      list_createList(),
      list_createList()
    );
  }

  return ezsignfoldertype_request_compound_all_of;
}


#ifdef ezsignfoldertype_request_compound_all_of_MAIN

void test_ezsignfoldertype_request_compound_all_of(int include_optional) {
    ezsignfoldertype_request_compound_all_of_t* ezsignfoldertype_request_compound_all_of_1 = instantiate_ezsignfoldertype_request_compound_all_of(include_optional);

	cJSON* jsonezsignfoldertype_request_compound_all_of_1 = ezsignfoldertype_request_compound_all_of_convertToJSON(ezsignfoldertype_request_compound_all_of_1);
	printf("ezsignfoldertype_request_compound_all_of :\n%s\n", cJSON_Print(jsonezsignfoldertype_request_compound_all_of_1));
	ezsignfoldertype_request_compound_all_of_t* ezsignfoldertype_request_compound_all_of_2 = ezsignfoldertype_request_compound_all_of_parseFromJSON(jsonezsignfoldertype_request_compound_all_of_1);
	cJSON* jsonezsignfoldertype_request_compound_all_of_2 = ezsignfoldertype_request_compound_all_of_convertToJSON(ezsignfoldertype_request_compound_all_of_2);
	printf("repeating ezsignfoldertype_request_compound_all_of:\n%s\n", cJSON_Print(jsonezsignfoldertype_request_compound_all_of_2));
}

int main() {
  test_ezsignfoldertype_request_compound_all_of(1);
  test_ezsignfoldertype_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldertype_request_compound_all_of_MAIN
#endif // ezsignfoldertype_request_compound_all_of_TEST
