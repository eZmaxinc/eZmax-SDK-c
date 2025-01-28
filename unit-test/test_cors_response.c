#ifndef cors_response_TEST
#define cors_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_response.h"
cors_response_t* instantiate_cors_response(int include_optional);



cors_response_t* instantiate_cors_response(int include_optional) {
  cors_response_t* cors_response = NULL;
  if (include_optional) {
    cors_response = cors_response_create(
      228,
      99,
      "https://www.example.com"
    );
  } else {
    cors_response = cors_response_create(
      228,
      99,
      "https://www.example.com"
    );
  }

  return cors_response;
}


#ifdef cors_response_MAIN

void test_cors_response(int include_optional) {
    cors_response_t* cors_response_1 = instantiate_cors_response(include_optional);

	cJSON* jsoncors_response_1 = cors_response_convertToJSON(cors_response_1);
	printf("cors_response :\n%s\n", cJSON_Print(jsoncors_response_1));
	cors_response_t* cors_response_2 = cors_response_parseFromJSON(jsoncors_response_1);
	cJSON* jsoncors_response_2 = cors_response_convertToJSON(cors_response_2);
	printf("repeating cors_response:\n%s\n", cJSON_Print(jsoncors_response_2));
}

int main() {
  test_cors_response(1);
  test_cors_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_response_MAIN
#endif // cors_response_TEST
