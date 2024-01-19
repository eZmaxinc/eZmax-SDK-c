#ifndef discussion_create_object_v1_response_m_payload_TEST
#define discussion_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_create_object_v1_response_m_payload.h"
discussion_create_object_v1_response_m_payload_t* instantiate_discussion_create_object_v1_response_m_payload(int include_optional);



discussion_create_object_v1_response_m_payload_t* instantiate_discussion_create_object_v1_response_m_payload(int include_optional) {
  discussion_create_object_v1_response_m_payload_t* discussion_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    discussion_create_object_v1_response_m_payload = discussion_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    discussion_create_object_v1_response_m_payload = discussion_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return discussion_create_object_v1_response_m_payload;
}


#ifdef discussion_create_object_v1_response_m_payload_MAIN

void test_discussion_create_object_v1_response_m_payload(int include_optional) {
    discussion_create_object_v1_response_m_payload_t* discussion_create_object_v1_response_m_payload_1 = instantiate_discussion_create_object_v1_response_m_payload(include_optional);

	cJSON* jsondiscussion_create_object_v1_response_m_payload_1 = discussion_create_object_v1_response_m_payload_convertToJSON(discussion_create_object_v1_response_m_payload_1);
	printf("discussion_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsondiscussion_create_object_v1_response_m_payload_1));
	discussion_create_object_v1_response_m_payload_t* discussion_create_object_v1_response_m_payload_2 = discussion_create_object_v1_response_m_payload_parseFromJSON(jsondiscussion_create_object_v1_response_m_payload_1);
	cJSON* jsondiscussion_create_object_v1_response_m_payload_2 = discussion_create_object_v1_response_m_payload_convertToJSON(discussion_create_object_v1_response_m_payload_2);
	printf("repeating discussion_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsondiscussion_create_object_v1_response_m_payload_2));
}

int main() {
  test_discussion_create_object_v1_response_m_payload(1);
  test_discussion_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_create_object_v1_response_m_payload_MAIN
#endif // discussion_create_object_v1_response_m_payload_TEST
