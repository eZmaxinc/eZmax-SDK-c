#ifndef subnet_response_compound_TEST
#define subnet_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_response_compound.h"
subnet_response_compound_t* instantiate_subnet_response_compound(int include_optional);

#include "test_multilingual_subnet_description.c"


subnet_response_compound_t* instantiate_subnet_response_compound(int include_optional) {
  subnet_response_compound_t* subnet_response_compound = NULL;
  if (include_optional) {
    subnet_response_compound = subnet_response_compound_create(
      3,
      70,
      99,
       // false, not to have infinite recursion
      instantiate_multilingual_subnet_description(0),
      134744064,
      4294967040
    );
  } else {
    subnet_response_compound = subnet_response_compound_create(
      3,
      70,
      99,
      NULL,
      134744064,
      4294967040
    );
  }

  return subnet_response_compound;
}


#ifdef subnet_response_compound_MAIN

void test_subnet_response_compound(int include_optional) {
    subnet_response_compound_t* subnet_response_compound_1 = instantiate_subnet_response_compound(include_optional);

	cJSON* jsonsubnet_response_compound_1 = subnet_response_compound_convertToJSON(subnet_response_compound_1);
	printf("subnet_response_compound :\n%s\n", cJSON_Print(jsonsubnet_response_compound_1));
	subnet_response_compound_t* subnet_response_compound_2 = subnet_response_compound_parseFromJSON(jsonsubnet_response_compound_1);
	cJSON* jsonsubnet_response_compound_2 = subnet_response_compound_convertToJSON(subnet_response_compound_2);
	printf("repeating subnet_response_compound:\n%s\n", cJSON_Print(jsonsubnet_response_compound_2));
}

int main() {
  test_subnet_response_compound(1);
  test_subnet_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_response_compound_MAIN
#endif // subnet_response_compound_TEST
