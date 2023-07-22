#ifndef signature_create_object_v1_request_TEST
#define signature_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signature_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signature_create_object_v1_request.h"
signature_create_object_v1_request_t* instantiate_signature_create_object_v1_request(int include_optional);



signature_create_object_v1_request_t* instantiate_signature_create_object_v1_request(int include_optional) {
  signature_create_object_v1_request_t* signature_create_object_v1_request = NULL;
  if (include_optional) {
    signature_create_object_v1_request = signature_create_object_v1_request_create(
      list_createList()
    );
  } else {
    signature_create_object_v1_request = signature_create_object_v1_request_create(
      list_createList()
    );
  }

  return signature_create_object_v1_request;
}


#ifdef signature_create_object_v1_request_MAIN

void test_signature_create_object_v1_request(int include_optional) {
    signature_create_object_v1_request_t* signature_create_object_v1_request_1 = instantiate_signature_create_object_v1_request(include_optional);

	cJSON* jsonsignature_create_object_v1_request_1 = signature_create_object_v1_request_convertToJSON(signature_create_object_v1_request_1);
	printf("signature_create_object_v1_request :\n%s\n", cJSON_Print(jsonsignature_create_object_v1_request_1));
	signature_create_object_v1_request_t* signature_create_object_v1_request_2 = signature_create_object_v1_request_parseFromJSON(jsonsignature_create_object_v1_request_1);
	cJSON* jsonsignature_create_object_v1_request_2 = signature_create_object_v1_request_convertToJSON(signature_create_object_v1_request_2);
	printf("repeating signature_create_object_v1_request:\n%s\n", cJSON_Print(jsonsignature_create_object_v1_request_2));
}

int main() {
  test_signature_create_object_v1_request(1);
  test_signature_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // signature_create_object_v1_request_MAIN
#endif // signature_create_object_v1_request_TEST
