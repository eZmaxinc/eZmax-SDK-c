#ifndef ezsignsignature_sign_v1_request_TEST
#define ezsignsignature_sign_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_sign_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_sign_v1_request.h"
ezsignsignature_sign_v1_request_t* instantiate_ezsignsignature_sign_v1_request(int include_optional);



ezsignsignature_sign_v1_request_t* instantiate_ezsignsignature_sign_v1_request(int include_optional) {
  ezsignsignature_sign_v1_request_t* ezsignsignature_sign_v1_request = NULL;
  if (include_optional) {
    ezsignsignature_sign_v1_request = ezsignsignature_sign_v1_request_create(
      194,
      1,
      "0",
      ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_Accepted,
      "0",
      "{"$ref":"#/components/examples/Svg/value"}",
      list_createList(),
      1
    );
  } else {
    ezsignsignature_sign_v1_request = ezsignsignature_sign_v1_request_create(
      194,
      1,
      "0",
      ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_Accepted,
      "0",
      "{"$ref":"#/components/examples/Svg/value"}",
      list_createList(),
      1
    );
  }

  return ezsignsignature_sign_v1_request;
}


#ifdef ezsignsignature_sign_v1_request_MAIN

void test_ezsignsignature_sign_v1_request(int include_optional) {
    ezsignsignature_sign_v1_request_t* ezsignsignature_sign_v1_request_1 = instantiate_ezsignsignature_sign_v1_request(include_optional);

	cJSON* jsonezsignsignature_sign_v1_request_1 = ezsignsignature_sign_v1_request_convertToJSON(ezsignsignature_sign_v1_request_1);
	printf("ezsignsignature_sign_v1_request :\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_request_1));
	ezsignsignature_sign_v1_request_t* ezsignsignature_sign_v1_request_2 = ezsignsignature_sign_v1_request_parseFromJSON(jsonezsignsignature_sign_v1_request_1);
	cJSON* jsonezsignsignature_sign_v1_request_2 = ezsignsignature_sign_v1_request_convertToJSON(ezsignsignature_sign_v1_request_2);
	printf("repeating ezsignsignature_sign_v1_request:\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_request_2));
}

int main() {
  test_ezsignsignature_sign_v1_request(1);
  test_ezsignsignature_sign_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_sign_v1_request_MAIN
#endif // ezsignsignature_sign_v1_request_TEST
