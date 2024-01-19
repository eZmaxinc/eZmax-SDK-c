#ifndef discussionmessage_create_object_v1_response_m_payload_TEST
#define discussionmessage_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmessage_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmessage_create_object_v1_response_m_payload.h"
discussionmessage_create_object_v1_response_m_payload_t* instantiate_discussionmessage_create_object_v1_response_m_payload(int include_optional);



discussionmessage_create_object_v1_response_m_payload_t* instantiate_discussionmessage_create_object_v1_response_m_payload(int include_optional) {
  discussionmessage_create_object_v1_response_m_payload_t* discussionmessage_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    discussionmessage_create_object_v1_response_m_payload = discussionmessage_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    discussionmessage_create_object_v1_response_m_payload = discussionmessage_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return discussionmessage_create_object_v1_response_m_payload;
}


#ifdef discussionmessage_create_object_v1_response_m_payload_MAIN

void test_discussionmessage_create_object_v1_response_m_payload(int include_optional) {
    discussionmessage_create_object_v1_response_m_payload_t* discussionmessage_create_object_v1_response_m_payload_1 = instantiate_discussionmessage_create_object_v1_response_m_payload(include_optional);

	cJSON* jsondiscussionmessage_create_object_v1_response_m_payload_1 = discussionmessage_create_object_v1_response_m_payload_convertToJSON(discussionmessage_create_object_v1_response_m_payload_1);
	printf("discussionmessage_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsondiscussionmessage_create_object_v1_response_m_payload_1));
	discussionmessage_create_object_v1_response_m_payload_t* discussionmessage_create_object_v1_response_m_payload_2 = discussionmessage_create_object_v1_response_m_payload_parseFromJSON(jsondiscussionmessage_create_object_v1_response_m_payload_1);
	cJSON* jsondiscussionmessage_create_object_v1_response_m_payload_2 = discussionmessage_create_object_v1_response_m_payload_convertToJSON(discussionmessage_create_object_v1_response_m_payload_2);
	printf("repeating discussionmessage_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsondiscussionmessage_create_object_v1_response_m_payload_2));
}

int main() {
  test_discussionmessage_create_object_v1_response_m_payload(1);
  test_discussionmessage_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmessage_create_object_v1_response_m_payload_MAIN
#endif // discussionmessage_create_object_v1_response_m_payload_TEST
