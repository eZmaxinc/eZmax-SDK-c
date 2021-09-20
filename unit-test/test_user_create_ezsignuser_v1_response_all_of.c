#ifndef user_create_ezsignuser_v1_response_all_of_TEST
#define user_create_ezsignuser_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_create_ezsignuser_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_create_ezsignuser_v1_response_all_of.h"
user_create_ezsignuser_v1_response_all_of_t* instantiate_user_create_ezsignuser_v1_response_all_of(int include_optional);

#include "test_user_create_ezsignuser_v1_response_m_payload.c"


user_create_ezsignuser_v1_response_all_of_t* instantiate_user_create_ezsignuser_v1_response_all_of(int include_optional) {
  user_create_ezsignuser_v1_response_all_of_t* user_create_ezsignuser_v1_response_all_of = NULL;
  if (include_optional) {
    user_create_ezsignuser_v1_response_all_of = user_create_ezsignuser_v1_response_all_of_create(
      {"a_sEmailAddressSuccess":["someone@example.com","someone2@example.com"],"a_sEmailAddressFailure":["UserAlreadyExists@example.com"]}
    );
  } else {
    user_create_ezsignuser_v1_response_all_of = user_create_ezsignuser_v1_response_all_of_create(
      {"a_sEmailAddressSuccess":["someone@example.com","someone2@example.com"],"a_sEmailAddressFailure":["UserAlreadyExists@example.com"]}
    );
  }

  return user_create_ezsignuser_v1_response_all_of;
}


#ifdef user_create_ezsignuser_v1_response_all_of_MAIN

void test_user_create_ezsignuser_v1_response_all_of(int include_optional) {
    user_create_ezsignuser_v1_response_all_of_t* user_create_ezsignuser_v1_response_all_of_1 = instantiate_user_create_ezsignuser_v1_response_all_of(include_optional);

	cJSON* jsonuser_create_ezsignuser_v1_response_all_of_1 = user_create_ezsignuser_v1_response_all_of_convertToJSON(user_create_ezsignuser_v1_response_all_of_1);
	printf("user_create_ezsignuser_v1_response_all_of :\n%s\n", cJSON_Print(jsonuser_create_ezsignuser_v1_response_all_of_1));
	user_create_ezsignuser_v1_response_all_of_t* user_create_ezsignuser_v1_response_all_of_2 = user_create_ezsignuser_v1_response_all_of_parseFromJSON(jsonuser_create_ezsignuser_v1_response_all_of_1);
	cJSON* jsonuser_create_ezsignuser_v1_response_all_of_2 = user_create_ezsignuser_v1_response_all_of_convertToJSON(user_create_ezsignuser_v1_response_all_of_2);
	printf("repeating user_create_ezsignuser_v1_response_all_of:\n%s\n", cJSON_Print(jsonuser_create_ezsignuser_v1_response_all_of_2));
}

int main() {
  test_user_create_ezsignuser_v1_response_all_of(1);
  test_user_create_ezsignuser_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_create_ezsignuser_v1_response_all_of_MAIN
#endif // user_create_ezsignuser_v1_response_all_of_TEST
