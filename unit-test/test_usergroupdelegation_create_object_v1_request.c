#ifndef usergroupdelegation_create_object_v1_request_TEST
#define usergroupdelegation_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_create_object_v1_request.h"
usergroupdelegation_create_object_v1_request_t* instantiate_usergroupdelegation_create_object_v1_request(int include_optional);



usergroupdelegation_create_object_v1_request_t* instantiate_usergroupdelegation_create_object_v1_request(int include_optional) {
  usergroupdelegation_create_object_v1_request_t* usergroupdelegation_create_object_v1_request = NULL;
  if (include_optional) {
    usergroupdelegation_create_object_v1_request = usergroupdelegation_create_object_v1_request_create(
      list_createList()
    );
  } else {
    usergroupdelegation_create_object_v1_request = usergroupdelegation_create_object_v1_request_create(
      list_createList()
    );
  }

  return usergroupdelegation_create_object_v1_request;
}


#ifdef usergroupdelegation_create_object_v1_request_MAIN

void test_usergroupdelegation_create_object_v1_request(int include_optional) {
    usergroupdelegation_create_object_v1_request_t* usergroupdelegation_create_object_v1_request_1 = instantiate_usergroupdelegation_create_object_v1_request(include_optional);

	cJSON* jsonusergroupdelegation_create_object_v1_request_1 = usergroupdelegation_create_object_v1_request_convertToJSON(usergroupdelegation_create_object_v1_request_1);
	printf("usergroupdelegation_create_object_v1_request :\n%s\n", cJSON_Print(jsonusergroupdelegation_create_object_v1_request_1));
	usergroupdelegation_create_object_v1_request_t* usergroupdelegation_create_object_v1_request_2 = usergroupdelegation_create_object_v1_request_parseFromJSON(jsonusergroupdelegation_create_object_v1_request_1);
	cJSON* jsonusergroupdelegation_create_object_v1_request_2 = usergroupdelegation_create_object_v1_request_convertToJSON(usergroupdelegation_create_object_v1_request_2);
	printf("repeating usergroupdelegation_create_object_v1_request:\n%s\n", cJSON_Print(jsonusergroupdelegation_create_object_v1_request_2));
}

int main() {
  test_usergroupdelegation_create_object_v1_request(1);
  test_usergroupdelegation_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_create_object_v1_request_MAIN
#endif // usergroupdelegation_create_object_v1_request_TEST
