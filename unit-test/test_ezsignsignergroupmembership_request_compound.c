#ifndef ezsignsignergroupmembership_request_compound_TEST
#define ezsignsignergroupmembership_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_request_compound.h"
ezsignsignergroupmembership_request_compound_t* instantiate_ezsignsignergroupmembership_request_compound(int include_optional);



ezsignsignergroupmembership_request_compound_t* instantiate_ezsignsignergroupmembership_request_compound(int include_optional) {
  ezsignsignergroupmembership_request_compound_t* ezsignsignergroupmembership_request_compound = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_request_compound = ezsignsignergroupmembership_request_compound_create(
      153,
      27,
      89,
      70,
      2
    );
  } else {
    ezsignsignergroupmembership_request_compound = ezsignsignergroupmembership_request_compound_create(
      153,
      27,
      89,
      70,
      2
    );
  }

  return ezsignsignergroupmembership_request_compound;
}


#ifdef ezsignsignergroupmembership_request_compound_MAIN

void test_ezsignsignergroupmembership_request_compound(int include_optional) {
    ezsignsignergroupmembership_request_compound_t* ezsignsignergroupmembership_request_compound_1 = instantiate_ezsignsignergroupmembership_request_compound(include_optional);

	cJSON* jsonezsignsignergroupmembership_request_compound_1 = ezsignsignergroupmembership_request_compound_convertToJSON(ezsignsignergroupmembership_request_compound_1);
	printf("ezsignsignergroupmembership_request_compound :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_request_compound_1));
	ezsignsignergroupmembership_request_compound_t* ezsignsignergroupmembership_request_compound_2 = ezsignsignergroupmembership_request_compound_parseFromJSON(jsonezsignsignergroupmembership_request_compound_1);
	cJSON* jsonezsignsignergroupmembership_request_compound_2 = ezsignsignergroupmembership_request_compound_convertToJSON(ezsignsignergroupmembership_request_compound_2);
	printf("repeating ezsignsignergroupmembership_request_compound:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_request_compound_2));
}

int main() {
  test_ezsignsignergroupmembership_request_compound(1);
  test_ezsignsignergroupmembership_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_request_compound_MAIN
#endif // ezsignsignergroupmembership_request_compound_TEST
