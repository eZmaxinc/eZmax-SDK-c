#ifndef franchiseoffice_get_autocomplete_v2_response_all_of_TEST
#define franchiseoffice_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchiseoffice_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchiseoffice_get_autocomplete_v2_response_all_of.h"
franchiseoffice_get_autocomplete_v2_response_all_of_t* instantiate_franchiseoffice_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_franchiseoffice_get_autocomplete_v2_response_m_payload.c"


franchiseoffice_get_autocomplete_v2_response_all_of_t* instantiate_franchiseoffice_get_autocomplete_v2_response_all_of(int include_optional) {
  franchiseoffice_get_autocomplete_v2_response_all_of_t* franchiseoffice_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    franchiseoffice_get_autocomplete_v2_response_all_of = franchiseoffice_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_franchiseoffice_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    franchiseoffice_get_autocomplete_v2_response_all_of = franchiseoffice_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return franchiseoffice_get_autocomplete_v2_response_all_of;
}


#ifdef franchiseoffice_get_autocomplete_v2_response_all_of_MAIN

void test_franchiseoffice_get_autocomplete_v2_response_all_of(int include_optional) {
    franchiseoffice_get_autocomplete_v2_response_all_of_t* franchiseoffice_get_autocomplete_v2_response_all_of_1 = instantiate_franchiseoffice_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonfranchiseoffice_get_autocomplete_v2_response_all_of_1 = franchiseoffice_get_autocomplete_v2_response_all_of_convertToJSON(franchiseoffice_get_autocomplete_v2_response_all_of_1);
	printf("franchiseoffice_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonfranchiseoffice_get_autocomplete_v2_response_all_of_1));
	franchiseoffice_get_autocomplete_v2_response_all_of_t* franchiseoffice_get_autocomplete_v2_response_all_of_2 = franchiseoffice_get_autocomplete_v2_response_all_of_parseFromJSON(jsonfranchiseoffice_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonfranchiseoffice_get_autocomplete_v2_response_all_of_2 = franchiseoffice_get_autocomplete_v2_response_all_of_convertToJSON(franchiseoffice_get_autocomplete_v2_response_all_of_2);
	printf("repeating franchiseoffice_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonfranchiseoffice_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_franchiseoffice_get_autocomplete_v2_response_all_of(1);
  test_franchiseoffice_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchiseoffice_get_autocomplete_v2_response_all_of_MAIN
#endif // franchiseoffice_get_autocomplete_v2_response_all_of_TEST
