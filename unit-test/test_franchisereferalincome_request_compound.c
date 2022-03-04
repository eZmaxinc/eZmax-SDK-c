#ifndef franchisereferalincome_request_compound_TEST
#define franchisereferalincome_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisereferalincome_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisereferalincome_request_compound.h"
franchisereferalincome_request_compound_t* instantiate_franchisereferalincome_request_compound(int include_optional);

#include "test_address_request.c"


franchisereferalincome_request_compound_t* instantiate_franchisereferalincome_request_compound(int include_optional) {
  franchisereferalincome_request_compound_t* franchisereferalincome_request_compound = NULL;
  if (include_optional) {
    franchisereferalincome_request_compound = franchisereferalincome_request_compound_create(
      35,
      61,
      51,
      21,
      "500275.62",
      "275.00",
      "385.00",
      "800.00",
      "2020-12-31",
      "This is a comment",
      50,
      "0",
       // false, not to have infinite recursion
      instantiate_address_request(0),
      list_createList()
    );
  } else {
    franchisereferalincome_request_compound = franchisereferalincome_request_compound_create(
      35,
      61,
      51,
      21,
      "500275.62",
      "275.00",
      "385.00",
      "800.00",
      "2020-12-31",
      "This is a comment",
      50,
      "0",
      NULL,
      list_createList()
    );
  }

  return franchisereferalincome_request_compound;
}


#ifdef franchisereferalincome_request_compound_MAIN

void test_franchisereferalincome_request_compound(int include_optional) {
    franchisereferalincome_request_compound_t* franchisereferalincome_request_compound_1 = instantiate_franchisereferalincome_request_compound(include_optional);

	cJSON* jsonfranchisereferalincome_request_compound_1 = franchisereferalincome_request_compound_convertToJSON(franchisereferalincome_request_compound_1);
	printf("franchisereferalincome_request_compound :\n%s\n", cJSON_Print(jsonfranchisereferalincome_request_compound_1));
	franchisereferalincome_request_compound_t* franchisereferalincome_request_compound_2 = franchisereferalincome_request_compound_parseFromJSON(jsonfranchisereferalincome_request_compound_1);
	cJSON* jsonfranchisereferalincome_request_compound_2 = franchisereferalincome_request_compound_convertToJSON(franchisereferalincome_request_compound_2);
	printf("repeating franchisereferalincome_request_compound:\n%s\n", cJSON_Print(jsonfranchisereferalincome_request_compound_2));
}

int main() {
  test_franchisereferalincome_request_compound(1);
  test_franchisereferalincome_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisereferalincome_request_compound_MAIN
#endif // franchisereferalincome_request_compound_TEST
