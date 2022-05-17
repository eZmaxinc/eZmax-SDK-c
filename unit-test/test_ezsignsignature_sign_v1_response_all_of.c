#ifndef ezsignsignature_sign_v1_response_all_of_TEST
#define ezsignsignature_sign_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_sign_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_sign_v1_response_all_of.h"
ezsignsignature_sign_v1_response_all_of_t* instantiate_ezsignsignature_sign_v1_response_all_of(int include_optional);



ezsignsignature_sign_v1_response_all_of_t* instantiate_ezsignsignature_sign_v1_response_all_of(int include_optional) {
  ezsignsignature_sign_v1_response_all_of_t* ezsignsignature_sign_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignsignature_sign_v1_response_all_of = ezsignsignature_sign_v1_response_all_of_create(
      0
    );
  } else {
    ezsignsignature_sign_v1_response_all_of = ezsignsignature_sign_v1_response_all_of_create(
      0
    );
  }

  return ezsignsignature_sign_v1_response_all_of;
}


#ifdef ezsignsignature_sign_v1_response_all_of_MAIN

void test_ezsignsignature_sign_v1_response_all_of(int include_optional) {
    ezsignsignature_sign_v1_response_all_of_t* ezsignsignature_sign_v1_response_all_of_1 = instantiate_ezsignsignature_sign_v1_response_all_of(include_optional);

	cJSON* jsonezsignsignature_sign_v1_response_all_of_1 = ezsignsignature_sign_v1_response_all_of_convertToJSON(ezsignsignature_sign_v1_response_all_of_1);
	printf("ezsignsignature_sign_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_response_all_of_1));
	ezsignsignature_sign_v1_response_all_of_t* ezsignsignature_sign_v1_response_all_of_2 = ezsignsignature_sign_v1_response_all_of_parseFromJSON(jsonezsignsignature_sign_v1_response_all_of_1);
	cJSON* jsonezsignsignature_sign_v1_response_all_of_2 = ezsignsignature_sign_v1_response_all_of_convertToJSON(ezsignsignature_sign_v1_response_all_of_2);
	printf("repeating ezsignsignature_sign_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignsignature_sign_v1_response_all_of_2));
}

int main() {
  test_ezsignsignature_sign_v1_response_all_of(1);
  test_ezsignsignature_sign_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_sign_v1_response_all_of_MAIN
#endif // ezsignsignature_sign_v1_response_all_of_TEST
