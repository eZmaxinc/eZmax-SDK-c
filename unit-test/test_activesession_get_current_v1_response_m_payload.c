#ifndef activesession_get_current_v1_response_m_payload_TEST
#define activesession_get_current_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_get_current_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_get_current_v1_response_m_payload.h"
activesession_get_current_v1_response_m_payload_t* instantiate_activesession_get_current_v1_response_m_payload(int include_optional);



activesession_get_current_v1_response_m_payload_t* instantiate_activesession_get_current_v1_response_m_payload(int include_optional) {
  activesession_get_current_v1_response_m_payload_t* activesession_get_current_v1_response_m_payload = NULL;
  if (include_optional) {
    activesession_get_current_v1_response_m_payload = activesession_get_current_v1_response_m_payload_create(
      "0",
      ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_Normal,
      2,
      "0",
      "0",
      list_create(),
      list_create()
    );
  } else {
    activesession_get_current_v1_response_m_payload = activesession_get_current_v1_response_m_payload_create(
      "0",
      ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_Normal,
      2,
      "0",
      "0",
      list_create(),
      list_create()
    );
  }

  return activesession_get_current_v1_response_m_payload;
}


#ifdef activesession_get_current_v1_response_m_payload_MAIN

void test_activesession_get_current_v1_response_m_payload(int include_optional) {
    activesession_get_current_v1_response_m_payload_t* activesession_get_current_v1_response_m_payload_1 = instantiate_activesession_get_current_v1_response_m_payload(include_optional);

	cJSON* jsonactivesession_get_current_v1_response_m_payload_1 = activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response_m_payload_1);
	printf("activesession_get_current_v1_response_m_payload :\n%s\n", cJSON_Print(jsonactivesession_get_current_v1_response_m_payload_1));
	activesession_get_current_v1_response_m_payload_t* activesession_get_current_v1_response_m_payload_2 = activesession_get_current_v1_response_m_payload_parseFromJSON(jsonactivesession_get_current_v1_response_m_payload_1);
	cJSON* jsonactivesession_get_current_v1_response_m_payload_2 = activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response_m_payload_2);
	printf("repeating activesession_get_current_v1_response_m_payload:\n%s\n", cJSON_Print(jsonactivesession_get_current_v1_response_m_payload_2));
}

int main() {
  test_activesession_get_current_v1_response_m_payload(1);
  test_activesession_get_current_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_get_current_v1_response_m_payload_MAIN
#endif // activesession_get_current_v1_response_m_payload_TEST
