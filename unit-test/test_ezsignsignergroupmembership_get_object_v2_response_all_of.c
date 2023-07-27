#ifndef ezsignsignergroupmembership_get_object_v2_response_all_of_TEST
#define ezsignsignergroupmembership_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_get_object_v2_response_all_of.h"
ezsignsignergroupmembership_get_object_v2_response_all_of_t* instantiate_ezsignsignergroupmembership_get_object_v2_response_all_of(int include_optional);

#include "test_ezsignsignergroupmembership_get_object_v2_response_m_payload.c"


ezsignsignergroupmembership_get_object_v2_response_all_of_t* instantiate_ezsignsignergroupmembership_get_object_v2_response_all_of(int include_optional) {
  ezsignsignergroupmembership_get_object_v2_response_all_of_t* ezsignsignergroupmembership_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_get_object_v2_response_all_of = ezsignsignergroupmembership_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroupmembership_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignsignergroupmembership_get_object_v2_response_all_of = ezsignsignergroupmembership_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsignsignergroupmembership_get_object_v2_response_all_of;
}


#ifdef ezsignsignergroupmembership_get_object_v2_response_all_of_MAIN

void test_ezsignsignergroupmembership_get_object_v2_response_all_of(int include_optional) {
    ezsignsignergroupmembership_get_object_v2_response_all_of_t* ezsignsignergroupmembership_get_object_v2_response_all_of_1 = instantiate_ezsignsignergroupmembership_get_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignsignergroupmembership_get_object_v2_response_all_of_1 = ezsignsignergroupmembership_get_object_v2_response_all_of_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_all_of_1);
	printf("ezsignsignergroupmembership_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_get_object_v2_response_all_of_1));
	ezsignsignergroupmembership_get_object_v2_response_all_of_t* ezsignsignergroupmembership_get_object_v2_response_all_of_2 = ezsignsignergroupmembership_get_object_v2_response_all_of_parseFromJSON(jsonezsignsignergroupmembership_get_object_v2_response_all_of_1);
	cJSON* jsonezsignsignergroupmembership_get_object_v2_response_all_of_2 = ezsignsignergroupmembership_get_object_v2_response_all_of_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_all_of_2);
	printf("repeating ezsignsignergroupmembership_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_get_object_v2_response_all_of_2));
}

int main() {
  test_ezsignsignergroupmembership_get_object_v2_response_all_of(1);
  test_ezsignsignergroupmembership_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_get_object_v2_response_all_of_MAIN
#endif // ezsignsignergroupmembership_get_object_v2_response_all_of_TEST
