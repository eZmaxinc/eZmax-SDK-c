#ifndef discussion_get_object_v2_response_m_payload_TEST
#define discussion_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define discussion_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/discussion_get_object_v2_response_m_payload.h"
discussion_get_object_v2_response_m_payload_t* instantiate_discussion_get_object_v2_response_m_payload(int include_optional);

#include "test_discussion_response_compound.c"


discussion_get_object_v2_response_m_payload_t* instantiate_discussion_get_object_v2_response_m_payload(int include_optional) {
  discussion_get_object_v2_response_m_payload_t* discussion_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    discussion_get_object_v2_response_m_payload = discussion_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_discussion_response_compound(0)
    );
  } else {
    discussion_get_object_v2_response_m_payload = discussion_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return discussion_get_object_v2_response_m_payload;
}


#ifdef discussion_get_object_v2_response_m_payload_MAIN

void test_discussion_get_object_v2_response_m_payload(int include_optional) {
    discussion_get_object_v2_response_m_payload_t* discussion_get_object_v2_response_m_payload_1 = instantiate_discussion_get_object_v2_response_m_payload(include_optional);

	cJSON* jsondiscussion_get_object_v2_response_m_payload_1 = discussion_get_object_v2_response_m_payload_convertToJSON(discussion_get_object_v2_response_m_payload_1);
	printf("discussion_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsondiscussion_get_object_v2_response_m_payload_1));
	discussion_get_object_v2_response_m_payload_t* discussion_get_object_v2_response_m_payload_2 = discussion_get_object_v2_response_m_payload_parseFromJSON(jsondiscussion_get_object_v2_response_m_payload_1);
	cJSON* jsondiscussion_get_object_v2_response_m_payload_2 = discussion_get_object_v2_response_m_payload_convertToJSON(discussion_get_object_v2_response_m_payload_2);
	printf("repeating discussion_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsondiscussion_get_object_v2_response_m_payload_2));
}

int main() {
  test_discussion_get_object_v2_response_m_payload(1);
  test_discussion_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // discussion_get_object_v2_response_m_payload_MAIN
#endif // discussion_get_object_v2_response_m_payload_TEST
