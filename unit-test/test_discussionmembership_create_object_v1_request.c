#ifndef discussionmembership_create_object_v1_request_TEST
#define discussionmembership_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_create_object_v1_request.h"
discussionmembership_create_object_v1_request_t* instantiate_discussionmembership_create_object_v1_request(int include_optional);



discussionmembership_create_object_v1_request_t* instantiate_discussionmembership_create_object_v1_request(int include_optional) {
  discussionmembership_create_object_v1_request_t* discussionmembership_create_object_v1_request = NULL;
  if (include_optional) {
    discussionmembership_create_object_v1_request = discussionmembership_create_object_v1_request_create(
      list_createList()
    );
  } else {
    discussionmembership_create_object_v1_request = discussionmembership_create_object_v1_request_create(
      list_createList()
    );
  }

  return discussionmembership_create_object_v1_request;
}


#ifdef discussionmembership_create_object_v1_request_MAIN

void test_discussionmembership_create_object_v1_request(int include_optional) {
    discussionmembership_create_object_v1_request_t* discussionmembership_create_object_v1_request_1 = instantiate_discussionmembership_create_object_v1_request(include_optional);

	cJSON* jsondiscussionmembership_create_object_v1_request_1 = discussionmembership_create_object_v1_request_convertToJSON(discussionmembership_create_object_v1_request_1);
	printf("discussionmembership_create_object_v1_request :\n%s\n", cJSON_Print(jsondiscussionmembership_create_object_v1_request_1));
	discussionmembership_create_object_v1_request_t* discussionmembership_create_object_v1_request_2 = discussionmembership_create_object_v1_request_parseFromJSON(jsondiscussionmembership_create_object_v1_request_1);
	cJSON* jsondiscussionmembership_create_object_v1_request_2 = discussionmembership_create_object_v1_request_convertToJSON(discussionmembership_create_object_v1_request_2);
	printf("repeating discussionmembership_create_object_v1_request:\n%s\n", cJSON_Print(jsondiscussionmembership_create_object_v1_request_2));
}

int main() {
  test_discussionmembership_create_object_v1_request(1);
  test_discussionmembership_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_create_object_v1_request_MAIN
#endif // discussionmembership_create_object_v1_request_TEST
