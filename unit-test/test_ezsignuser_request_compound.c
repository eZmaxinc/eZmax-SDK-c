#ifndef ezsignuser_request_compound_TEST
#define ezsignuser_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignuser_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignuser_request_compound.h"
ezsignuser_request_compound_t* instantiate_ezsignuser_request_compound(int include_optional);

#include "test_contact_request_compound_v2.c"


ezsignuser_request_compound_t* instantiate_ezsignuser_request_compound(int include_optional) {
  ezsignuser_request_compound_t* ezsignuser_request_compound = NULL;
  if (include_optional) {
    ezsignuser_request_compound = ezsignuser_request_compound_create(
      94,
      21,
       // false, not to have infinite recursion
      instantiate_contact_request_compound_v2(0)
    );
  } else {
    ezsignuser_request_compound = ezsignuser_request_compound_create(
      94,
      21,
      NULL
    );
  }

  return ezsignuser_request_compound;
}


#ifdef ezsignuser_request_compound_MAIN

void test_ezsignuser_request_compound(int include_optional) {
    ezsignuser_request_compound_t* ezsignuser_request_compound_1 = instantiate_ezsignuser_request_compound(include_optional);

	cJSON* jsonezsignuser_request_compound_1 = ezsignuser_request_compound_convertToJSON(ezsignuser_request_compound_1);
	printf("ezsignuser_request_compound :\n%s\n", cJSON_Print(jsonezsignuser_request_compound_1));
	ezsignuser_request_compound_t* ezsignuser_request_compound_2 = ezsignuser_request_compound_parseFromJSON(jsonezsignuser_request_compound_1);
	cJSON* jsonezsignuser_request_compound_2 = ezsignuser_request_compound_convertToJSON(ezsignuser_request_compound_2);
	printf("repeating ezsignuser_request_compound:\n%s\n", cJSON_Print(jsonezsignuser_request_compound_2));
}

int main() {
  test_ezsignuser_request_compound(1);
  test_ezsignuser_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignuser_request_compound_MAIN
#endif // ezsignuser_request_compound_TEST
