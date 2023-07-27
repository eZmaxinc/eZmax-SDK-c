#ifndef phonetype_get_autocomplete_v2_response_all_of_TEST
#define phonetype_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phonetype_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phonetype_get_autocomplete_v2_response_all_of.h"
phonetype_get_autocomplete_v2_response_all_of_t* instantiate_phonetype_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_phonetype_get_autocomplete_v2_response_m_payload.c"


phonetype_get_autocomplete_v2_response_all_of_t* instantiate_phonetype_get_autocomplete_v2_response_all_of(int include_optional) {
  phonetype_get_autocomplete_v2_response_all_of_t* phonetype_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    phonetype_get_autocomplete_v2_response_all_of = phonetype_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_phonetype_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    phonetype_get_autocomplete_v2_response_all_of = phonetype_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return phonetype_get_autocomplete_v2_response_all_of;
}


#ifdef phonetype_get_autocomplete_v2_response_all_of_MAIN

void test_phonetype_get_autocomplete_v2_response_all_of(int include_optional) {
    phonetype_get_autocomplete_v2_response_all_of_t* phonetype_get_autocomplete_v2_response_all_of_1 = instantiate_phonetype_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonphonetype_get_autocomplete_v2_response_all_of_1 = phonetype_get_autocomplete_v2_response_all_of_convertToJSON(phonetype_get_autocomplete_v2_response_all_of_1);
	printf("phonetype_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonphonetype_get_autocomplete_v2_response_all_of_1));
	phonetype_get_autocomplete_v2_response_all_of_t* phonetype_get_autocomplete_v2_response_all_of_2 = phonetype_get_autocomplete_v2_response_all_of_parseFromJSON(jsonphonetype_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonphonetype_get_autocomplete_v2_response_all_of_2 = phonetype_get_autocomplete_v2_response_all_of_convertToJSON(phonetype_get_autocomplete_v2_response_all_of_2);
	printf("repeating phonetype_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonphonetype_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_phonetype_get_autocomplete_v2_response_all_of(1);
  test_phonetype_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // phonetype_get_autocomplete_v2_response_all_of_MAIN
#endif // phonetype_get_autocomplete_v2_response_all_of_TEST
