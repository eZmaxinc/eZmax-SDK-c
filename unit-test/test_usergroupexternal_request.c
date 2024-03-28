#ifndef usergroupexternal_request_TEST
#define usergroupexternal_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_request.h"
usergroupexternal_request_t* instantiate_usergroupexternal_request(int include_optional);



usergroupexternal_request_t* instantiate_usergroupexternal_request(int include_optional) {
  usergroupexternal_request_t* usergroupexternal_request = NULL;
  if (include_optional) {
    usergroupexternal_request = usergroupexternal_request_create(
      16,
      "Administrators",
      "5140-1542"
    );
  } else {
    usergroupexternal_request = usergroupexternal_request_create(
      16,
      "Administrators",
      "5140-1542"
    );
  }

  return usergroupexternal_request;
}


#ifdef usergroupexternal_request_MAIN

void test_usergroupexternal_request(int include_optional) {
    usergroupexternal_request_t* usergroupexternal_request_1 = instantiate_usergroupexternal_request(include_optional);

	cJSON* jsonusergroupexternal_request_1 = usergroupexternal_request_convertToJSON(usergroupexternal_request_1);
	printf("usergroupexternal_request :\n%s\n", cJSON_Print(jsonusergroupexternal_request_1));
	usergroupexternal_request_t* usergroupexternal_request_2 = usergroupexternal_request_parseFromJSON(jsonusergroupexternal_request_1);
	cJSON* jsonusergroupexternal_request_2 = usergroupexternal_request_convertToJSON(usergroupexternal_request_2);
	printf("repeating usergroupexternal_request:\n%s\n", cJSON_Print(jsonusergroupexternal_request_2));
}

int main() {
  test_usergroupexternal_request(1);
  test_usergroupexternal_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_request_MAIN
#endif // usergroupexternal_request_TEST
