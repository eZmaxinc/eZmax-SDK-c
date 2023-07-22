#ifndef usergroupmembership_get_object_v2_response_all_of_TEST
#define usergroupmembership_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_get_object_v2_response_all_of.h"
usergroupmembership_get_object_v2_response_all_of_t* instantiate_usergroupmembership_get_object_v2_response_all_of(int include_optional);

#include "test_usergroupmembership_get_object_v2_response_m_payload.c"


usergroupmembership_get_object_v2_response_all_of_t* instantiate_usergroupmembership_get_object_v2_response_all_of(int include_optional) {
  usergroupmembership_get_object_v2_response_all_of_t* usergroupmembership_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    usergroupmembership_get_object_v2_response_all_of = usergroupmembership_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_usergroupmembership_get_object_v2_response_m_payload(0)
    );
  } else {
    usergroupmembership_get_object_v2_response_all_of = usergroupmembership_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return usergroupmembership_get_object_v2_response_all_of;
}


#ifdef usergroupmembership_get_object_v2_response_all_of_MAIN

void test_usergroupmembership_get_object_v2_response_all_of(int include_optional) {
    usergroupmembership_get_object_v2_response_all_of_t* usergroupmembership_get_object_v2_response_all_of_1 = instantiate_usergroupmembership_get_object_v2_response_all_of(include_optional);

	cJSON* jsonusergroupmembership_get_object_v2_response_all_of_1 = usergroupmembership_get_object_v2_response_all_of_convertToJSON(usergroupmembership_get_object_v2_response_all_of_1);
	printf("usergroupmembership_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonusergroupmembership_get_object_v2_response_all_of_1));
	usergroupmembership_get_object_v2_response_all_of_t* usergroupmembership_get_object_v2_response_all_of_2 = usergroupmembership_get_object_v2_response_all_of_parseFromJSON(jsonusergroupmembership_get_object_v2_response_all_of_1);
	cJSON* jsonusergroupmembership_get_object_v2_response_all_of_2 = usergroupmembership_get_object_v2_response_all_of_convertToJSON(usergroupmembership_get_object_v2_response_all_of_2);
	printf("repeating usergroupmembership_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonusergroupmembership_get_object_v2_response_all_of_2));
}

int main() {
  test_usergroupmembership_get_object_v2_response_all_of(1);
  test_usergroupmembership_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_get_object_v2_response_all_of_MAIN
#endif // usergroupmembership_get_object_v2_response_all_of_TEST
