#ifndef ezsigntemplateformfieldgroup_create_object_v1_response_all_of_TEST
#define ezsigntemplateformfieldgroup_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_create_object_v1_response_all_of.h"
ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t* instantiate_ezsigntemplateformfieldgroup_create_object_v1_response_all_of(int include_optional);

#include "test_ezsigntemplateformfieldgroup_create_object_v1_response_m_payload.c"


ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t* instantiate_ezsigntemplateformfieldgroup_create_object_v1_response_all_of(int include_optional) {
  ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t* ezsigntemplateformfieldgroup_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_create_object_v1_response_all_of = ezsigntemplateformfieldgroup_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplateformfieldgroup_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplateformfieldgroup_create_object_v1_response_all_of = ezsigntemplateformfieldgroup_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsigntemplateformfieldgroup_create_object_v1_response_all_of;
}


#ifdef ezsigntemplateformfieldgroup_create_object_v1_response_all_of_MAIN

void test_ezsigntemplateformfieldgroup_create_object_v1_response_all_of(int include_optional) {
    ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t* ezsigntemplateformfieldgroup_create_object_v1_response_all_of_1 = instantiate_ezsigntemplateformfieldgroup_create_object_v1_response_all_of(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_create_object_v1_response_all_of_1 = ezsigntemplateformfieldgroup_create_object_v1_response_all_of_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_response_all_of_1);
	printf("ezsigntemplateformfieldgroup_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_create_object_v1_response_all_of_1));
	ezsigntemplateformfieldgroup_create_object_v1_response_all_of_t* ezsigntemplateformfieldgroup_create_object_v1_response_all_of_2 = ezsigntemplateformfieldgroup_create_object_v1_response_all_of_parseFromJSON(jsonezsigntemplateformfieldgroup_create_object_v1_response_all_of_1);
	cJSON* jsonezsigntemplateformfieldgroup_create_object_v1_response_all_of_2 = ezsigntemplateformfieldgroup_create_object_v1_response_all_of_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_response_all_of_2);
	printf("repeating ezsigntemplateformfieldgroup_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_create_object_v1_response_all_of_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_create_object_v1_response_all_of(1);
  test_ezsigntemplateformfieldgroup_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_create_object_v1_response_all_of_MAIN
#endif // ezsigntemplateformfieldgroup_create_object_v1_response_all_of_TEST
