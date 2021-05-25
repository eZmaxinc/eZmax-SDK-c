#ifndef authenticate_authenticate_v2_response_m_payload_TEST
#define authenticate_authenticate_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authenticate_authenticate_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authenticate_authenticate_v2_response_m_payload.h"
authenticate_authenticate_v2_response_m_payload_t* instantiate_authenticate_authenticate_v2_response_m_payload(int include_optional);



authenticate_authenticate_v2_response_m_payload_t* instantiate_authenticate_authenticate_v2_response_m_payload(int include_optional) {
  authenticate_authenticate_v2_response_m_payload_t* authenticate_authenticate_v2_response_m_payload = NULL;
  if (include_optional) {
    authenticate_authenticate_v2_response_m_payload = authenticate_authenticate_v2_response_m_payload_create(
      "0",
      "0"
    );
  } else {
    authenticate_authenticate_v2_response_m_payload = authenticate_authenticate_v2_response_m_payload_create(
      "0",
      "0"
    );
  }

  return authenticate_authenticate_v2_response_m_payload;
}


#ifdef authenticate_authenticate_v2_response_m_payload_MAIN

void test_authenticate_authenticate_v2_response_m_payload(int include_optional) {
    authenticate_authenticate_v2_response_m_payload_t* authenticate_authenticate_v2_response_m_payload_1 = instantiate_authenticate_authenticate_v2_response_m_payload(include_optional);

	cJSON* jsonauthenticate_authenticate_v2_response_m_payload_1 = authenticate_authenticate_v2_response_m_payload_convertToJSON(authenticate_authenticate_v2_response_m_payload_1);
	printf("authenticate_authenticate_v2_response_m_payload :\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_response_m_payload_1));
	authenticate_authenticate_v2_response_m_payload_t* authenticate_authenticate_v2_response_m_payload_2 = authenticate_authenticate_v2_response_m_payload_parseFromJSON(jsonauthenticate_authenticate_v2_response_m_payload_1);
	cJSON* jsonauthenticate_authenticate_v2_response_m_payload_2 = authenticate_authenticate_v2_response_m_payload_convertToJSON(authenticate_authenticate_v2_response_m_payload_2);
	printf("repeating authenticate_authenticate_v2_response_m_payload:\n%s\n", cJSON_Print(jsonauthenticate_authenticate_v2_response_m_payload_2));
}

int main() {
  test_authenticate_authenticate_v2_response_m_payload(1);
  test_authenticate_authenticate_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // authenticate_authenticate_v2_response_m_payload_MAIN
#endif // authenticate_authenticate_v2_response_m_payload_TEST
