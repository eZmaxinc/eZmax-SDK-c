#ifndef cors_create_object_v1_response_all_of_TEST
#define cors_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_create_object_v1_response_all_of.h"
cors_create_object_v1_response_all_of_t* instantiate_cors_create_object_v1_response_all_of(int include_optional);

#include "test_cors_create_object_v1_response_m_payload.c"


cors_create_object_v1_response_all_of_t* instantiate_cors_create_object_v1_response_all_of(int include_optional) {
  cors_create_object_v1_response_all_of_t* cors_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    cors_create_object_v1_response_all_of = cors_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_cors_create_object_v1_response_m_payload(0)
    );
  } else {
    cors_create_object_v1_response_all_of = cors_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return cors_create_object_v1_response_all_of;
}


#ifdef cors_create_object_v1_response_all_of_MAIN

void test_cors_create_object_v1_response_all_of(int include_optional) {
    cors_create_object_v1_response_all_of_t* cors_create_object_v1_response_all_of_1 = instantiate_cors_create_object_v1_response_all_of(include_optional);

	cJSON* jsoncors_create_object_v1_response_all_of_1 = cors_create_object_v1_response_all_of_convertToJSON(cors_create_object_v1_response_all_of_1);
	printf("cors_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsoncors_create_object_v1_response_all_of_1));
	cors_create_object_v1_response_all_of_t* cors_create_object_v1_response_all_of_2 = cors_create_object_v1_response_all_of_parseFromJSON(jsoncors_create_object_v1_response_all_of_1);
	cJSON* jsoncors_create_object_v1_response_all_of_2 = cors_create_object_v1_response_all_of_convertToJSON(cors_create_object_v1_response_all_of_2);
	printf("repeating cors_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsoncors_create_object_v1_response_all_of_2));
}

int main() {
  test_cors_create_object_v1_response_all_of(1);
  test_cors_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_create_object_v1_response_all_of_MAIN
#endif // cors_create_object_v1_response_all_of_TEST
