#ifndef subnet_edit_object_v1_request_TEST
#define subnet_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subnet_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subnet_edit_object_v1_request.h"
subnet_edit_object_v1_request_t* instantiate_subnet_edit_object_v1_request(int include_optional);

#include "test_subnet_request_compound.c"


subnet_edit_object_v1_request_t* instantiate_subnet_edit_object_v1_request(int include_optional) {
  subnet_edit_object_v1_request_t* subnet_edit_object_v1_request = NULL;
  if (include_optional) {
    subnet_edit_object_v1_request = subnet_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_subnet_request_compound(0)
    );
  } else {
    subnet_edit_object_v1_request = subnet_edit_object_v1_request_create(
      NULL
    );
  }

  return subnet_edit_object_v1_request;
}


#ifdef subnet_edit_object_v1_request_MAIN

void test_subnet_edit_object_v1_request(int include_optional) {
    subnet_edit_object_v1_request_t* subnet_edit_object_v1_request_1 = instantiate_subnet_edit_object_v1_request(include_optional);

	cJSON* jsonsubnet_edit_object_v1_request_1 = subnet_edit_object_v1_request_convertToJSON(subnet_edit_object_v1_request_1);
	printf("subnet_edit_object_v1_request :\n%s\n", cJSON_Print(jsonsubnet_edit_object_v1_request_1));
	subnet_edit_object_v1_request_t* subnet_edit_object_v1_request_2 = subnet_edit_object_v1_request_parseFromJSON(jsonsubnet_edit_object_v1_request_1);
	cJSON* jsonsubnet_edit_object_v1_request_2 = subnet_edit_object_v1_request_convertToJSON(subnet_edit_object_v1_request_2);
	printf("repeating subnet_edit_object_v1_request:\n%s\n", cJSON_Print(jsonsubnet_edit_object_v1_request_2));
}

int main() {
  test_subnet_edit_object_v1_request(1);
  test_subnet_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // subnet_edit_object_v1_request_MAIN
#endif // subnet_edit_object_v1_request_TEST
