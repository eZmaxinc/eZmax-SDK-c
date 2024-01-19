#ifndef discussionmembership_create_object_v1_response_m_payload_TEST
#define discussionmembership_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussionmembership_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussionmembership_create_object_v1_response_m_payload.h"
discussionmembership_create_object_v1_response_m_payload_t* instantiate_discussionmembership_create_object_v1_response_m_payload(int include_optional);



discussionmembership_create_object_v1_response_m_payload_t* instantiate_discussionmembership_create_object_v1_response_m_payload(int include_optional) {
  discussionmembership_create_object_v1_response_m_payload_t* discussionmembership_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    discussionmembership_create_object_v1_response_m_payload = discussionmembership_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    discussionmembership_create_object_v1_response_m_payload = discussionmembership_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return discussionmembership_create_object_v1_response_m_payload;
}


#ifdef discussionmembership_create_object_v1_response_m_payload_MAIN

void test_discussionmembership_create_object_v1_response_m_payload(int include_optional) {
    discussionmembership_create_object_v1_response_m_payload_t* discussionmembership_create_object_v1_response_m_payload_1 = instantiate_discussionmembership_create_object_v1_response_m_payload(include_optional);

	cJSON* jsondiscussionmembership_create_object_v1_response_m_payload_1 = discussionmembership_create_object_v1_response_m_payload_convertToJSON(discussionmembership_create_object_v1_response_m_payload_1);
	printf("discussionmembership_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsondiscussionmembership_create_object_v1_response_m_payload_1));
	discussionmembership_create_object_v1_response_m_payload_t* discussionmembership_create_object_v1_response_m_payload_2 = discussionmembership_create_object_v1_response_m_payload_parseFromJSON(jsondiscussionmembership_create_object_v1_response_m_payload_1);
	cJSON* jsondiscussionmembership_create_object_v1_response_m_payload_2 = discussionmembership_create_object_v1_response_m_payload_convertToJSON(discussionmembership_create_object_v1_response_m_payload_2);
	printf("repeating discussionmembership_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsondiscussionmembership_create_object_v1_response_m_payload_2));
}

int main() {
  test_discussionmembership_create_object_v1_response_m_payload(1);
  test_discussionmembership_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussionmembership_create_object_v1_response_m_payload_MAIN
#endif // discussionmembership_create_object_v1_response_m_payload_TEST
