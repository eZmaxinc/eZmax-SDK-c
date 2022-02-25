#ifndef ezsignsignature_create_object_v2_response_all_of_TEST
#define ezsignsignature_create_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_create_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_create_object_v2_response_all_of.h"
ezsignsignature_create_object_v2_response_all_of_t* instantiate_ezsignsignature_create_object_v2_response_all_of(int include_optional);

#include "test_ezsignsignature_create_object_v2_response_m_payload.c"


ezsignsignature_create_object_v2_response_all_of_t* instantiate_ezsignsignature_create_object_v2_response_all_of(int include_optional) {
  ezsignsignature_create_object_v2_response_all_of_t* ezsignsignature_create_object_v2_response_all_of = NULL;
  if (include_optional) {
    ezsignsignature_create_object_v2_response_all_of = ezsignsignature_create_object_v2_response_all_of_create(
      {"a_pkiEzsignsignatureID":[95,96]}
    );
  } else {
    ezsignsignature_create_object_v2_response_all_of = ezsignsignature_create_object_v2_response_all_of_create(
      {"a_pkiEzsignsignatureID":[95,96]}
    );
  }

  return ezsignsignature_create_object_v2_response_all_of;
}


#ifdef ezsignsignature_create_object_v2_response_all_of_MAIN

void test_ezsignsignature_create_object_v2_response_all_of(int include_optional) {
    ezsignsignature_create_object_v2_response_all_of_t* ezsignsignature_create_object_v2_response_all_of_1 = instantiate_ezsignsignature_create_object_v2_response_all_of(include_optional);

	cJSON* jsonezsignsignature_create_object_v2_response_all_of_1 = ezsignsignature_create_object_v2_response_all_of_convertToJSON(ezsignsignature_create_object_v2_response_all_of_1);
	printf("ezsignsignature_create_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v2_response_all_of_1));
	ezsignsignature_create_object_v2_response_all_of_t* ezsignsignature_create_object_v2_response_all_of_2 = ezsignsignature_create_object_v2_response_all_of_parseFromJSON(jsonezsignsignature_create_object_v2_response_all_of_1);
	cJSON* jsonezsignsignature_create_object_v2_response_all_of_2 = ezsignsignature_create_object_v2_response_all_of_convertToJSON(ezsignsignature_create_object_v2_response_all_of_2);
	printf("repeating ezsignsignature_create_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsignsignature_create_object_v2_response_all_of_2));
}

int main() {
  test_ezsignsignature_create_object_v2_response_all_of(1);
  test_ezsignsignature_create_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_create_object_v2_response_all_of_MAIN
#endif // ezsignsignature_create_object_v2_response_all_of_TEST
