#ifndef franchisereferalincome_request_TEST
#define franchisereferalincome_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisereferalincome_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisereferalincome_request.h"
franchisereferalincome_request_t* instantiate_franchisereferalincome_request(int include_optional);



franchisereferalincome_request_t* instantiate_franchisereferalincome_request(int include_optional) {
  franchisereferalincome_request_t* franchisereferalincome_request = NULL;
  if (include_optional) {
    franchisereferalincome_request = franchisereferalincome_request_create(
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
      "0"
    );
  } else {
    franchisereferalincome_request = franchisereferalincome_request_create(
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
      "0"
    );
  }

  return franchisereferalincome_request;
}


#ifdef franchisereferalincome_request_MAIN

void test_franchisereferalincome_request(int include_optional) {
    franchisereferalincome_request_t* franchisereferalincome_request_1 = instantiate_franchisereferalincome_request(include_optional);

	cJSON* jsonfranchisereferalincome_request_1 = franchisereferalincome_request_convertToJSON(franchisereferalincome_request_1);
	printf("franchisereferalincome_request :\n%s\n", cJSON_Print(jsonfranchisereferalincome_request_1));
	franchisereferalincome_request_t* franchisereferalincome_request_2 = franchisereferalincome_request_parseFromJSON(jsonfranchisereferalincome_request_1);
	cJSON* jsonfranchisereferalincome_request_2 = franchisereferalincome_request_convertToJSON(franchisereferalincome_request_2);
	printf("repeating franchisereferalincome_request:\n%s\n", cJSON_Print(jsonfranchisereferalincome_request_2));
}

int main() {
  test_franchisereferalincome_request(1);
  test_franchisereferalincome_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisereferalincome_request_MAIN
#endif // franchisereferalincome_request_TEST
