#ifndef authenticate_authenticate_v2_response_all_of_TEST
#define authenticate_authenticate_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticate_authenticate_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticate_authenticate_v2_response_all_of.h"
authenticate_authenticate_v2_response_all_of_t* instantiate_authenticate_authenticate_v2_response_all_of(int include_optional);

#include "test_authenticate_authenticate_v2_response_m_payload.c"


authenticate_authenticate_v2_response_all_of_t* instantiate_authenticate_authenticate_v2_response_all_of(int include_optional) {
  authenticate_authenticate_v2_response_all_of_t* authenticate_authenticate_v2_response_all_of = NULL;
  if (include_optional) {
    authenticate_authenticate_v2_response_all_of = authenticate_authenticate_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_authenticate_authenticate_v2_response_m_payload(0)
    );
  } else {
    authenticate_authenticate_v2_response_all_of = authenticate_authenticate_v2_response_all_of_create(
      NULL
    );
  }

  return authenticate_authenticate_v2_response_all_of;
}


#ifdef authenticate_authenticate_v2_response_all_of_MAIN

void test_authenticate_authenticate_v2_response_all_of(int include_optional) {
    authenticate_authenticate_v2_response_all_of_t* authenticate_authenticate_v2_response_all_of_1 = instantiate_authenticate_authenticate_v2_response_all_of(include_optional);

	cJSON* jsonauthenticate_authenticate_v2_response_all_of_1 = authenticate_authenticate_v2_response_all_of_convertToJSON(authenticate_authenticate_v2_response_all_of_1);
	printf("authenticate_authenticate_v2_response_all_of :\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_response_all_of_1));
	authenticate_authenticate_v2_response_all_of_t* authenticate_authenticate_v2_response_all_of_2 = authenticate_authenticate_v2_response_all_of_parseFromJSON(jsonauthenticate_authenticate_v2_response_all_of_1);
	cJSON* jsonauthenticate_authenticate_v2_response_all_of_2 = authenticate_authenticate_v2_response_all_of_convertToJSON(authenticate_authenticate_v2_response_all_of_2);
	printf("repeating authenticate_authenticate_v2_response_all_of:\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_response_all_of_2));
}

int main() {
  test_authenticate_authenticate_v2_response_all_of(1);
  test_authenticate_authenticate_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticate_authenticate_v2_response_all_of_MAIN
#endif // authenticate_authenticate_v2_response_all_of_TEST
