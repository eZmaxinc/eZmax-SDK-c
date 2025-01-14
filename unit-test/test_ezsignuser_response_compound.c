#ifndef ezsignuser_response_compound_TEST
#define ezsignuser_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignuser_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignuser_response_compound.h"
ezsignuser_response_compound_t* instantiate_ezsignuser_response_compound(int include_optional);

#include "test_contact_response_compound.c"
#include "test_common_audit.c"


ezsignuser_response_compound_t* instantiate_ezsignuser_response_compound(int include_optional) {
  ezsignuser_response_compound_t* ezsignuser_response_compound = NULL;
  if (include_optional) {
    ezsignuser_response_compound = ezsignuser_response_compound_create(
      94,
      21,
       // false, not to have infinite recursion
      instantiate_contact_response_compound(0),
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsignuser_response_compound = ezsignuser_response_compound_create(
      94,
      21,
      NULL,
      NULL
    );
  }

  return ezsignuser_response_compound;
}


#ifdef ezsignuser_response_compound_MAIN

void test_ezsignuser_response_compound(int include_optional) {
    ezsignuser_response_compound_t* ezsignuser_response_compound_1 = instantiate_ezsignuser_response_compound(include_optional);

	cJSON* jsonezsignuser_response_compound_1 = ezsignuser_response_compound_convertToJSON(ezsignuser_response_compound_1);
	printf("ezsignuser_response_compound :\n%s\n", cJSON_Print(jsonezsignuser_response_compound_1));
	ezsignuser_response_compound_t* ezsignuser_response_compound_2 = ezsignuser_response_compound_parseFromJSON(jsonezsignuser_response_compound_1);
	cJSON* jsonezsignuser_response_compound_2 = ezsignuser_response_compound_convertToJSON(ezsignuser_response_compound_2);
	printf("repeating ezsignuser_response_compound:\n%s\n", cJSON_Print(jsonezsignuser_response_compound_2));
}

int main() {
  test_ezsignuser_response_compound(1);
  test_ezsignuser_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignuser_response_compound_MAIN
#endif // ezsignuser_response_compound_TEST
