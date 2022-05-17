#ifndef franchisereferalincome_create_object_v2_response_all_of_TEST
#define franchisereferalincome_create_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisereferalincome_create_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisereferalincome_create_object_v2_response_all_of.h"
franchisereferalincome_create_object_v2_response_all_of_t* instantiate_franchisereferalincome_create_object_v2_response_all_of(int include_optional);

#include "test_franchisereferalincome_create_object_v2_response_m_payload.c"


franchisereferalincome_create_object_v2_response_all_of_t* instantiate_franchisereferalincome_create_object_v2_response_all_of(int include_optional) {
  franchisereferalincome_create_object_v2_response_all_of_t* franchisereferalincome_create_object_v2_response_all_of = NULL;
  if (include_optional) {
    franchisereferalincome_create_object_v2_response_all_of = franchisereferalincome_create_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_franchisereferalincome_create_object_v2_response_m_payload(0)
    );
  } else {
    franchisereferalincome_create_object_v2_response_all_of = franchisereferalincome_create_object_v2_response_all_of_create(
      NULL
    );
  }

  return franchisereferalincome_create_object_v2_response_all_of;
}


#ifdef franchisereferalincome_create_object_v2_response_all_of_MAIN

void test_franchisereferalincome_create_object_v2_response_all_of(int include_optional) {
    franchisereferalincome_create_object_v2_response_all_of_t* franchisereferalincome_create_object_v2_response_all_of_1 = instantiate_franchisereferalincome_create_object_v2_response_all_of(include_optional);

	cJSON* jsonfranchisereferalincome_create_object_v2_response_all_of_1 = franchisereferalincome_create_object_v2_response_all_of_convertToJSON(franchisereferalincome_create_object_v2_response_all_of_1);
	printf("franchisereferalincome_create_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v2_response_all_of_1));
	franchisereferalincome_create_object_v2_response_all_of_t* franchisereferalincome_create_object_v2_response_all_of_2 = franchisereferalincome_create_object_v2_response_all_of_parseFromJSON(jsonfranchisereferalincome_create_object_v2_response_all_of_1);
	cJSON* jsonfranchisereferalincome_create_object_v2_response_all_of_2 = franchisereferalincome_create_object_v2_response_all_of_convertToJSON(franchisereferalincome_create_object_v2_response_all_of_2);
	printf("repeating franchisereferalincome_create_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v2_response_all_of_2));
}

int main() {
  test_franchisereferalincome_create_object_v2_response_all_of(1);
  test_franchisereferalincome_create_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisereferalincome_create_object_v2_response_all_of_MAIN
#endif // franchisereferalincome_create_object_v2_response_all_of_TEST
