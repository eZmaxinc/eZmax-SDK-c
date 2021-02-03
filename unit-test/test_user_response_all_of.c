#ifndef user_response_all_of_TEST
#define user_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_response_all_of.h"
user_response_all_of_t* instantiate_user_response_all_of(int include_optional);

#include "test_common_audit.c"


user_response_all_of_t* instantiate_user_response_all_of(int include_optional) {
  user_response_all_of_t* user_response_all_of = NULL;
  if (include_optional) {
    user_response_all_of = user_response_all_of_create(
      70,
      2,
      ezmax_api_definition_user_response_all_of__"RewardDistributorServer",
      "John",
      "Doe",
      "JohnDoe",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  } else {
    user_response_all_of = user_response_all_of_create(
      70,
      2,
      ezmax_api_definition_user_response_all_of__"RewardDistributorServer",
      "John",
      "Doe",
      "JohnDoe",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  }

  return user_response_all_of;
}


#ifdef user_response_all_of_MAIN

void test_user_response_all_of(int include_optional) {
    user_response_all_of_t* user_response_all_of_1 = instantiate_user_response_all_of(include_optional);

	cJSON* jsonuser_response_all_of_1 = user_response_all_of_convertToJSON(user_response_all_of_1);
	printf("user_response_all_of :\n%s\n", cJSON_Print(jsonuser_response_all_of_1));
	user_response_all_of_t* user_response_all_of_2 = user_response_all_of_parseFromJSON(jsonuser_response_all_of_1);
	cJSON* jsonuser_response_all_of_2 = user_response_all_of_convertToJSON(user_response_all_of_2);
	printf("repeating user_response_all_of:\n%s\n", cJSON_Print(jsonuser_response_all_of_2));
}

int main() {
  test_user_response_all_of(1);
  test_user_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_response_all_of_MAIN
#endif // user_response_all_of_TEST
