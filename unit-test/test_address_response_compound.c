#ifndef address_response_compound_TEST
#define address_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_response_compound.h"
address_response_compound_t* instantiate_address_response_compound(int include_optional);



address_response_compound_t* instantiate_address_response_compound(int include_optional) {
  address_response_compound_t* address_response_compound = NULL;
  if (include_optional) {
    address_response_compound = address_response_compound_create(
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
      "doej",
      "doej"
    );
  } else {
    address_response_compound = address_response_compound_create(
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
      "doej",
      "doej"
    );
  }

  return address_response_compound;
}


#ifdef address_response_compound_MAIN

void test_address_response_compound(int include_optional) {
    address_response_compound_t* address_response_compound_1 = instantiate_address_response_compound(include_optional);

	cJSON* jsonaddress_response_compound_1 = address_response_compound_convertToJSON(address_response_compound_1);
	printf("address_response_compound :\n%s\n", cJSON_Print(jsonaddress_response_compound_1));
	address_response_compound_t* address_response_compound_2 = address_response_compound_parseFromJSON(jsonaddress_response_compound_1);
	cJSON* jsonaddress_response_compound_2 = address_response_compound_convertToJSON(address_response_compound_2);
	printf("repeating address_response_compound:\n%s\n", cJSON_Print(jsonaddress_response_compound_2));
}

int main() {
  test_address_response_compound(1);
  test_address_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_response_compound_MAIN
#endif // address_response_compound_TEST
