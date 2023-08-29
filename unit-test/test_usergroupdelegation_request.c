#ifndef usergroupdelegation_request_TEST
#define usergroupdelegation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_request.h"
usergroupdelegation_request_t* instantiate_usergroupdelegation_request(int include_optional);



usergroupdelegation_request_t* instantiate_usergroupdelegation_request(int include_optional) {
  usergroupdelegation_request_t* usergroupdelegation_request = NULL;
  if (include_optional) {
    usergroupdelegation_request = usergroupdelegation_request_create(
      141,
      2,
      70
    );
  } else {
    usergroupdelegation_request = usergroupdelegation_request_create(
      141,
      2,
      70
    );
  }

  return usergroupdelegation_request;
}


#ifdef usergroupdelegation_request_MAIN

void test_usergroupdelegation_request(int include_optional) {
    usergroupdelegation_request_t* usergroupdelegation_request_1 = instantiate_usergroupdelegation_request(include_optional);

	cJSON* jsonusergroupdelegation_request_1 = usergroupdelegation_request_convertToJSON(usergroupdelegation_request_1);
	printf("usergroupdelegation_request :\n%s\n", cJSON_Print(jsonusergroupdelegation_request_1));
	usergroupdelegation_request_t* usergroupdelegation_request_2 = usergroupdelegation_request_parseFromJSON(jsonusergroupdelegation_request_1);
	cJSON* jsonusergroupdelegation_request_2 = usergroupdelegation_request_convertToJSON(usergroupdelegation_request_2);
	printf("repeating usergroupdelegation_request:\n%s\n", cJSON_Print(jsonusergroupdelegation_request_2));
}

int main() {
  test_usergroupdelegation_request(1);
  test_usergroupdelegation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_request_MAIN
#endif // usergroupdelegation_request_TEST
