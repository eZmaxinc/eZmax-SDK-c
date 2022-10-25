#ifndef ezmaxinvoicing_get_object_v1_response_all_of_TEST
#define ezmaxinvoicing_get_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_get_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_get_object_v1_response_all_of.h"
ezmaxinvoicing_get_object_v1_response_all_of_t* instantiate_ezmaxinvoicing_get_object_v1_response_all_of(int include_optional);

#include "test_ezmaxinvoicing_get_object_v1_response_m_payload.c"


ezmaxinvoicing_get_object_v1_response_all_of_t* instantiate_ezmaxinvoicing_get_object_v1_response_all_of(int include_optional) {
  ezmaxinvoicing_get_object_v1_response_all_of_t* ezmaxinvoicing_get_object_v1_response_all_of = NULL;
  if (include_optional) {
    ezmaxinvoicing_get_object_v1_response_all_of = ezmaxinvoicing_get_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezmaxinvoicing_get_object_v1_response_m_payload(0)
    );
  } else {
    ezmaxinvoicing_get_object_v1_response_all_of = ezmaxinvoicing_get_object_v1_response_all_of_create(
      NULL
    );
  }

  return ezmaxinvoicing_get_object_v1_response_all_of;
}


#ifdef ezmaxinvoicing_get_object_v1_response_all_of_MAIN

void test_ezmaxinvoicing_get_object_v1_response_all_of(int include_optional) {
    ezmaxinvoicing_get_object_v1_response_all_of_t* ezmaxinvoicing_get_object_v1_response_all_of_1 = instantiate_ezmaxinvoicing_get_object_v1_response_all_of(include_optional);

	cJSON* jsonezmaxinvoicing_get_object_v1_response_all_of_1 = ezmaxinvoicing_get_object_v1_response_all_of_convertToJSON(ezmaxinvoicing_get_object_v1_response_all_of_1);
	printf("ezmaxinvoicing_get_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_object_v1_response_all_of_1));
	ezmaxinvoicing_get_object_v1_response_all_of_t* ezmaxinvoicing_get_object_v1_response_all_of_2 = ezmaxinvoicing_get_object_v1_response_all_of_parseFromJSON(jsonezmaxinvoicing_get_object_v1_response_all_of_1);
	cJSON* jsonezmaxinvoicing_get_object_v1_response_all_of_2 = ezmaxinvoicing_get_object_v1_response_all_of_convertToJSON(ezmaxinvoicing_get_object_v1_response_all_of_2);
	printf("repeating ezmaxinvoicing_get_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_object_v1_response_all_of_2));
}

int main() {
  test_ezmaxinvoicing_get_object_v1_response_all_of(1);
  test_ezmaxinvoicing_get_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_get_object_v1_response_all_of_MAIN
#endif // ezmaxinvoicing_get_object_v1_response_all_of_TEST
