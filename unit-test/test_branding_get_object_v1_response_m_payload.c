#ifndef branding_get_object_v1_response_m_payload_TEST
#define branding_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_get_object_v1_response_m_payload.h"
branding_get_object_v1_response_m_payload_t* instantiate_branding_get_object_v1_response_m_payload(int include_optional);

#include "test_multilingual_branding_description.c"


branding_get_object_v1_response_m_payload_t* instantiate_branding_get_object_v1_response_m_payload(int include_optional) {
  branding_get_object_v1_response_m_payload_t* branding_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    branding_get_object_v1_response_m_payload = branding_get_object_v1_response_m_payload_create(
      78,
       // false, not to have infinite recursion
      instantiate_multilingual_branding_description(0),
      "Company X",
      ezmax_api_definition__full_branding_get_object_v1_response_m_payload__"Default",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true,
      "http://www.example.com/logo.jpg"
    );
  } else {
    branding_get_object_v1_response_m_payload = branding_get_object_v1_response_m_payload_create(
      78,
      NULL,
      "Company X",
      ezmax_api_definition__full_branding_get_object_v1_response_m_payload__"Default",
      3752795,
      0,
      16777215,
      15658734,
      13577007,
      16777215,
      true,
      "http://www.example.com/logo.jpg"
    );
  }

  return branding_get_object_v1_response_m_payload;
}


#ifdef branding_get_object_v1_response_m_payload_MAIN

void test_branding_get_object_v1_response_m_payload(int include_optional) {
    branding_get_object_v1_response_m_payload_t* branding_get_object_v1_response_m_payload_1 = instantiate_branding_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonbranding_get_object_v1_response_m_payload_1 = branding_get_object_v1_response_m_payload_convertToJSON(branding_get_object_v1_response_m_payload_1);
	printf("branding_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonbranding_get_object_v1_response_m_payload_1));
	branding_get_object_v1_response_m_payload_t* branding_get_object_v1_response_m_payload_2 = branding_get_object_v1_response_m_payload_parseFromJSON(jsonbranding_get_object_v1_response_m_payload_1);
	cJSON* jsonbranding_get_object_v1_response_m_payload_2 = branding_get_object_v1_response_m_payload_convertToJSON(branding_get_object_v1_response_m_payload_2);
	printf("repeating branding_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonbranding_get_object_v1_response_m_payload_2));
}

int main() {
  test_branding_get_object_v1_response_m_payload(1);
  test_branding_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_get_object_v1_response_m_payload_MAIN
#endif // branding_get_object_v1_response_m_payload_TEST
