#ifndef emailtype_get_autocomplete_v2_response_all_of_TEST
#define emailtype_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emailtype_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emailtype_get_autocomplete_v2_response_all_of.h"
emailtype_get_autocomplete_v2_response_all_of_t* instantiate_emailtype_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_emailtype_get_autocomplete_v2_response_m_payload.c"


emailtype_get_autocomplete_v2_response_all_of_t* instantiate_emailtype_get_autocomplete_v2_response_all_of(int include_optional) {
  emailtype_get_autocomplete_v2_response_all_of_t* emailtype_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    emailtype_get_autocomplete_v2_response_all_of = emailtype_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_emailtype_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    emailtype_get_autocomplete_v2_response_all_of = emailtype_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return emailtype_get_autocomplete_v2_response_all_of;
}


#ifdef emailtype_get_autocomplete_v2_response_all_of_MAIN

void test_emailtype_get_autocomplete_v2_response_all_of(int include_optional) {
    emailtype_get_autocomplete_v2_response_all_of_t* emailtype_get_autocomplete_v2_response_all_of_1 = instantiate_emailtype_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonemailtype_get_autocomplete_v2_response_all_of_1 = emailtype_get_autocomplete_v2_response_all_of_convertToJSON(emailtype_get_autocomplete_v2_response_all_of_1);
	printf("emailtype_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonemailtype_get_autocomplete_v2_response_all_of_1));
	emailtype_get_autocomplete_v2_response_all_of_t* emailtype_get_autocomplete_v2_response_all_of_2 = emailtype_get_autocomplete_v2_response_all_of_parseFromJSON(jsonemailtype_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonemailtype_get_autocomplete_v2_response_all_of_2 = emailtype_get_autocomplete_v2_response_all_of_convertToJSON(emailtype_get_autocomplete_v2_response_all_of_2);
	printf("repeating emailtype_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonemailtype_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_emailtype_get_autocomplete_v2_response_all_of(1);
  test_emailtype_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // emailtype_get_autocomplete_v2_response_all_of_MAIN
#endif // emailtype_get_autocomplete_v2_response_all_of_TEST
