#ifndef sspr_reset_password_v1_request_TEST
#define sspr_reset_password_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sspr_reset_password_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sspr_reset_password_v1_request.h"
sspr_reset_password_v1_request_t* instantiate_sspr_reset_password_v1_request(int include_optional);



sspr_reset_password_v1_request_t* instantiate_sspr_reset_password_v1_request(int include_optional) {
  sspr_reset_password_v1_request_t* sspr_reset_password_v1_request = NULL;
  if (include_optional) {
    sspr_reset_password_v1_request = sspr_reset_password_v1_request_create(
      "demo",
      2,
      ezmax_api_definition_sspr_reset_password_v1_request__"Native",
      "example@domain.com",
      "JohnDoe",
      "012345678901234567890123456789012345678901234567890123456789abcd",
      "Qwerty1234!"
    );
  } else {
    sspr_reset_password_v1_request = sspr_reset_password_v1_request_create(
      "demo",
      2,
      ezmax_api_definition_sspr_reset_password_v1_request__"Native",
      "example@domain.com",
      "JohnDoe",
      "012345678901234567890123456789012345678901234567890123456789abcd",
      "Qwerty1234!"
    );
  }

  return sspr_reset_password_v1_request;
}


#ifdef sspr_reset_password_v1_request_MAIN

void test_sspr_reset_password_v1_request(int include_optional) {
    sspr_reset_password_v1_request_t* sspr_reset_password_v1_request_1 = instantiate_sspr_reset_password_v1_request(include_optional);

	cJSON* jsonsspr_reset_password_v1_request_1 = sspr_reset_password_v1_request_convertToJSON(sspr_reset_password_v1_request_1);
	printf("sspr_reset_password_v1_request :\n%s\n", cJSON_Print(jsonsspr_reset_password_v1_request_1));
	sspr_reset_password_v1_request_t* sspr_reset_password_v1_request_2 = sspr_reset_password_v1_request_parseFromJSON(jsonsspr_reset_password_v1_request_1);
	cJSON* jsonsspr_reset_password_v1_request_2 = sspr_reset_password_v1_request_convertToJSON(sspr_reset_password_v1_request_2);
	printf("repeating sspr_reset_password_v1_request:\n%s\n", cJSON_Print(jsonsspr_reset_password_v1_request_2));
}

int main() {
  test_sspr_reset_password_v1_request(1);
  test_sspr_reset_password_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // sspr_reset_password_v1_request_MAIN
#endif // sspr_reset_password_v1_request_TEST
