#ifndef franchisereferalincome_request_compound_all_of_TEST
#define franchisereferalincome_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisereferalincome_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisereferalincome_request_compound_all_of.h"
franchisereferalincome_request_compound_all_of_t* instantiate_franchisereferalincome_request_compound_all_of(int include_optional);

#include "test_address_request.c"


franchisereferalincome_request_compound_all_of_t* instantiate_franchisereferalincome_request_compound_all_of(int include_optional) {
  franchisereferalincome_request_compound_all_of_t* franchisereferalincome_request_compound_all_of = NULL;
  if (include_optional) {
    franchisereferalincome_request_compound_all_of = franchisereferalincome_request_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_address_request(0),
      list_create()
    );
  } else {
    franchisereferalincome_request_compound_all_of = franchisereferalincome_request_compound_all_of_create(
      NULL,
      list_create()
    );
  }

  return franchisereferalincome_request_compound_all_of;
}


#ifdef franchisereferalincome_request_compound_all_of_MAIN

void test_franchisereferalincome_request_compound_all_of(int include_optional) {
    franchisereferalincome_request_compound_all_of_t* franchisereferalincome_request_compound_all_of_1 = instantiate_franchisereferalincome_request_compound_all_of(include_optional);

	cJSON* jsonfranchisereferalincome_request_compound_all_of_1 = franchisereferalincome_request_compound_all_of_convertToJSON(franchisereferalincome_request_compound_all_of_1);
	printf("franchisereferalincome_request_compound_all_of :\n%s\n", cJSON_Print(jsonfranchisereferalincome_request_compound_all_of_1));
	franchisereferalincome_request_compound_all_of_t* franchisereferalincome_request_compound_all_of_2 = franchisereferalincome_request_compound_all_of_parseFromJSON(jsonfranchisereferalincome_request_compound_all_of_1);
	cJSON* jsonfranchisereferalincome_request_compound_all_of_2 = franchisereferalincome_request_compound_all_of_convertToJSON(franchisereferalincome_request_compound_all_of_2);
	printf("repeating franchisereferalincome_request_compound_all_of:\n%s\n", cJSON_Print(jsonfranchisereferalincome_request_compound_all_of_2));
}

int main() {
  test_franchisereferalincome_request_compound_all_of(1);
  test_franchisereferalincome_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisereferalincome_request_compound_all_of_MAIN
#endif // franchisereferalincome_request_compound_all_of_TEST
