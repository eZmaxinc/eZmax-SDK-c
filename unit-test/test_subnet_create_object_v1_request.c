#ifndef subnet_create_object_v1_request_TEST
#define subnet_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_create_object_v1_request.h"
subnet_create_object_v1_request_t* instantiate_subnet_create_object_v1_request(int include_optional);



subnet_create_object_v1_request_t* instantiate_subnet_create_object_v1_request(int include_optional) {
  subnet_create_object_v1_request_t* subnet_create_object_v1_request = NULL;
  if (include_optional) {
    subnet_create_object_v1_request = subnet_create_object_v1_request_create(
      list_createList()
    );
  } else {
    subnet_create_object_v1_request = subnet_create_object_v1_request_create(
      list_createList()
    );
  }

  return subnet_create_object_v1_request;
}


#ifdef subnet_create_object_v1_request_MAIN

void test_subnet_create_object_v1_request(int include_optional) {
    subnet_create_object_v1_request_t* subnet_create_object_v1_request_1 = instantiate_subnet_create_object_v1_request(include_optional);

	cJSON* jsonsubnet_create_object_v1_request_1 = subnet_create_object_v1_request_convertToJSON(subnet_create_object_v1_request_1);
	printf("subnet_create_object_v1_request :\n%s\n", cJSON_Print(jsonsubnet_create_object_v1_request_1));
	subnet_create_object_v1_request_t* subnet_create_object_v1_request_2 = subnet_create_object_v1_request_parseFromJSON(jsonsubnet_create_object_v1_request_1);
	cJSON* jsonsubnet_create_object_v1_request_2 = subnet_create_object_v1_request_convertToJSON(subnet_create_object_v1_request_2);
	printf("repeating subnet_create_object_v1_request:\n%s\n", cJSON_Print(jsonsubnet_create_object_v1_request_2));
}

int main() {
  test_subnet_create_object_v1_request(1);
  test_subnet_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_create_object_v1_request_MAIN
#endif // subnet_create_object_v1_request_TEST
