#ifndef franchisebroker_get_autocomplete_v2_response_all_of_TEST
#define franchisebroker_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisebroker_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisebroker_get_autocomplete_v2_response_all_of.h"
franchisebroker_get_autocomplete_v2_response_all_of_t* instantiate_franchisebroker_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_franchisebroker_get_autocomplete_v2_response_m_payload.c"


franchisebroker_get_autocomplete_v2_response_all_of_t* instantiate_franchisebroker_get_autocomplete_v2_response_all_of(int include_optional) {
  franchisebroker_get_autocomplete_v2_response_all_of_t* franchisebroker_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    franchisebroker_get_autocomplete_v2_response_all_of = franchisebroker_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_franchisebroker_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    franchisebroker_get_autocomplete_v2_response_all_of = franchisebroker_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return franchisebroker_get_autocomplete_v2_response_all_of;
}


#ifdef franchisebroker_get_autocomplete_v2_response_all_of_MAIN

void test_franchisebroker_get_autocomplete_v2_response_all_of(int include_optional) {
    franchisebroker_get_autocomplete_v2_response_all_of_t* franchisebroker_get_autocomplete_v2_response_all_of_1 = instantiate_franchisebroker_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonfranchisebroker_get_autocomplete_v2_response_all_of_1 = franchisebroker_get_autocomplete_v2_response_all_of_convertToJSON(franchisebroker_get_autocomplete_v2_response_all_of_1);
	printf("franchisebroker_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonfranchisebroker_get_autocomplete_v2_response_all_of_1));
	franchisebroker_get_autocomplete_v2_response_all_of_t* franchisebroker_get_autocomplete_v2_response_all_of_2 = franchisebroker_get_autocomplete_v2_response_all_of_parseFromJSON(jsonfranchisebroker_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonfranchisebroker_get_autocomplete_v2_response_all_of_2 = franchisebroker_get_autocomplete_v2_response_all_of_convertToJSON(franchisebroker_get_autocomplete_v2_response_all_of_2);
	printf("repeating franchisebroker_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonfranchisebroker_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_franchisebroker_get_autocomplete_v2_response_all_of(1);
  test_franchisebroker_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisebroker_get_autocomplete_v2_response_all_of_MAIN
#endif // franchisebroker_get_autocomplete_v2_response_all_of_TEST
