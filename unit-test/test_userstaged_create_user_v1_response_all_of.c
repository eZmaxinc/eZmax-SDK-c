#ifndef userstaged_create_user_v1_response_all_of_TEST
#define userstaged_create_user_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_create_user_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_create_user_v1_response_all_of.h"
userstaged_create_user_v1_response_all_of_t* instantiate_userstaged_create_user_v1_response_all_of(int include_optional);

#include "test_userstaged_create_user_v1_response_m_payload.c"


userstaged_create_user_v1_response_all_of_t* instantiate_userstaged_create_user_v1_response_all_of(int include_optional) {
  userstaged_create_user_v1_response_all_of_t* userstaged_create_user_v1_response_all_of = NULL;
  if (include_optional) {
    userstaged_create_user_v1_response_all_of = userstaged_create_user_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_userstaged_create_user_v1_response_m_payload(0)
    );
  } else {
    userstaged_create_user_v1_response_all_of = userstaged_create_user_v1_response_all_of_create(
      NULL
    );
  }

  return userstaged_create_user_v1_response_all_of;
}


#ifdef userstaged_create_user_v1_response_all_of_MAIN

void test_userstaged_create_user_v1_response_all_of(int include_optional) {
    userstaged_create_user_v1_response_all_of_t* userstaged_create_user_v1_response_all_of_1 = instantiate_userstaged_create_user_v1_response_all_of(include_optional);

	cJSON* jsonuserstaged_create_user_v1_response_all_of_1 = userstaged_create_user_v1_response_all_of_convertToJSON(userstaged_create_user_v1_response_all_of_1);
	printf("userstaged_create_user_v1_response_all_of :\n%s\n", cJSON_Print(jsonuserstaged_create_user_v1_response_all_of_1));
	userstaged_create_user_v1_response_all_of_t* userstaged_create_user_v1_response_all_of_2 = userstaged_create_user_v1_response_all_of_parseFromJSON(jsonuserstaged_create_user_v1_response_all_of_1);
	cJSON* jsonuserstaged_create_user_v1_response_all_of_2 = userstaged_create_user_v1_response_all_of_convertToJSON(userstaged_create_user_v1_response_all_of_2);
	printf("repeating userstaged_create_user_v1_response_all_of:\n%s\n", cJSON_Print(jsonuserstaged_create_user_v1_response_all_of_2));
}

int main() {
  test_userstaged_create_user_v1_response_all_of(1);
  test_userstaged_create_user_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_create_user_v1_response_all_of_MAIN
#endif // userstaged_create_user_v1_response_all_of_TEST
