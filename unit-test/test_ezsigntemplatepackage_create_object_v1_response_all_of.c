#ifndef ezsigntemplatepackage_create_object_v1_response_all_of_TEST
#define ezsigntemplatepackage_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_create_object_v1_response_all_of.h"
ezsigntemplatepackage_create_object_v1_response_all_of_t* instantiate_ezsigntemplatepackage_create_object_v1_response_all_of(int include_optional);

#include "test_ezsigntemplatepackage_create_object_v1_response_m_payload.c"


ezsigntemplatepackage_create_object_v1_response_all_of_t* instantiate_ezsigntemplatepackage_create_object_v1_response_all_of(int include_optional) {
  ezsigntemplatepackage_create_object_v1_response_all_of_t* ezsigntemplatepackage_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsigntemplatepackage_create_object_v1_response_all_of = ezsigntemplatepackage_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackage_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatepackage_create_object_v1_response_all_of = ezsigntemplatepackage_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsigntemplatepackage_create_object_v1_response_all_of;
}


#ifdef ezsigntemplatepackage_create_object_v1_response_all_of_MAIN

void test_ezsigntemplatepackage_create_object_v1_response_all_of(int include_optional) {
    ezsigntemplatepackage_create_object_v1_response_all_of_t* ezsigntemplatepackage_create_object_v1_response_all_of_1 = instantiate_ezsigntemplatepackage_create_object_v1_response_all_of(include_optional);

	cJSON* jsonezsigntemplatepackage_create_object_v1_response_all_of_1 = ezsigntemplatepackage_create_object_v1_response_all_of_convertToJSON(ezsigntemplatepackage_create_object_v1_response_all_of_1);
	printf("ezsigntemplatepackage_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_create_object_v1_response_all_of_1));
	ezsigntemplatepackage_create_object_v1_response_all_of_t* ezsigntemplatepackage_create_object_v1_response_all_of_2 = ezsigntemplatepackage_create_object_v1_response_all_of_parseFromJSON(jsonezsigntemplatepackage_create_object_v1_response_all_of_1);
	cJSON* jsonezsigntemplatepackage_create_object_v1_response_all_of_2 = ezsigntemplatepackage_create_object_v1_response_all_of_convertToJSON(ezsigntemplatepackage_create_object_v1_response_all_of_2);
	printf("repeating ezsigntemplatepackage_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_create_object_v1_response_all_of_2));
}

int main() {
  test_ezsigntemplatepackage_create_object_v1_response_all_of(1);
  test_ezsigntemplatepackage_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_create_object_v1_response_all_of_MAIN
#endif // ezsigntemplatepackage_create_object_v1_response_all_of_TEST
