#ifndef ezsignfolder_response_all_of_TEST
#define ezsignfolder_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_response_all_of.h"
ezsignfolder_response_all_of_t* instantiate_ezsignfolder_response_all_of(int include_optional);

#include "test_common_audit.c"


ezsignfolder_response_all_of_t* instantiate_ezsignfolder_response_all_of(int include_optional) {
  ezsignfolder_response_all_of_t* ezsignfolder_response_all_of = NULL;
  if (include_optional) {
    ezsignfolder_response_all_of = ezsignfolder_response_all_of_create(
      5,
      92,
      "Test eZsign Folder",
      "An extra notes we can add to the ezsign folder",
      ezmax_api_definition_ezsignfolder_response_all_of__"None",
      33,
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsignfolder_response_all_of__"Completed",
      "2020-12-31 23:59:59",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  } else {
    ezsignfolder_response_all_of = ezsignfolder_response_all_of_create(
      5,
      92,
      "Test eZsign Folder",
      "An extra notes we can add to the ezsign folder",
      ezmax_api_definition_ezsignfolder_response_all_of__"None",
      33,
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsignfolder_response_all_of__"Completed",
      "2020-12-31 23:59:59",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  }

  return ezsignfolder_response_all_of;
}


#ifdef ezsignfolder_response_all_of_MAIN

void test_ezsignfolder_response_all_of(int include_optional) {
    ezsignfolder_response_all_of_t* ezsignfolder_response_all_of_1 = instantiate_ezsignfolder_response_all_of(include_optional);

	cJSON* jsonezsignfolder_response_all_of_1 = ezsignfolder_response_all_of_convertToJSON(ezsignfolder_response_all_of_1);
	printf("ezsignfolder_response_all_of :\n%s\n", cJSON_Print(jsonezsignfolder_response_all_of_1));
	ezsignfolder_response_all_of_t* ezsignfolder_response_all_of_2 = ezsignfolder_response_all_of_parseFromJSON(jsonezsignfolder_response_all_of_1);
	cJSON* jsonezsignfolder_response_all_of_2 = ezsignfolder_response_all_of_convertToJSON(ezsignfolder_response_all_of_2);
	printf("repeating ezsignfolder_response_all_of:\n%s\n", cJSON_Print(jsonezsignfolder_response_all_of_2));
}

int main() {
  test_ezsignfolder_response_all_of(1);
  test_ezsignfolder_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_response_all_of_MAIN
#endif // ezsignfolder_response_all_of_TEST
