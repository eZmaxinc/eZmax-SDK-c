#ifndef franchisereferalincome_create_object_v2_request_TEST
#define franchisereferalincome_create_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisereferalincome_create_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisereferalincome_create_object_v2_request.h"
franchisereferalincome_create_object_v2_request_t* instantiate_franchisereferalincome_create_object_v2_request(int include_optional);



franchisereferalincome_create_object_v2_request_t* instantiate_franchisereferalincome_create_object_v2_request(int include_optional) {
  franchisereferalincome_create_object_v2_request_t* franchisereferalincome_create_object_v2_request = NULL;
  if (include_optional) {
    franchisereferalincome_create_object_v2_request = franchisereferalincome_create_object_v2_request_create(
      list_createList()
    );
  } else {
    franchisereferalincome_create_object_v2_request = franchisereferalincome_create_object_v2_request_create(
      list_createList()
    );
  }

  return franchisereferalincome_create_object_v2_request;
}


#ifdef franchisereferalincome_create_object_v2_request_MAIN

void test_franchisereferalincome_create_object_v2_request(int include_optional) {
    franchisereferalincome_create_object_v2_request_t* franchisereferalincome_create_object_v2_request_1 = instantiate_franchisereferalincome_create_object_v2_request(include_optional);

	cJSON* jsonfranchisereferalincome_create_object_v2_request_1 = franchisereferalincome_create_object_v2_request_convertToJSON(franchisereferalincome_create_object_v2_request_1);
	printf("franchisereferalincome_create_object_v2_request :\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v2_request_1));
	franchisereferalincome_create_object_v2_request_t* franchisereferalincome_create_object_v2_request_2 = franchisereferalincome_create_object_v2_request_parseFromJSON(jsonfranchisereferalincome_create_object_v2_request_1);
	cJSON* jsonfranchisereferalincome_create_object_v2_request_2 = franchisereferalincome_create_object_v2_request_convertToJSON(franchisereferalincome_create_object_v2_request_2);
	printf("repeating franchisereferalincome_create_object_v2_request:\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v2_request_2));
}

int main() {
  test_franchisereferalincome_create_object_v2_request(1);
  test_franchisereferalincome_create_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisereferalincome_create_object_v2_request_MAIN
#endif // franchisereferalincome_create_object_v2_request_TEST
