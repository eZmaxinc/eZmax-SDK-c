#ifndef ezsignsignergroupmembership_create_object_v1_response_all_of_TEST
#define ezsignsignergroupmembership_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_create_object_v1_response_all_of.h"
ezsignsignergroupmembership_create_object_v1_response_all_of_t* instantiate_ezsignsignergroupmembership_create_object_v1_response_all_of(int include_optional);

#include "test_ezsignsignergroupmembership_create_object_v1_response_m_payload.c"


ezsignsignergroupmembership_create_object_v1_response_all_of_t* instantiate_ezsignsignergroupmembership_create_object_v1_response_all_of(int include_optional) {
  ezsignsignergroupmembership_create_object_v1_response_all_of_t* ezsignsignergroupmembership_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_create_object_v1_response_all_of = ezsignsignergroupmembership_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroupmembership_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsignsignergroupmembership_create_object_v1_response_all_of = ezsignsignergroupmembership_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsignsignergroupmembership_create_object_v1_response_all_of;
}


#ifdef ezsignsignergroupmembership_create_object_v1_response_all_of_MAIN

void test_ezsignsignergroupmembership_create_object_v1_response_all_of(int include_optional) {
    ezsignsignergroupmembership_create_object_v1_response_all_of_t* ezsignsignergroupmembership_create_object_v1_response_all_of_1 = instantiate_ezsignsignergroupmembership_create_object_v1_response_all_of(include_optional);

	cJSON* jsonezsignsignergroupmembership_create_object_v1_response_all_of_1 = ezsignsignergroupmembership_create_object_v1_response_all_of_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_all_of_1);
	printf("ezsignsignergroupmembership_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_create_object_v1_response_all_of_1));
	ezsignsignergroupmembership_create_object_v1_response_all_of_t* ezsignsignergroupmembership_create_object_v1_response_all_of_2 = ezsignsignergroupmembership_create_object_v1_response_all_of_parseFromJSON(jsonezsignsignergroupmembership_create_object_v1_response_all_of_1);
	cJSON* jsonezsignsignergroupmembership_create_object_v1_response_all_of_2 = ezsignsignergroupmembership_create_object_v1_response_all_of_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_all_of_2);
	printf("repeating ezsignsignergroupmembership_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_create_object_v1_response_all_of_2));
}

int main() {
  test_ezsignsignergroupmembership_create_object_v1_response_all_of(1);
  test_ezsignsignergroupmembership_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_create_object_v1_response_all_of_MAIN
#endif // ezsignsignergroupmembership_create_object_v1_response_all_of_TEST
