#ifndef ezsignsignergroup_create_object_v1_request_TEST
#define ezsignsignergroup_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_create_object_v1_request.h"
ezsignsignergroup_create_object_v1_request_t* instantiate_ezsignsignergroup_create_object_v1_request(int include_optional);



ezsignsignergroup_create_object_v1_request_t* instantiate_ezsignsignergroup_create_object_v1_request(int include_optional) {
  ezsignsignergroup_create_object_v1_request_t* ezsignsignergroup_create_object_v1_request = NULL;
  if (include_optional) {
    ezsignsignergroup_create_object_v1_request = ezsignsignergroup_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsignsignergroup_create_object_v1_request = ezsignsignergroup_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsignsignergroup_create_object_v1_request;
}


#ifdef ezsignsignergroup_create_object_v1_request_MAIN

void test_ezsignsignergroup_create_object_v1_request(int include_optional) {
    ezsignsignergroup_create_object_v1_request_t* ezsignsignergroup_create_object_v1_request_1 = instantiate_ezsignsignergroup_create_object_v1_request(include_optional);

	cJSON* jsonezsignsignergroup_create_object_v1_request_1 = ezsignsignergroup_create_object_v1_request_convertToJSON(ezsignsignergroup_create_object_v1_request_1);
	printf("ezsignsignergroup_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsignsignergroup_create_object_v1_request_1));
	ezsignsignergroup_create_object_v1_request_t* ezsignsignergroup_create_object_v1_request_2 = ezsignsignergroup_create_object_v1_request_parseFromJSON(jsonezsignsignergroup_create_object_v1_request_1);
	cJSON* jsonezsignsignergroup_create_object_v1_request_2 = ezsignsignergroup_create_object_v1_request_convertToJSON(ezsignsignergroup_create_object_v1_request_2);
	printf("repeating ezsignsignergroup_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsignsignergroup_create_object_v1_request_2));
}

int main() {
  test_ezsignsignergroup_create_object_v1_request(1);
  test_ezsignsignergroup_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_create_object_v1_request_MAIN
#endif // ezsignsignergroup_create_object_v1_request_TEST
