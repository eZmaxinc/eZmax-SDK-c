#ifndef subnet_response_TEST
#define subnet_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_response.h"
subnet_response_t* instantiate_subnet_response(int include_optional);

#include "test_multilingual_subnet_description.c"


subnet_response_t* instantiate_subnet_response(int include_optional) {
  subnet_response_t* subnet_response = NULL;
  if (include_optional) {
    subnet_response = subnet_response_create(
      3,
      70,
      99,
       // false, not to have infinite recursion
      instantiate_multilingual_subnet_description(0),
      134744064,
      4294967040
    );
  } else {
    subnet_response = subnet_response_create(
      3,
      70,
      99,
      NULL,
      134744064,
      4294967040
    );
  }

  return subnet_response;
}


#ifdef subnet_response_MAIN

void test_subnet_response(int include_optional) {
    subnet_response_t* subnet_response_1 = instantiate_subnet_response(include_optional);

	cJSON* jsonsubnet_response_1 = subnet_response_convertToJSON(subnet_response_1);
	printf("subnet_response :\n%s\n", cJSON_Print(jsonsubnet_response_1));
	subnet_response_t* subnet_response_2 = subnet_response_parseFromJSON(jsonsubnet_response_1);
	cJSON* jsonsubnet_response_2 = subnet_response_convertToJSON(subnet_response_2);
	printf("repeating subnet_response:\n%s\n", cJSON_Print(jsonsubnet_response_2));
}

int main() {
  test_subnet_response(1);
  test_subnet_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_response_MAIN
#endif // subnet_response_TEST
