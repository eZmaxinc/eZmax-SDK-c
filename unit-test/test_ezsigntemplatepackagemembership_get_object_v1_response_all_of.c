#ifndef ezsigntemplatepackagemembership_get_object_v1_response_all_of_TEST
#define ezsigntemplatepackagemembership_get_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagemembership_get_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagemembership_get_object_v1_response_all_of.h"
ezsigntemplatepackagemembership_get_object_v1_response_all_of_t* instantiate_ezsigntemplatepackagemembership_get_object_v1_response_all_of(int include_optional);

#include "test_ezsigntemplatepackagemembership_get_object_v1_response_m_payload.c"


ezsigntemplatepackagemembership_get_object_v1_response_all_of_t* instantiate_ezsigntemplatepackagemembership_get_object_v1_response_all_of(int include_optional) {
  ezsigntemplatepackagemembership_get_object_v1_response_all_of_t* ezsigntemplatepackagemembership_get_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsigntemplatepackagemembership_get_object_v1_response_all_of = ezsigntemplatepackagemembership_get_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackagemembership_get_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatepackagemembership_get_object_v1_response_all_of = ezsigntemplatepackagemembership_get_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsigntemplatepackagemembership_get_object_v1_response_all_of;
}


#ifdef ezsigntemplatepackagemembership_get_object_v1_response_all_of_MAIN

void test_ezsigntemplatepackagemembership_get_object_v1_response_all_of(int include_optional) {
    ezsigntemplatepackagemembership_get_object_v1_response_all_of_t* ezsigntemplatepackagemembership_get_object_v1_response_all_of_1 = instantiate_ezsigntemplatepackagemembership_get_object_v1_response_all_of(include_optional);

	cJSON* jsonezsigntemplatepackagemembership_get_object_v1_response_all_of_1 = ezsigntemplatepackagemembership_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_all_of_1);
	printf("ezsigntemplatepackagemembership_get_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_get_object_v1_response_all_of_1));
	ezsigntemplatepackagemembership_get_object_v1_response_all_of_t* ezsigntemplatepackagemembership_get_object_v1_response_all_of_2 = ezsigntemplatepackagemembership_get_object_v1_response_all_of_parseFromJSON(jsonezsigntemplatepackagemembership_get_object_v1_response_all_of_1);
	cJSON* jsonezsigntemplatepackagemembership_get_object_v1_response_all_of_2 = ezsigntemplatepackagemembership_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_all_of_2);
	printf("repeating ezsigntemplatepackagemembership_get_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatepackagemembership_get_object_v1_response_all_of_2));
}

int main() {
  test_ezsigntemplatepackagemembership_get_object_v1_response_all_of(1);
  test_ezsigntemplatepackagemembership_get_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagemembership_get_object_v1_response_all_of_MAIN
#endif // ezsigntemplatepackagemembership_get_object_v1_response_all_of_TEST
