#ifndef subnet_request_TEST
#define subnet_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_request.h"
subnet_request_t* instantiate_subnet_request(int include_optional);

#include "test_multilingual_subnet_description.c"


subnet_request_t* instantiate_subnet_request(int include_optional) {
  subnet_request_t* subnet_request = NULL;
  if (include_optional) {
    subnet_request = subnet_request_create(
      3,
      70,
      99,
       // false, not to have infinite recursion
      instantiate_multilingual_subnet_description(0),
      134744064,
      4294967040
    );
  } else {
    subnet_request = subnet_request_create(
      3,
      70,
      99,
      NULL,
      134744064,
      4294967040
    );
  }

  return subnet_request;
}


#ifdef subnet_request_MAIN

void test_subnet_request(int include_optional) {
    subnet_request_t* subnet_request_1 = instantiate_subnet_request(include_optional);

	cJSON* jsonsubnet_request_1 = subnet_request_convertToJSON(subnet_request_1);
	printf("subnet_request :\n%s\n", cJSON_Print(jsonsubnet_request_1));
	subnet_request_t* subnet_request_2 = subnet_request_parseFromJSON(jsonsubnet_request_1);
	cJSON* jsonsubnet_request_2 = subnet_request_convertToJSON(subnet_request_2);
	printf("repeating subnet_request:\n%s\n", cJSON_Print(jsonsubnet_request_2));
}

int main() {
  test_subnet_request(1);
  test_subnet_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_request_MAIN
#endif // subnet_request_TEST
