#ifndef address_request_TEST
#define address_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_request.h"
address_request_t* instantiate_address_request(int include_optional);



address_request_t* instantiate_address_request(int include_optional) {
  address_request_t* address_request = NULL;
  if (include_optional) {
    address_request = address_request_create(
      142,
      1,
      "2540",
      "Daniel-Johnson Blvd.",
      "610",
      "Laval",
      11,
      1,
      "H7T2S3",
      "doej",
      "doej"
    );
  } else {
    address_request = address_request_create(
      142,
      1,
      "2540",
      "Daniel-Johnson Blvd.",
      "610",
      "Laval",
      11,
      1,
      "H7T2S3",
      "doej",
      "doej"
    );
  }

  return address_request;
}


#ifdef address_request_MAIN

void test_address_request(int include_optional) {
    address_request_t* address_request_1 = instantiate_address_request(include_optional);

	cJSON* jsonaddress_request_1 = address_request_convertToJSON(address_request_1);
	printf("address_request :\n%s\n", cJSON_Print(jsonaddress_request_1));
	address_request_t* address_request_2 = address_request_parseFromJSON(jsonaddress_request_1);
	cJSON* jsonaddress_request_2 = address_request_convertToJSON(address_request_2);
	printf("repeating address_request:\n%s\n", cJSON_Print(jsonaddress_request_2));
}

int main() {
  test_address_request(1);
  test_address_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_request_MAIN
#endif // address_request_TEST
