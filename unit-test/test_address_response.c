#ifndef address_response_TEST
#define address_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_response.h"
address_response_t* instantiate_address_response(int include_optional);



address_response_t* instantiate_address_response(int include_optional) {
  address_response_t* address_response = NULL;
  if (include_optional) {
    address_response = address_response_create(
      142,
      1,
      "2540",
      "Daniel-Johnson Blvd.",
      "610",
      "Laval",
      11,
      "Quebec",
      1,
      "Canada",
      "H7T2S3",
      "73.5674",
      "45.5019"
    );
  } else {
    address_response = address_response_create(
      142,
      1,
      "2540",
      "Daniel-Johnson Blvd.",
      "610",
      "Laval",
      11,
      "Quebec",
      1,
      "Canada",
      "H7T2S3",
      "73.5674",
      "45.5019"
    );
  }

  return address_response;
}


#ifdef address_response_MAIN

void test_address_response(int include_optional) {
    address_response_t* address_response_1 = instantiate_address_response(include_optional);

	cJSON* jsonaddress_response_1 = address_response_convertToJSON(address_response_1);
	printf("address_response :\n%s\n", cJSON_Print(jsonaddress_response_1));
	address_response_t* address_response_2 = address_response_parseFromJSON(jsonaddress_response_1);
	cJSON* jsonaddress_response_2 = address_response_convertToJSON(address_response_2);
	printf("repeating address_response:\n%s\n", cJSON_Print(jsonaddress_response_2));
}

int main() {
  test_address_response(1);
  test_address_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_response_MAIN
#endif // address_response_TEST
