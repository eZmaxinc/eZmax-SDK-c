#ifndef cors_create_object_v1_request_TEST
#define cors_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_create_object_v1_request.h"
cors_create_object_v1_request_t* instantiate_cors_create_object_v1_request(int include_optional);



cors_create_object_v1_request_t* instantiate_cors_create_object_v1_request(int include_optional) {
  cors_create_object_v1_request_t* cors_create_object_v1_request = NULL;
  if (include_optional) {
    cors_create_object_v1_request = cors_create_object_v1_request_create(
      list_createList()
    );
  } else {
    cors_create_object_v1_request = cors_create_object_v1_request_create(
      list_createList()
    );
  }

  return cors_create_object_v1_request;
}


#ifdef cors_create_object_v1_request_MAIN

void test_cors_create_object_v1_request(int include_optional) {
    cors_create_object_v1_request_t* cors_create_object_v1_request_1 = instantiate_cors_create_object_v1_request(include_optional);

	cJSON* jsoncors_create_object_v1_request_1 = cors_create_object_v1_request_convertToJSON(cors_create_object_v1_request_1);
	printf("cors_create_object_v1_request :\n%s\n", cJSON_Print(jsoncors_create_object_v1_request_1));
	cors_create_object_v1_request_t* cors_create_object_v1_request_2 = cors_create_object_v1_request_parseFromJSON(jsoncors_create_object_v1_request_1);
	cJSON* jsoncors_create_object_v1_request_2 = cors_create_object_v1_request_convertToJSON(cors_create_object_v1_request_2);
	printf("repeating cors_create_object_v1_request:\n%s\n", cJSON_Print(jsoncors_create_object_v1_request_2));
}

int main() {
  test_cors_create_object_v1_request(1);
  test_cors_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_create_object_v1_request_MAIN
#endif // cors_create_object_v1_request_TEST
