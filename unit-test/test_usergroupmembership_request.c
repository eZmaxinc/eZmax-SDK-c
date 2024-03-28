#ifndef usergroupmembership_request_TEST
#define usergroupmembership_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupmembership_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupmembership_request.h"
usergroupmembership_request_t* instantiate_usergroupmembership_request(int include_optional);



usergroupmembership_request_t* instantiate_usergroupmembership_request(int include_optional) {
  usergroupmembership_request_t* usergroupmembership_request = NULL;
  if (include_optional) {
    usergroupmembership_request = usergroupmembership_request_create(
      21,
      2,
      70,
      16
    );
  } else {
    usergroupmembership_request = usergroupmembership_request_create(
      21,
      2,
      70,
      16
    );
  }

  return usergroupmembership_request;
}


#ifdef usergroupmembership_request_MAIN

void test_usergroupmembership_request(int include_optional) {
    usergroupmembership_request_t* usergroupmembership_request_1 = instantiate_usergroupmembership_request(include_optional);

	cJSON* jsonusergroupmembership_request_1 = usergroupmembership_request_convertToJSON(usergroupmembership_request_1);
	printf("usergroupmembership_request :\n%s\n", cJSON_Print(jsonusergroupmembership_request_1));
	usergroupmembership_request_t* usergroupmembership_request_2 = usergroupmembership_request_parseFromJSON(jsonusergroupmembership_request_1);
	cJSON* jsonusergroupmembership_request_2 = usergroupmembership_request_convertToJSON(usergroupmembership_request_2);
	printf("repeating usergroupmembership_request:\n%s\n", cJSON_Print(jsonusergroupmembership_request_2));
}

int main() {
  test_usergroupmembership_request(1);
  test_usergroupmembership_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupmembership_request_MAIN
#endif // usergroupmembership_request_TEST
