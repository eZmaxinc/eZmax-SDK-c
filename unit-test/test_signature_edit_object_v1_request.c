#ifndef signature_edit_object_v1_request_TEST
#define signature_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_edit_object_v1_request.h"
signature_edit_object_v1_request_t* instantiate_signature_edit_object_v1_request(int include_optional);

#include "test_signature_request_compound.c"


signature_edit_object_v1_request_t* instantiate_signature_edit_object_v1_request(int include_optional) {
  signature_edit_object_v1_request_t* signature_edit_object_v1_request = NULL;
  if (include_optional) {
    signature_edit_object_v1_request = signature_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_signature_request_compound(0)
    );
  } else {
    signature_edit_object_v1_request = signature_edit_object_v1_request_create(
      NULL
    );
  }

  return signature_edit_object_v1_request;
}


#ifdef signature_edit_object_v1_request_MAIN

void test_signature_edit_object_v1_request(int include_optional) {
    signature_edit_object_v1_request_t* signature_edit_object_v1_request_1 = instantiate_signature_edit_object_v1_request(include_optional);

	cJSON* jsonsignature_edit_object_v1_request_1 = signature_edit_object_v1_request_convertToJSON(signature_edit_object_v1_request_1);
	printf("signature_edit_object_v1_request :\n%s\n", cJSON_Print(jsonsignature_edit_object_v1_request_1));
	signature_edit_object_v1_request_t* signature_edit_object_v1_request_2 = signature_edit_object_v1_request_parseFromJSON(jsonsignature_edit_object_v1_request_1);
	cJSON* jsonsignature_edit_object_v1_request_2 = signature_edit_object_v1_request_convertToJSON(signature_edit_object_v1_request_2);
	printf("repeating signature_edit_object_v1_request:\n%s\n", cJSON_Print(jsonsignature_edit_object_v1_request_2));
}

int main() {
  test_signature_edit_object_v1_request(1);
  test_signature_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_edit_object_v1_request_MAIN
#endif // signature_edit_object_v1_request_TEST
