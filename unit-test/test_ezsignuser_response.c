#ifndef ezsignuser_response_TEST
#define ezsignuser_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignuser_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignuser_response.h"
ezsignuser_response_t* instantiate_ezsignuser_response(int include_optional);

#include "test_contact_response_compound.c"
#include "test_common_audit.c"


ezsignuser_response_t* instantiate_ezsignuser_response(int include_optional) {
  ezsignuser_response_t* ezsignuser_response = NULL;
  if (include_optional) {
    ezsignuser_response = ezsignuser_response_create(
      94,
      21,
       // false, not to have infinite recursion
      instantiate_contact_response_compound(0),
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    ezsignuser_response = ezsignuser_response_create(
      94,
      21,
      NULL,
      NULL
    );
  }

  return ezsignuser_response;
}


#ifdef ezsignuser_response_MAIN

void test_ezsignuser_response(int include_optional) {
    ezsignuser_response_t* ezsignuser_response_1 = instantiate_ezsignuser_response(include_optional);

	cJSON* jsonezsignuser_response_1 = ezsignuser_response_convertToJSON(ezsignuser_response_1);
	printf("ezsignuser_response :\n%s\n", cJSON_Print(jsonezsignuser_response_1));
	ezsignuser_response_t* ezsignuser_response_2 = ezsignuser_response_parseFromJSON(jsonezsignuser_response_1);
	cJSON* jsonezsignuser_response_2 = ezsignuser_response_convertToJSON(ezsignuser_response_2);
	printf("repeating ezsignuser_response:\n%s\n", cJSON_Print(jsonezsignuser_response_2));
}

int main() {
  test_ezsignuser_response(1);
  test_ezsignuser_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignuser_response_MAIN
#endif // ezsignuser_response_TEST
