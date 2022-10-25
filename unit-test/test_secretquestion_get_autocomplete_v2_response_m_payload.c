#ifndef secretquestion_get_autocomplete_v2_response_m_payload_TEST
#define secretquestion_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define secretquestion_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/secretquestion_get_autocomplete_v2_response_m_payload.h"
secretquestion_get_autocomplete_v2_response_m_payload_t* instantiate_secretquestion_get_autocomplete_v2_response_m_payload(int include_optional);



secretquestion_get_autocomplete_v2_response_m_payload_t* instantiate_secretquestion_get_autocomplete_v2_response_m_payload(int include_optional) {
  secretquestion_get_autocomplete_v2_response_m_payload_t* secretquestion_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    secretquestion_get_autocomplete_v2_response_m_payload = secretquestion_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    secretquestion_get_autocomplete_v2_response_m_payload = secretquestion_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return secretquestion_get_autocomplete_v2_response_m_payload;
}


#ifdef secretquestion_get_autocomplete_v2_response_m_payload_MAIN

void test_secretquestion_get_autocomplete_v2_response_m_payload(int include_optional) {
    secretquestion_get_autocomplete_v2_response_m_payload_t* secretquestion_get_autocomplete_v2_response_m_payload_1 = instantiate_secretquestion_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonsecretquestion_get_autocomplete_v2_response_m_payload_1 = secretquestion_get_autocomplete_v2_response_m_payload_convertToJSON(secretquestion_get_autocomplete_v2_response_m_payload_1);
	printf("secretquestion_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonsecretquestion_get_autocomplete_v2_response_m_payload_1));
	secretquestion_get_autocomplete_v2_response_m_payload_t* secretquestion_get_autocomplete_v2_response_m_payload_2 = secretquestion_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonsecretquestion_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonsecretquestion_get_autocomplete_v2_response_m_payload_2 = secretquestion_get_autocomplete_v2_response_m_payload_convertToJSON(secretquestion_get_autocomplete_v2_response_m_payload_2);
	printf("repeating secretquestion_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonsecretquestion_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_secretquestion_get_autocomplete_v2_response_m_payload(1);
  test_secretquestion_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // secretquestion_get_autocomplete_v2_response_m_payload_MAIN
#endif // secretquestion_get_autocomplete_v2_response_m_payload_TEST
