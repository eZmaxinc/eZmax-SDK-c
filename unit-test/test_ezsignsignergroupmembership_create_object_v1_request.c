#ifndef ezsignsignergroupmembership_create_object_v1_request_TEST
#define ezsignsignergroupmembership_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroupmembership_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroupmembership_create_object_v1_request.h"
ezsignsignergroupmembership_create_object_v1_request_t* instantiate_ezsignsignergroupmembership_create_object_v1_request(int include_optional);



ezsignsignergroupmembership_create_object_v1_request_t* instantiate_ezsignsignergroupmembership_create_object_v1_request(int include_optional) {
  ezsignsignergroupmembership_create_object_v1_request_t* ezsignsignergroupmembership_create_object_v1_request = NULL;
  if (include_optional) {
    ezsignsignergroupmembership_create_object_v1_request = ezsignsignergroupmembership_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsignsignergroupmembership_create_object_v1_request = ezsignsignergroupmembership_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsignsignergroupmembership_create_object_v1_request;
}


#ifdef ezsignsignergroupmembership_create_object_v1_request_MAIN

void test_ezsignsignergroupmembership_create_object_v1_request(int include_optional) {
    ezsignsignergroupmembership_create_object_v1_request_t* ezsignsignergroupmembership_create_object_v1_request_1 = instantiate_ezsignsignergroupmembership_create_object_v1_request(include_optional);

	cJSON* jsonezsignsignergroupmembership_create_object_v1_request_1 = ezsignsignergroupmembership_create_object_v1_request_convertToJSON(ezsignsignergroupmembership_create_object_v1_request_1);
	printf("ezsignsignergroupmembership_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_create_object_v1_request_1));
	ezsignsignergroupmembership_create_object_v1_request_t* ezsignsignergroupmembership_create_object_v1_request_2 = ezsignsignergroupmembership_create_object_v1_request_parseFromJSON(jsonezsignsignergroupmembership_create_object_v1_request_1);
	cJSON* jsonezsignsignergroupmembership_create_object_v1_request_2 = ezsignsignergroupmembership_create_object_v1_request_convertToJSON(ezsignsignergroupmembership_create_object_v1_request_2);
	printf("repeating ezsignsignergroupmembership_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsignsignergroupmembership_create_object_v1_request_2));
}

int main() {
  test_ezsignsignergroupmembership_create_object_v1_request(1);
  test_ezsignsignergroupmembership_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroupmembership_create_object_v1_request_MAIN
#endif // ezsignsignergroupmembership_create_object_v1_request_TEST
