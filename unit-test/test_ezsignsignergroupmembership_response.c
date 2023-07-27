#ifndef ezsignsignergroupmembership_response_TEST
#define ezsignsignergroupmembership_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_response.h"
ezsignsignergroupmembership_response_t* instantiate_ezsignsignergroupmembership_response(int include_optional);



ezsignsignergroupmembership_response_t* instantiate_ezsignsignergroupmembership_response(int include_optional) {
  ezsignsignergroupmembership_response_t* ezsignsignergroupmembership_response = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_response = ezsignsignergroupmembership_response_create(
      153,
      27,
      89,
      70,
      2
    );
  } else {
    ezsignsignergroupmembership_response = ezsignsignergroupmembership_response_create(
      153,
      27,
      89,
      70,
      2
    );
  }

  return ezsignsignergroupmembership_response;
}


#ifdef ezsignsignergroupmembership_response_MAIN

void test_ezsignsignergroupmembership_response(int include_optional) {
    ezsignsignergroupmembership_response_t* ezsignsignergroupmembership_response_1 = instantiate_ezsignsignergroupmembership_response(include_optional);

	cJSON* jsonezsignsignergroupmembership_response_1 = ezsignsignergroupmembership_response_convertToJSON(ezsignsignergroupmembership_response_1);
	printf("ezsignsignergroupmembership_response :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_response_1));
	ezsignsignergroupmembership_response_t* ezsignsignergroupmembership_response_2 = ezsignsignergroupmembership_response_parseFromJSON(jsonezsignsignergroupmembership_response_1);
	cJSON* jsonezsignsignergroupmembership_response_2 = ezsignsignergroupmembership_response_convertToJSON(ezsignsignergroupmembership_response_2);
	printf("repeating ezsignsignergroupmembership_response:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_response_2));
}

int main() {
  test_ezsignsignergroupmembership_response(1);
  test_ezsignsignergroupmembership_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_response_MAIN
#endif // ezsignsignergroupmembership_response_TEST
