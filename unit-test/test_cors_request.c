#ifndef cors_request_TEST
#define cors_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_request.h"
cors_request_t* instantiate_cors_request(int include_optional);



cors_request_t* instantiate_cors_request(int include_optional) {
  cors_request_t* cors_request = NULL;
  if (include_optional) {
    cors_request = cors_request_create(
      228,
      99,
      "Https://www.example.com"
    );
  } else {
    cors_request = cors_request_create(
      228,
      99,
      "Https://www.example.com"
    );
  }

  return cors_request;
}


#ifdef cors_request_MAIN

void test_cors_request(int include_optional) {
    cors_request_t* cors_request_1 = instantiate_cors_request(include_optional);

	cJSON* jsoncors_request_1 = cors_request_convertToJSON(cors_request_1);
	printf("cors_request :\n%s\n", cJSON_Print(jsoncors_request_1));
	cors_request_t* cors_request_2 = cors_request_parseFromJSON(jsoncors_request_1);
	cJSON* jsoncors_request_2 = cors_request_convertToJSON(cors_request_2);
	printf("repeating cors_request:\n%s\n", cJSON_Print(jsoncors_request_2));
}

int main() {
  test_cors_request(1);
  test_cors_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_request_MAIN
#endif // cors_request_TEST
