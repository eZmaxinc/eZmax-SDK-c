#ifndef ezsigntemplatedocument_get_object_v1_response_all_of_TEST
#define ezsigntemplatedocument_get_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_get_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_get_object_v1_response_all_of.h"
ezsigntemplatedocument_get_object_v1_response_all_of_t* instantiate_ezsigntemplatedocument_get_object_v1_response_all_of(int include_optional);

#include "test_ezsigntemplatedocument_get_object_v1_response_m_payload.c"


ezsigntemplatedocument_get_object_v1_response_all_of_t* instantiate_ezsigntemplatedocument_get_object_v1_response_all_of(int include_optional) {
  ezsigntemplatedocument_get_object_v1_response_all_of_t* ezsigntemplatedocument_get_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsigntemplatedocument_get_object_v1_response_all_of = ezsigntemplatedocument_get_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatedocument_get_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatedocument_get_object_v1_response_all_of = ezsigntemplatedocument_get_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsigntemplatedocument_get_object_v1_response_all_of;
}


#ifdef ezsigntemplatedocument_get_object_v1_response_all_of_MAIN

void test_ezsigntemplatedocument_get_object_v1_response_all_of(int include_optional) {
    ezsigntemplatedocument_get_object_v1_response_all_of_t* ezsigntemplatedocument_get_object_v1_response_all_of_1 = instantiate_ezsigntemplatedocument_get_object_v1_response_all_of(include_optional);

	cJSON* jsonezsigntemplatedocument_get_object_v1_response_all_of_1 = ezsigntemplatedocument_get_object_v1_response_all_of_convertToJSON(ezsigntemplatedocument_get_object_v1_response_all_of_1);
	printf("ezsigntemplatedocument_get_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_get_object_v1_response_all_of_1));
	ezsigntemplatedocument_get_object_v1_response_all_of_t* ezsigntemplatedocument_get_object_v1_response_all_of_2 = ezsigntemplatedocument_get_object_v1_response_all_of_parseFromJSON(jsonezsigntemplatedocument_get_object_v1_response_all_of_1);
	cJSON* jsonezsigntemplatedocument_get_object_v1_response_all_of_2 = ezsigntemplatedocument_get_object_v1_response_all_of_convertToJSON(ezsigntemplatedocument_get_object_v1_response_all_of_2);
	printf("repeating ezsigntemplatedocument_get_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_get_object_v1_response_all_of_2));
}

int main() {
  test_ezsigntemplatedocument_get_object_v1_response_all_of(1);
  test_ezsigntemplatedocument_get_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_get_object_v1_response_all_of_MAIN
#endif // ezsigntemplatedocument_get_object_v1_response_all_of_TEST
