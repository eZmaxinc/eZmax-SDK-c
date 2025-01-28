#ifndef address_request_compound_TEST
#define address_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_request_compound.h"
address_request_compound_t* instantiate_address_request_compound(int include_optional);



address_request_compound_t* instantiate_address_request_compound(int include_optional) {
  address_request_compound_t* address_request_compound = NULL;
  if (include_optional) {
    address_request_compound = address_request_compound_create(
      142,
      1,
      "2540",
      "Daniel-Johnson Blvd.",
      "610",
      "Laval",
      11,
      1,
      "H7T2S3",
      "73.5674",
      "45.5019"
    );
  } else {
    address_request_compound = address_request_compound_create(
      142,
      1,
      "2540",
      "Daniel-Johnson Blvd.",
      "610",
      "Laval",
      11,
      1,
      "H7T2S3",
      "73.5674",
      "45.5019"
    );
  }

  return address_request_compound;
}


#ifdef address_request_compound_MAIN

void test_address_request_compound(int include_optional) {
    address_request_compound_t* address_request_compound_1 = instantiate_address_request_compound(include_optional);

	cJSON* jsonaddress_request_compound_1 = address_request_compound_convertToJSON(address_request_compound_1);
	printf("address_request_compound :\n%s\n", cJSON_Print(jsonaddress_request_compound_1));
	address_request_compound_t* address_request_compound_2 = address_request_compound_parseFromJSON(jsonaddress_request_compound_1);
	cJSON* jsonaddress_request_compound_2 = address_request_compound_convertToJSON(address_request_compound_2);
	printf("repeating address_request_compound:\n%s\n", cJSON_Print(jsonaddress_request_compound_2));
}

int main() {
  test_address_request_compound(1);
  test_address_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_request_compound_MAIN
#endif // address_request_compound_TEST
