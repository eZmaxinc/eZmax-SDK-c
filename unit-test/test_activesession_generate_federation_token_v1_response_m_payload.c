#ifndef activesession_generate_federation_token_v1_response_m_payload_TEST
#define activesession_generate_federation_token_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_generate_federation_token_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_generate_federation_token_v1_response_m_payload.h"
activesession_generate_federation_token_v1_response_m_payload_t* instantiate_activesession_generate_federation_token_v1_response_m_payload(int include_optional);

#include "test_custom_apikeyfederation.c"


activesession_generate_federation_token_v1_response_m_payload_t* instantiate_activesession_generate_federation_token_v1_response_m_payload(int include_optional) {
  activesession_generate_federation_token_v1_response_m_payload_t* activesession_generate_federation_token_v1_response_m_payload = NULL;
  if (include_optional) {
    activesession_generate_federation_token_v1_response_m_payload = activesession_generate_federation_token_v1_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_custom_apikeyfederation(0),
      "http://www.website.com/avatar.jpg"
    );
  } else {
    activesession_generate_federation_token_v1_response_m_payload = activesession_generate_federation_token_v1_response_m_payload_create(
      NULL,
      "http://www.website.com/avatar.jpg"
    );
  }

  return activesession_generate_federation_token_v1_response_m_payload;
}


#ifdef activesession_generate_federation_token_v1_response_m_payload_MAIN

void test_activesession_generate_federation_token_v1_response_m_payload(int include_optional) {
    activesession_generate_federation_token_v1_response_m_payload_t* activesession_generate_federation_token_v1_response_m_payload_1 = instantiate_activesession_generate_federation_token_v1_response_m_payload(include_optional);

	cJSON* jsonactivesession_generate_federation_token_v1_response_m_payload_1 = activesession_generate_federation_token_v1_response_m_payload_convertToJSON(activesession_generate_federation_token_v1_response_m_payload_1);
	printf("activesession_generate_federation_token_v1_response_m_payload :\n%s\n", cJSON_Print(jsonactivesession_generate_federation_token_v1_response_m_payload_1));
	activesession_generate_federation_token_v1_response_m_payload_t* activesession_generate_federation_token_v1_response_m_payload_2 = activesession_generate_federation_token_v1_response_m_payload_parseFromJSON(jsonactivesession_generate_federation_token_v1_response_m_payload_1);
	cJSON* jsonactivesession_generate_federation_token_v1_response_m_payload_2 = activesession_generate_federation_token_v1_response_m_payload_convertToJSON(activesession_generate_federation_token_v1_response_m_payload_2);
	printf("repeating activesession_generate_federation_token_v1_response_m_payload:\n%s\n", cJSON_Print(jsonactivesession_generate_federation_token_v1_response_m_payload_2));
}

int main() {
  test_activesession_generate_federation_token_v1_response_m_payload(1);
  test_activesession_generate_federation_token_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_generate_federation_token_v1_response_m_payload_MAIN
#endif // activesession_generate_federation_token_v1_response_m_payload_TEST
