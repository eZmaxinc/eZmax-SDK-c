#ifndef user_create_ezsignuser_v1_request_TEST
#define user_create_ezsignuser_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_create_ezsignuser_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_create_ezsignuser_v1_request.h"
user_create_ezsignuser_v1_request_t* instantiate_user_create_ezsignuser_v1_request(int include_optional);



user_create_ezsignuser_v1_request_t* instantiate_user_create_ezsignuser_v1_request(int include_optional) {
  user_create_ezsignuser_v1_request_t* user_create_ezsignuser_v1_request = NULL;
  if (include_optional) {
    user_create_ezsignuser_v1_request = user_create_ezsignuser_v1_request_create(
      2,
      "John",
      "Doe",
      "example@domain.com",
      "514",
      "990",
      "1516",
      "123"
    );
  } else {
    user_create_ezsignuser_v1_request = user_create_ezsignuser_v1_request_create(
      2,
      "John",
      "Doe",
      "example@domain.com",
      "514",
      "990",
      "1516",
      "123"
    );
  }

  return user_create_ezsignuser_v1_request;
}


#ifdef user_create_ezsignuser_v1_request_MAIN

void test_user_create_ezsignuser_v1_request(int include_optional) {
    user_create_ezsignuser_v1_request_t* user_create_ezsignuser_v1_request_1 = instantiate_user_create_ezsignuser_v1_request(include_optional);

	cJSON* jsonuser_create_ezsignuser_v1_request_1 = user_create_ezsignuser_v1_request_convertToJSON(user_create_ezsignuser_v1_request_1);
	printf("user_create_ezsignuser_v1_request :\n%s\n", cJSON_Print(jsonuser_create_ezsignuser_v1_request_1));
	user_create_ezsignuser_v1_request_t* user_create_ezsignuser_v1_request_2 = user_create_ezsignuser_v1_request_parseFromJSON(jsonuser_create_ezsignuser_v1_request_1);
	cJSON* jsonuser_create_ezsignuser_v1_request_2 = user_create_ezsignuser_v1_request_convertToJSON(user_create_ezsignuser_v1_request_2);
	printf("repeating user_create_ezsignuser_v1_request:\n%s\n", cJSON_Print(jsonuser_create_ezsignuser_v1_request_2));
}

int main() {
  test_user_create_ezsignuser_v1_request(1);
  test_user_create_ezsignuser_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_create_ezsignuser_v1_request_MAIN
#endif // user_create_ezsignuser_v1_request_TEST
