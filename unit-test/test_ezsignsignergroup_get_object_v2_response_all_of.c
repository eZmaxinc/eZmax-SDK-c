#ifndef ezsignsignergroup_get_object_v2_response_all_of_TEST
#define ezsignsignergroup_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_get_object_v2_response_all_of.h"
ezsignsignergroup_get_object_v2_response_all_of_t* instantiate_ezsignsignergroup_get_object_v2_response_all_of(int include_optional);

#include "test_ezsignsignergroup_get_object_v2_response_m_payload.c"


ezsignsignergroup_get_object_v2_response_all_of_t* instantiate_ezsignsignergroup_get_object_v2_response_all_of(int include_optional) {
  ezsignsignergroup_get_object_v2_response_all_of_t* ezsignsignergroup_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignsignergroup_get_object_v2_response_all_of = ezsignsignergroup_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroup_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignsignergroup_get_object_v2_response_all_of = ezsignsignergroup_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return ezsignsignergroup_get_object_v2_response_all_of;
}


#ifdef ezsignsignergroup_get_object_v2_response_all_of_MAIN

void test_ezsignsignergroup_get_object_v2_response_all_of(int include_optional) {
    ezsignsignergroup_get_object_v2_response_all_of_t* ezsignsignergroup_get_object_v2_response_all_of_1 = instantiate_ezsignsignergroup_get_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignsignergroup_get_object_v2_response_all_of_1 = ezsignsignergroup_get_object_v2_response_all_of_convertToJSON(ezsignsignergroup_get_object_v2_response_all_of_1);
	printf("ezsignsignergroup_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignsignergroup_get_object_v2_response_all_of_1));
	ezsignsignergroup_get_object_v2_response_all_of_t* ezsignsignergroup_get_object_v2_response_all_of_2 = ezsignsignergroup_get_object_v2_response_all_of_parseFromJSON(jsonezsignsignergroup_get_object_v2_response_all_of_1);
	cJSON* jsonezsignsignergroup_get_object_v2_response_all_of_2 = ezsignsignergroup_get_object_v2_response_all_of_convertToJSON(ezsignsignergroup_get_object_v2_response_all_of_2);
	printf("repeating ezsignsignergroup_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignsignergroup_get_object_v2_response_all_of_2));
}

int main() {
  test_ezsignsignergroup_get_object_v2_response_all_of(1);
  test_ezsignsignergroup_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_get_object_v2_response_all_of_MAIN
#endif // ezsignsignergroup_get_object_v2_response_all_of_TEST
