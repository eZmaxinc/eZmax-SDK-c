#ifndef authenticate_authenticate_v2_request_TEST
#define authenticate_authenticate_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticate_authenticate_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticate_authenticate_v2_request.h"
authenticate_authenticate_v2_request_t* instantiate_authenticate_authenticate_v2_request(int include_optional);



authenticate_authenticate_v2_request_t* instantiate_authenticate_authenticate_v2_request(int include_optional) {
  authenticate_authenticate_v2_request_t* authenticate_authenticate_v2_request = NULL;
  if (include_optional) {
    authenticate_authenticate_v2_request = authenticate_authenticate_v2_request_create(
      "demo",
      "example@domain.com",
      "JohnDoe",
      "Qwerty1234!",
      "VGhpcyBpcyBhbiBlbmNyeXB0ZWQgcGFzc3dvcmQ="
    );
  } else {
    authenticate_authenticate_v2_request = authenticate_authenticate_v2_request_create(
      "demo",
      "example@domain.com",
      "JohnDoe",
      "Qwerty1234!",
      "VGhpcyBpcyBhbiBlbmNyeXB0ZWQgcGFzc3dvcmQ="
    );
  }

  return authenticate_authenticate_v2_request;
}


#ifdef authenticate_authenticate_v2_request_MAIN

void test_authenticate_authenticate_v2_request(int include_optional) {
    authenticate_authenticate_v2_request_t* authenticate_authenticate_v2_request_1 = instantiate_authenticate_authenticate_v2_request(include_optional);

	cJSON* jsonauthenticate_authenticate_v2_request_1 = authenticate_authenticate_v2_request_convertToJSON(authenticate_authenticate_v2_request_1);
	printf("authenticate_authenticate_v2_request :\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_request_1));
	authenticate_authenticate_v2_request_t* authenticate_authenticate_v2_request_2 = authenticate_authenticate_v2_request_parseFromJSON(jsonauthenticate_authenticate_v2_request_1);
	cJSON* jsonauthenticate_authenticate_v2_request_2 = authenticate_authenticate_v2_request_convertToJSON(authenticate_authenticate_v2_request_2);
	printf("repeating authenticate_authenticate_v2_request:\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_request_2));
}

int main() {
  test_authenticate_authenticate_v2_request(1);
  test_authenticate_authenticate_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticate_authenticate_v2_request_MAIN
#endif // authenticate_authenticate_v2_request_TEST
