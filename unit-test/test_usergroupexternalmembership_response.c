#ifndef usergroupexternalmembership_response_TEST
#define usergroupexternalmembership_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternalmembership_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternalmembership_response.h"
usergroupexternalmembership_response_t* instantiate_usergroupexternalmembership_response(int include_optional);



usergroupexternalmembership_response_t* instantiate_usergroupexternalmembership_response(int include_optional) {
  usergroupexternalmembership_response_t* usergroupexternalmembership_response = NULL;
  if (include_optional) {
    usergroupexternalmembership_response = usergroupexternalmembership_response_create(
      21,
      16,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administrators"
    );
  } else {
    usergroupexternalmembership_response = usergroupexternalmembership_response_create(
      21,
      16,
      70,
      "John",
      "Doe",
      "JohnDoe",
      "email@example.com",
      "Administrators"
    );
  }

  return usergroupexternalmembership_response;
}


#ifdef usergroupexternalmembership_response_MAIN

void test_usergroupexternalmembership_response(int include_optional) {
    usergroupexternalmembership_response_t* usergroupexternalmembership_response_1 = instantiate_usergroupexternalmembership_response(include_optional);

	cJSON* jsonusergroupexternalmembership_response_1 = usergroupexternalmembership_response_convertToJSON(usergroupexternalmembership_response_1);
	printf("usergroupexternalmembership_response :\n%s\n", cJSON_Print(jsonusergroupexternalmembership_response_1));
	usergroupexternalmembership_response_t* usergroupexternalmembership_response_2 = usergroupexternalmembership_response_parseFromJSON(jsonusergroupexternalmembership_response_1);
	cJSON* jsonusergroupexternalmembership_response_2 = usergroupexternalmembership_response_convertToJSON(usergroupexternalmembership_response_2);
	printf("repeating usergroupexternalmembership_response:\n%s\n", cJSON_Print(jsonusergroupexternalmembership_response_2));
}

int main() {
  test_usergroupexternalmembership_response(1);
  test_usergroupexternalmembership_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternalmembership_response_MAIN
#endif // usergroupexternalmembership_response_TEST
