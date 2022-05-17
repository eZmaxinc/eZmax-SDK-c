#ifndef ezsigntemplatepackagesigner_get_object_v1_response_all_of_TEST
#define ezsigntemplatepackagesigner_get_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackagesigner_get_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackagesigner_get_object_v1_response_all_of.h"
ezsigntemplatepackagesigner_get_object_v1_response_all_of_t* instantiate_ezsigntemplatepackagesigner_get_object_v1_response_all_of(int include_optional);

#include "test_ezsigntemplatepackagesigner_get_object_v1_response_m_payload.c"


ezsigntemplatepackagesigner_get_object_v1_response_all_of_t* instantiate_ezsigntemplatepackagesigner_get_object_v1_response_all_of(int include_optional) {
  ezsigntemplatepackagesigner_get_object_v1_response_all_of_t* ezsigntemplatepackagesigner_get_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezsigntemplatepackagesigner_get_object_v1_response_all_of = ezsigntemplatepackagesigner_get_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackagesigner_get_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatepackagesigner_get_object_v1_response_all_of = ezsigntemplatepackagesigner_get_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezsigntemplatepackagesigner_get_object_v1_response_all_of;
}


#ifdef ezsigntemplatepackagesigner_get_object_v1_response_all_of_MAIN

void test_ezsigntemplatepackagesigner_get_object_v1_response_all_of(int include_optional) {
    ezsigntemplatepackagesigner_get_object_v1_response_all_of_t* ezsigntemplatepackagesigner_get_object_v1_response_all_of_1 = instantiate_ezsigntemplatepackagesigner_get_object_v1_response_all_of(include_optional);

	cJSON* jsonezsigntemplatepackagesigner_get_object_v1_response_all_of_1 = ezsigntemplatepackagesigner_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagesigner_get_object_v1_response_all_of_1);
	printf("ezsigntemplatepackagesigner_get_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_get_object_v1_response_all_of_1));
	ezsigntemplatepackagesigner_get_object_v1_response_all_of_t* ezsigntemplatepackagesigner_get_object_v1_response_all_of_2 = ezsigntemplatepackagesigner_get_object_v1_response_all_of_parseFromJSON(jsonezsigntemplatepackagesigner_get_object_v1_response_all_of_1);
	cJSON* jsonezsigntemplatepackagesigner_get_object_v1_response_all_of_2 = ezsigntemplatepackagesigner_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagesigner_get_object_v1_response_all_of_2);
	printf("repeating ezsigntemplatepackagesigner_get_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsigntemplatepackagesigner_get_object_v1_response_all_of_2));
}

int main() {
  test_ezsigntemplatepackagesigner_get_object_v1_response_all_of(1);
  test_ezsigntemplatepackagesigner_get_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackagesigner_get_object_v1_response_all_of_MAIN
#endif // ezsigntemplatepackagesigner_get_object_v1_response_all_of_TEST
