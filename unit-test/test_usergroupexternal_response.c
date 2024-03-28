#ifndef usergroupexternal_response_TEST
#define usergroupexternal_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_response.h"
usergroupexternal_response_t* instantiate_usergroupexternal_response(int include_optional);



usergroupexternal_response_t* instantiate_usergroupexternal_response(int include_optional) {
  usergroupexternal_response_t* usergroupexternal_response = NULL;
  if (include_optional) {
    usergroupexternal_response = usergroupexternal_response_create(
      16,
      "Administrators",
      "5140-1542"
    );
  } else {
    usergroupexternal_response = usergroupexternal_response_create(
      16,
      "Administrators",
      "5140-1542"
    );
  }

  return usergroupexternal_response;
}


#ifdef usergroupexternal_response_MAIN

void test_usergroupexternal_response(int include_optional) {
    usergroupexternal_response_t* usergroupexternal_response_1 = instantiate_usergroupexternal_response(include_optional);

	cJSON* jsonusergroupexternal_response_1 = usergroupexternal_response_convertToJSON(usergroupexternal_response_1);
	printf("usergroupexternal_response :\n%s\n", cJSON_Print(jsonusergroupexternal_response_1));
	usergroupexternal_response_t* usergroupexternal_response_2 = usergroupexternal_response_parseFromJSON(jsonusergroupexternal_response_1);
	cJSON* jsonusergroupexternal_response_2 = usergroupexternal_response_convertToJSON(usergroupexternal_response_2);
	printf("repeating usergroupexternal_response:\n%s\n", cJSON_Print(jsonusergroupexternal_response_2));
}

int main() {
  test_usergroupexternal_response(1);
  test_usergroupexternal_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_response_MAIN
#endif // usergroupexternal_response_TEST
