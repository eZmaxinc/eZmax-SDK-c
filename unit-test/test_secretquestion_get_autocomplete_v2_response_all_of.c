#ifndef secretquestion_get_autocomplete_v2_response_all_of_TEST
#define secretquestion_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define secretquestion_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/secretquestion_get_autocomplete_v2_response_all_of.h"
secretquestion_get_autocomplete_v2_response_all_of_t* instantiate_secretquestion_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_secretquestion_get_autocomplete_v2_response_m_payload.c"


secretquestion_get_autocomplete_v2_response_all_of_t* instantiate_secretquestion_get_autocomplete_v2_response_all_of(int include_optional) {
  secretquestion_get_autocomplete_v2_response_all_of_t* secretquestion_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    secretquestion_get_autocomplete_v2_response_all_of = secretquestion_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_secretquestion_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    secretquestion_get_autocomplete_v2_response_all_of = secretquestion_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return secretquestion_get_autocomplete_v2_response_all_of;
}


#ifdef secretquestion_get_autocomplete_v2_response_all_of_MAIN

void test_secretquestion_get_autocomplete_v2_response_all_of(int include_optional) {
    secretquestion_get_autocomplete_v2_response_all_of_t* secretquestion_get_autocomplete_v2_response_all_of_1 = instantiate_secretquestion_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonsecretquestion_get_autocomplete_v2_response_all_of_1 = secretquestion_get_autocomplete_v2_response_all_of_convertToJSON(secretquestion_get_autocomplete_v2_response_all_of_1);
	printf("secretquestion_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonsecretquestion_get_autocomplete_v2_response_all_of_1));
	secretquestion_get_autocomplete_v2_response_all_of_t* secretquestion_get_autocomplete_v2_response_all_of_2 = secretquestion_get_autocomplete_v2_response_all_of_parseFromJSON(jsonsecretquestion_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonsecretquestion_get_autocomplete_v2_response_all_of_2 = secretquestion_get_autocomplete_v2_response_all_of_convertToJSON(secretquestion_get_autocomplete_v2_response_all_of_2);
	printf("repeating secretquestion_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonsecretquestion_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_secretquestion_get_autocomplete_v2_response_all_of(1);
  test_secretquestion_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // secretquestion_get_autocomplete_v2_response_all_of_MAIN
#endif // secretquestion_get_autocomplete_v2_response_all_of_TEST
