#ifndef subnet_request_compound_TEST
#define subnet_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_request_compound.h"
subnet_request_compound_t* instantiate_subnet_request_compound(int include_optional);

#include "test_multilingual_subnet_description.c"


subnet_request_compound_t* instantiate_subnet_request_compound(int include_optional) {
  subnet_request_compound_t* subnet_request_compound = NULL;
  if (include_optional) {
    subnet_request_compound = subnet_request_compound_create(
      3,
      70,
      99,
       // false, not to have infinite recursion
      instantiate_multilingual_subnet_description(0),
      134744064,
      4294967040
    );
  } else {
    subnet_request_compound = subnet_request_compound_create(
      3,
      70,
      99,
      NULL,
      134744064,
      4294967040
    );
  }

  return subnet_request_compound;
}


#ifdef subnet_request_compound_MAIN

void test_subnet_request_compound(int include_optional) {
    subnet_request_compound_t* subnet_request_compound_1 = instantiate_subnet_request_compound(include_optional);

	cJSON* jsonsubnet_request_compound_1 = subnet_request_compound_convertToJSON(subnet_request_compound_1);
	printf("subnet_request_compound :\n%s\n", cJSON_Print(jsonsubnet_request_compound_1));
	subnet_request_compound_t* subnet_request_compound_2 = subnet_request_compound_parseFromJSON(jsonsubnet_request_compound_1);
	cJSON* jsonsubnet_request_compound_2 = subnet_request_compound_convertToJSON(subnet_request_compound_2);
	printf("repeating subnet_request_compound:\n%s\n", cJSON_Print(jsonsubnet_request_compound_2));
}

int main() {
  test_subnet_request_compound(1);
  test_subnet_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_request_compound_MAIN
#endif // subnet_request_compound_TEST
