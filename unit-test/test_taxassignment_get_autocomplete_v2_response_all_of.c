#ifndef taxassignment_get_autocomplete_v2_response_all_of_TEST
#define taxassignment_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define taxassignment_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/taxassignment_get_autocomplete_v2_response_all_of.h"
taxassignment_get_autocomplete_v2_response_all_of_t* instantiate_taxassignment_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_taxassignment_get_autocomplete_v2_response_m_payload.c"


taxassignment_get_autocomplete_v2_response_all_of_t* instantiate_taxassignment_get_autocomplete_v2_response_all_of(int include_optional) {
  taxassignment_get_autocomplete_v2_response_all_of_t* taxassignment_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    taxassignment_get_autocomplete_v2_response_all_of = taxassignment_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_taxassignment_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    taxassignment_get_autocomplete_v2_response_all_of = taxassignment_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return taxassignment_get_autocomplete_v2_response_all_of;
}


#ifdef taxassignment_get_autocomplete_v2_response_all_of_MAIN

void test_taxassignment_get_autocomplete_v2_response_all_of(int include_optional) {
    taxassignment_get_autocomplete_v2_response_all_of_t* taxassignment_get_autocomplete_v2_response_all_of_1 = instantiate_taxassignment_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsontaxassignment_get_autocomplete_v2_response_all_of_1 = taxassignment_get_autocomplete_v2_response_all_of_convertToJSON(taxassignment_get_autocomplete_v2_response_all_of_1);
	printf("taxassignment_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsontaxassignment_get_autocomplete_v2_response_all_of_1));
	taxassignment_get_autocomplete_v2_response_all_of_t* taxassignment_get_autocomplete_v2_response_all_of_2 = taxassignment_get_autocomplete_v2_response_all_of_parseFromJSON(jsontaxassignment_get_autocomplete_v2_response_all_of_1);
	cJSON* jsontaxassignment_get_autocomplete_v2_response_all_of_2 = taxassignment_get_autocomplete_v2_response_all_of_convertToJSON(taxassignment_get_autocomplete_v2_response_all_of_2);
	printf("repeating taxassignment_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsontaxassignment_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_taxassignment_get_autocomplete_v2_response_all_of(1);
  test_taxassignment_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // taxassignment_get_autocomplete_v2_response_all_of_MAIN
#endif // taxassignment_get_autocomplete_v2_response_all_of_TEST
