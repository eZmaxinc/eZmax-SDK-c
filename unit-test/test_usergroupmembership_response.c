#ifndef usergroupmembership_response_TEST
#define usergroupmembership_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_response.h"
usergroupmembership_response_t* instantiate_usergroupmembership_response(int include_optional);



usergroupmembership_response_t* instantiate_usergroupmembership_response(int include_optional) {
  usergroupmembership_response_t* usergroupmembership_response = NULL;
  if (include_optional) {
    usergroupmembership_response = usergroupmembership_response_create(
      21,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  } else {
    usergroupmembership_response = usergroupmembership_response_create(
      21,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  }

  return usergroupmembership_response;
}


#ifdef usergroupmembership_response_MAIN

void test_usergroupmembership_response(int include_optional) {
    usergroupmembership_response_t* usergroupmembership_response_1 = instantiate_usergroupmembership_response(include_optional);

	cJSON* jsonusergroupmembership_response_1 = usergroupmembership_response_convertToJSON(usergroupmembership_response_1);
	printf("usergroupmembership_response :\n%s\n", cJSON_Print(jsonusergroupmembership_response_1));
	usergroupmembership_response_t* usergroupmembership_response_2 = usergroupmembership_response_parseFromJSON(jsonusergroupmembership_response_1);
	cJSON* jsonusergroupmembership_response_2 = usergroupmembership_response_convertToJSON(usergroupmembership_response_2);
	printf("repeating usergroupmembership_response:\n%s\n", cJSON_Print(jsonusergroupmembership_response_2));
}

int main() {
  test_usergroupmembership_response(1);
  test_usergroupmembership_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_response_MAIN
#endif // usergroupmembership_response_TEST
