#ifndef usergroupdelegation_response_TEST
#define usergroupdelegation_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_response.h"
usergroupdelegation_response_t* instantiate_usergroupdelegation_response(int include_optional);



usergroupdelegation_response_t* instantiate_usergroupdelegation_response(int include_optional) {
  usergroupdelegation_response_t* usergroupdelegation_response = NULL;
  if (include_optional) {
    usergroupdelegation_response = usergroupdelegation_response_create(
      141,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  } else {
    usergroupdelegation_response = usergroupdelegation_response_create(
      141,
      2,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administration"
    );
  }

  return usergroupdelegation_response;
}


#ifdef usergroupdelegation_response_MAIN

void test_usergroupdelegation_response(int include_optional) {
    usergroupdelegation_response_t* usergroupdelegation_response_1 = instantiate_usergroupdelegation_response(include_optional);

	cJSON* jsonusergroupdelegation_response_1 = usergroupdelegation_response_convertToJSON(usergroupdelegation_response_1);
	printf("usergroupdelegation_response :\n%s\n", cJSON_Print(jsonusergroupdelegation_response_1));
	usergroupdelegation_response_t* usergroupdelegation_response_2 = usergroupdelegation_response_parseFromJSON(jsonusergroupdelegation_response_1);
	cJSON* jsonusergroupdelegation_response_2 = usergroupdelegation_response_convertToJSON(usergroupdelegation_response_2);
	printf("repeating usergroupdelegation_response:\n%s\n", cJSON_Print(jsonusergroupdelegation_response_2));
}

int main() {
  test_usergroupdelegation_response(1);
  test_usergroupdelegation_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_response_MAIN
#endif // usergroupdelegation_response_TEST
