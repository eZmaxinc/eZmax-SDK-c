#ifndef ezsignbulksend_response_compound_TEST
#define ezsignbulksend_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_response_compound.h"
ezsignbulksend_response_compound_t* instantiate_ezsignbulksend_response_compound(int include_optional);

#include "test_common_audit.c"


ezsignbulksend_response_compound_t* instantiate_ezsignbulksend_response_compound(int include_optional) {
  ezsignbulksend_response_compound_t* ezsignbulksend_response_compound = NULL;
  if (include_optional) {
    ezsignbulksend_response_compound = ezsignbulksend_response_compound_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  } else {
    ezsignbulksend_response_compound = ezsignbulksend_response_compound_create(
      8,
      5,
      2,
      "Test eZsign Bulk Send",
      "This is a note",
      1,
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  }

  return ezsignbulksend_response_compound;
}


#ifdef ezsignbulksend_response_compound_MAIN

void test_ezsignbulksend_response_compound(int include_optional) {
    ezsignbulksend_response_compound_t* ezsignbulksend_response_compound_1 = instantiate_ezsignbulksend_response_compound(include_optional);

	cJSON* jsonezsignbulksend_response_compound_1 = ezsignbulksend_response_compound_convertToJSON(ezsignbulksend_response_compound_1);
	printf("ezsignbulksend_response_compound :\n%s\n", cJSON_Print(jsonezsignbulksend_response_compound_1));
	ezsignbulksend_response_compound_t* ezsignbulksend_response_compound_2 = ezsignbulksend_response_compound_parseFromJSON(jsonezsignbulksend_response_compound_1);
	cJSON* jsonezsignbulksend_response_compound_2 = ezsignbulksend_response_compound_convertToJSON(ezsignbulksend_response_compound_2);
	printf("repeating ezsignbulksend_response_compound:\n%s\n", cJSON_Print(jsonezsignbulksend_response_compound_2));
}

int main() {
  test_ezsignbulksend_response_compound(1);
  test_ezsignbulksend_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_response_compound_MAIN
#endif // ezsignbulksend_response_compound_TEST
