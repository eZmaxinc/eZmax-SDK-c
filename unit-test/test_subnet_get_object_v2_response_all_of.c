#ifndef subnet_get_object_v2_response_all_of_TEST
#define subnet_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_get_object_v2_response_all_of.h"
subnet_get_object_v2_response_all_of_t* instantiate_subnet_get_object_v2_response_all_of(int include_optional);

#include "test_subnet_get_object_v2_response_m_payload.c"


subnet_get_object_v2_response_all_of_t* instantiate_subnet_get_object_v2_response_all_of(int include_optional) {
  subnet_get_object_v2_response_all_of_t* subnet_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    subnet_get_object_v2_response_all_of = subnet_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_subnet_get_object_v2_response_m_payload(0)
    );
  } else {
    subnet_get_object_v2_response_all_of = subnet_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return subnet_get_object_v2_response_all_of;
}


#ifdef subnet_get_object_v2_response_all_of_MAIN

void test_subnet_get_object_v2_response_all_of(int include_optional) {
    subnet_get_object_v2_response_all_of_t* subnet_get_object_v2_response_all_of_1 = instantiate_subnet_get_object_v2_response_all_of(include_optional);

	cJSON* jsonsubnet_get_object_v2_response_all_of_1 = subnet_get_object_v2_response_all_of_convertToJSON(subnet_get_object_v2_response_all_of_1);
	printf("subnet_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonsubnet_get_object_v2_response_all_of_1));
	subnet_get_object_v2_response_all_of_t* subnet_get_object_v2_response_all_of_2 = subnet_get_object_v2_response_all_of_parseFromJSON(jsonsubnet_get_object_v2_response_all_of_1);
	cJSON* jsonsubnet_get_object_v2_response_all_of_2 = subnet_get_object_v2_response_all_of_convertToJSON(subnet_get_object_v2_response_all_of_2);
	printf("repeating subnet_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonsubnet_get_object_v2_response_all_of_2));
}

int main() {
  test_subnet_get_object_v2_response_all_of(1);
  test_subnet_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_get_object_v2_response_all_of_MAIN
#endif // subnet_get_object_v2_response_all_of_TEST
