#ifndef signature_get_object_v2_response_all_of_TEST
#define signature_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_get_object_v2_response_all_of.h"
signature_get_object_v2_response_all_of_t* instantiate_signature_get_object_v2_response_all_of(int include_optional);

#include "test_signature_get_object_v2_response_m_payload.c"


signature_get_object_v2_response_all_of_t* instantiate_signature_get_object_v2_response_all_of(int include_optional) {
  signature_get_object_v2_response_all_of_t* signature_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    signature_get_object_v2_response_all_of = signature_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_signature_get_object_v2_response_m_payload(0)
    );
  } else {
    signature_get_object_v2_response_all_of = signature_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return signature_get_object_v2_response_all_of;
}


#ifdef signature_get_object_v2_response_all_of_MAIN

void test_signature_get_object_v2_response_all_of(int include_optional) {
    signature_get_object_v2_response_all_of_t* signature_get_object_v2_response_all_of_1 = instantiate_signature_get_object_v2_response_all_of(include_optional);

	cJSON* jsonsignature_get_object_v2_response_all_of_1 = signature_get_object_v2_response_all_of_convertToJSON(signature_get_object_v2_response_all_of_1);
	printf("signature_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonsignature_get_object_v2_response_all_of_1));
	signature_get_object_v2_response_all_of_t* signature_get_object_v2_response_all_of_2 = signature_get_object_v2_response_all_of_parseFromJSON(jsonsignature_get_object_v2_response_all_of_1);
	cJSON* jsonsignature_get_object_v2_response_all_of_2 = signature_get_object_v2_response_all_of_convertToJSON(signature_get_object_v2_response_all_of_2);
	printf("repeating signature_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonsignature_get_object_v2_response_all_of_2));
}

int main() {
  test_signature_get_object_v2_response_all_of(1);
  test_signature_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_get_object_v2_response_all_of_MAIN
#endif // signature_get_object_v2_response_all_of_TEST
