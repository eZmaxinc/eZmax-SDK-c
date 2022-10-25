#ifndef timezone_get_autocomplete_v2_response_all_of_TEST
#define timezone_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_get_autocomplete_v2_response_all_of.h"
timezone_get_autocomplete_v2_response_all_of_t* instantiate_timezone_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_timezone_get_autocomplete_v2_response_m_payload.c"


timezone_get_autocomplete_v2_response_all_of_t* instantiate_timezone_get_autocomplete_v2_response_all_of(int include_optional) {
  timezone_get_autocomplete_v2_response_all_of_t* timezone_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    timezone_get_autocomplete_v2_response_all_of = timezone_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_timezone_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    timezone_get_autocomplete_v2_response_all_of = timezone_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return timezone_get_autocomplete_v2_response_all_of;
}


#ifdef timezone_get_autocomplete_v2_response_all_of_MAIN

void test_timezone_get_autocomplete_v2_response_all_of(int include_optional) {
    timezone_get_autocomplete_v2_response_all_of_t* timezone_get_autocomplete_v2_response_all_of_1 = instantiate_timezone_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsontimezone_get_autocomplete_v2_response_all_of_1 = timezone_get_autocomplete_v2_response_all_of_convertToJSON(timezone_get_autocomplete_v2_response_all_of_1);
	printf("timezone_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsontimezone_get_autocomplete_v2_response_all_of_1));
	timezone_get_autocomplete_v2_response_all_of_t* timezone_get_autocomplete_v2_response_all_of_2 = timezone_get_autocomplete_v2_response_all_of_parseFromJSON(jsontimezone_get_autocomplete_v2_response_all_of_1);
	cJSON* jsontimezone_get_autocomplete_v2_response_all_of_2 = timezone_get_autocomplete_v2_response_all_of_convertToJSON(timezone_get_autocomplete_v2_response_all_of_2);
	printf("repeating timezone_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsontimezone_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_timezone_get_autocomplete_v2_response_all_of(1);
  test_timezone_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_get_autocomplete_v2_response_all_of_MAIN
#endif // timezone_get_autocomplete_v2_response_all_of_TEST
