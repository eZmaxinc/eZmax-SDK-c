#ifndef branding_create_object_v1_request_TEST
#define branding_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_create_object_v1_request.h"
branding_create_object_v1_request_t* instantiate_branding_create_object_v1_request(int include_optional);



branding_create_object_v1_request_t* instantiate_branding_create_object_v1_request(int include_optional) {
  branding_create_object_v1_request_t* branding_create_object_v1_request = NULL;
  if (include_optional) {
    branding_create_object_v1_request = branding_create_object_v1_request_create(
      list_createList()
    );
  } else {
    branding_create_object_v1_request = branding_create_object_v1_request_create(
      list_createList()
    );
  }

  return branding_create_object_v1_request;
}


#ifdef branding_create_object_v1_request_MAIN

void test_branding_create_object_v1_request(int include_optional) {
    branding_create_object_v1_request_t* branding_create_object_v1_request_1 = instantiate_branding_create_object_v1_request(include_optional);

	cJSON* jsonbranding_create_object_v1_request_1 = branding_create_object_v1_request_convertToJSON(branding_create_object_v1_request_1);
	printf("branding_create_object_v1_request :\n%s\n", cJSON_Print(jsonbranding_create_object_v1_request_1));
	branding_create_object_v1_request_t* branding_create_object_v1_request_2 = branding_create_object_v1_request_parseFromJSON(jsonbranding_create_object_v1_request_1);
	cJSON* jsonbranding_create_object_v1_request_2 = branding_create_object_v1_request_convertToJSON(branding_create_object_v1_request_2);
	printf("repeating branding_create_object_v1_request:\n%s\n", cJSON_Print(jsonbranding_create_object_v1_request_2));
}

int main() {
  test_branding_create_object_v1_request(1);
  test_branding_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_create_object_v1_request_MAIN
#endif // branding_create_object_v1_request_TEST
