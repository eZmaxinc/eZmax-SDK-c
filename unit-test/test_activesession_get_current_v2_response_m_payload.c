#ifndef activesession_get_current_v2_response_m_payload_TEST
#define activesession_get_current_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_get_current_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_get_current_v2_response_m_payload.h"
activesession_get_current_v2_response_m_payload_t* instantiate_activesession_get_current_v2_response_m_payload(int include_optional);

#include "test_activesession_response_compound.c"


activesession_get_current_v2_response_m_payload_t* instantiate_activesession_get_current_v2_response_m_payload(int include_optional) {
  activesession_get_current_v2_response_m_payload_t* activesession_get_current_v2_response_m_payload = NULL;
  if (include_optional) {
    activesession_get_current_v2_response_m_payload = activesession_get_current_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_activesession_response_compound(0)
    );
  } else {
    activesession_get_current_v2_response_m_payload = activesession_get_current_v2_response_m_payload_create(
      NULL
    );
  }

  return activesession_get_current_v2_response_m_payload;
}


#ifdef activesession_get_current_v2_response_m_payload_MAIN

void test_activesession_get_current_v2_response_m_payload(int include_optional) {
    activesession_get_current_v2_response_m_payload_t* activesession_get_current_v2_response_m_payload_1 = instantiate_activesession_get_current_v2_response_m_payload(include_optional);

	cJSON* jsonactivesession_get_current_v2_response_m_payload_1 = activesession_get_current_v2_response_m_payload_convertToJSON(activesession_get_current_v2_response_m_payload_1);
	printf("activesession_get_current_v2_response_m_payload :\n%s\n", cJSON_Print(jsonactivesession_get_current_v2_response_m_payload_1));
	activesession_get_current_v2_response_m_payload_t* activesession_get_current_v2_response_m_payload_2 = activesession_get_current_v2_response_m_payload_parseFromJSON(jsonactivesession_get_current_v2_response_m_payload_1);
	cJSON* jsonactivesession_get_current_v2_response_m_payload_2 = activesession_get_current_v2_response_m_payload_convertToJSON(activesession_get_current_v2_response_m_payload_2);
	printf("repeating activesession_get_current_v2_response_m_payload:\n%s\n", cJSON_Print(jsonactivesession_get_current_v2_response_m_payload_2));
}

int main() {
  test_activesession_get_current_v2_response_m_payload(1);
  test_activesession_get_current_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_get_current_v2_response_m_payload_MAIN
#endif // activesession_get_current_v2_response_m_payload_TEST
