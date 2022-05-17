#ifndef ezsign_suggest_signers_v1_response_all_of_TEST
#define ezsign_suggest_signers_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsign_suggest_signers_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsign_suggest_signers_v1_response_all_of.h"
ezsign_suggest_signers_v1_response_all_of_t* instantiate_ezsign_suggest_signers_v1_response_all_of(int include_optional);

#include "test_ezsign_suggest_signers_v1_response_m_payload.c"


ezsign_suggest_signers_v1_response_all_of_t* instantiate_ezsign_suggest_signers_v1_response_all_of(int include_optional) {
  ezsign_suggest_signers_v1_response_all_of_t* ezsign_suggest_signers_v1_response_all_of = NULL;
  if (include_optional) {
    ezsign_suggest_signers_v1_response_all_of = ezsign_suggest_signers_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsign_suggest_signers_v1_response_m_payload(0)
    );
  } else {
    ezsign_suggest_signers_v1_response_all_of = ezsign_suggest_signers_v1_response_all_of_create(
      NULL
    );
  }

  return ezsign_suggest_signers_v1_response_all_of;
}


#ifdef ezsign_suggest_signers_v1_response_all_of_MAIN

void test_ezsign_suggest_signers_v1_response_all_of(int include_optional) {
    ezsign_suggest_signers_v1_response_all_of_t* ezsign_suggest_signers_v1_response_all_of_1 = instantiate_ezsign_suggest_signers_v1_response_all_of(include_optional);

	cJSON* jsonezsign_suggest_signers_v1_response_all_of_1 = ezsign_suggest_signers_v1_response_all_of_convertToJSON(ezsign_suggest_signers_v1_response_all_of_1);
	printf("ezsign_suggest_signers_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsign_suggest_signers_v1_response_all_of_1));
	ezsign_suggest_signers_v1_response_all_of_t* ezsign_suggest_signers_v1_response_all_of_2 = ezsign_suggest_signers_v1_response_all_of_parseFromJSON(jsonezsign_suggest_signers_v1_response_all_of_1);
	cJSON* jsonezsign_suggest_signers_v1_response_all_of_2 = ezsign_suggest_signers_v1_response_all_of_convertToJSON(ezsign_suggest_signers_v1_response_all_of_2);
	printf("repeating ezsign_suggest_signers_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsign_suggest_signers_v1_response_all_of_2));
}

int main() {
  test_ezsign_suggest_signers_v1_response_all_of(1);
  test_ezsign_suggest_signers_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsign_suggest_signers_v1_response_all_of_MAIN
#endif // ezsign_suggest_signers_v1_response_all_of_TEST
