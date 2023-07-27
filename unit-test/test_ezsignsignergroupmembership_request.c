#ifndef ezsignsignergroupmembership_request_TEST
#define ezsignsignergroupmembership_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_request.h"
ezsignsignergroupmembership_request_t* instantiate_ezsignsignergroupmembership_request(int include_optional);



ezsignsignergroupmembership_request_t* instantiate_ezsignsignergroupmembership_request(int include_optional) {
  ezsignsignergroupmembership_request_t* ezsignsignergroupmembership_request = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_request = ezsignsignergroupmembership_request_create(
      153,
      27,
      89,
      70,
      2
    );
  } else {
    ezsignsignergroupmembership_request = ezsignsignergroupmembership_request_create(
      153,
      27,
      89,
      70,
      2
    );
  }

  return ezsignsignergroupmembership_request;
}


#ifdef ezsignsignergroupmembership_request_MAIN

void test_ezsignsignergroupmembership_request(int include_optional) {
    ezsignsignergroupmembership_request_t* ezsignsignergroupmembership_request_1 = instantiate_ezsignsignergroupmembership_request(include_optional);

	cJSON* jsonezsignsignergroupmembership_request_1 = ezsignsignergroupmembership_request_convertToJSON(ezsignsignergroupmembership_request_1);
	printf("ezsignsignergroupmembership_request :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_request_1));
	ezsignsignergroupmembership_request_t* ezsignsignergroupmembership_request_2 = ezsignsignergroupmembership_request_parseFromJSON(jsonezsignsignergroupmembership_request_1);
	cJSON* jsonezsignsignergroupmembership_request_2 = ezsignsignergroupmembership_request_convertToJSON(ezsignsignergroupmembership_request_2);
	printf("repeating ezsignsignergroupmembership_request:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_request_2));
}

int main() {
  test_ezsignsignergroupmembership_request(1);
  test_ezsignsignergroupmembership_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_request_MAIN
#endif // ezsignsignergroupmembership_request_TEST
