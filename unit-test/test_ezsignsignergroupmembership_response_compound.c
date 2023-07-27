#ifndef ezsignsignergroupmembership_response_compound_TEST
#define ezsignsignergroupmembership_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_response_compound.h"
ezsignsignergroupmembership_response_compound_t* instantiate_ezsignsignergroupmembership_response_compound(int include_optional);



ezsignsignergroupmembership_response_compound_t* instantiate_ezsignsignergroupmembership_response_compound(int include_optional) {
  ezsignsignergroupmembership_response_compound_t* ezsignsignergroupmembership_response_compound = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_response_compound = ezsignsignergroupmembership_response_compound_create(
      153,
      27,
      89,
      70,
      2
    );
  } else {
    ezsignsignergroupmembership_response_compound = ezsignsignergroupmembership_response_compound_create(
      153,
      27,
      89,
      70,
      2
    );
  }

  return ezsignsignergroupmembership_response_compound;
}


#ifdef ezsignsignergroupmembership_response_compound_MAIN

void test_ezsignsignergroupmembership_response_compound(int include_optional) {
    ezsignsignergroupmembership_response_compound_t* ezsignsignergroupmembership_response_compound_1 = instantiate_ezsignsignergroupmembership_response_compound(include_optional);

	cJSON* jsonezsignsignergroupmembership_response_compound_1 = ezsignsignergroupmembership_response_compound_convertToJSON(ezsignsignergroupmembership_response_compound_1);
	printf("ezsignsignergroupmembership_response_compound :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_response_compound_1));
	ezsignsignergroupmembership_response_compound_t* ezsignsignergroupmembership_response_compound_2 = ezsignsignergroupmembership_response_compound_parseFromJSON(jsonezsignsignergroupmembership_response_compound_1);
	cJSON* jsonezsignsignergroupmembership_response_compound_2 = ezsignsignergroupmembership_response_compound_convertToJSON(ezsignsignergroupmembership_response_compound_2);
	printf("repeating ezsignsignergroupmembership_response_compound:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_response_compound_2));
}

int main() {
  test_ezsignsignergroupmembership_response_compound(1);
  test_ezsignsignergroupmembership_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_response_compound_MAIN
#endif // ezsignsignergroupmembership_response_compound_TEST
