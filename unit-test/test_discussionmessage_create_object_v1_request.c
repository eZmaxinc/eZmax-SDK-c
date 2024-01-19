#ifndef discussionmessage_create_object_v1_request_TEST
#define discussionmessage_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_create_object_v1_request.h"
discussionmessage_create_object_v1_request_t* instantiate_discussionmessage_create_object_v1_request(int include_optional);



discussionmessage_create_object_v1_request_t* instantiate_discussionmessage_create_object_v1_request(int include_optional) {
  discussionmessage_create_object_v1_request_t* discussionmessage_create_object_v1_request = NULL;
  if (include_optional) {
    discussionmessage_create_object_v1_request = discussionmessage_create_object_v1_request_create(
      list_createList()
    );
  } else {
    discussionmessage_create_object_v1_request = discussionmessage_create_object_v1_request_create(
      list_createList()
    );
  }

  return discussionmessage_create_object_v1_request;
}


#ifdef discussionmessage_create_object_v1_request_MAIN

void test_discussionmessage_create_object_v1_request(int include_optional) {
    discussionmessage_create_object_v1_request_t* discussionmessage_create_object_v1_request_1 = instantiate_discussionmessage_create_object_v1_request(include_optional);

	cJSON* jsondiscussionmessage_create_object_v1_request_1 = discussionmessage_create_object_v1_request_convertToJSON(discussionmessage_create_object_v1_request_1);
	printf("discussionmessage_create_object_v1_request :\n%s\n", cJSON_Print(jsondiscussionmessage_create_object_v1_request_1));
	discussionmessage_create_object_v1_request_t* discussionmessage_create_object_v1_request_2 = discussionmessage_create_object_v1_request_parseFromJSON(jsondiscussionmessage_create_object_v1_request_1);
	cJSON* jsondiscussionmessage_create_object_v1_request_2 = discussionmessage_create_object_v1_request_convertToJSON(discussionmessage_create_object_v1_request_2);
	printf("repeating discussionmessage_create_object_v1_request:\n%s\n", cJSON_Print(jsondiscussionmessage_create_object_v1_request_2));
}

int main() {
  test_discussionmessage_create_object_v1_request(1);
  test_discussionmessage_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_create_object_v1_request_MAIN
#endif // discussionmessage_create_object_v1_request_TEST
