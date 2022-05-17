#ifndef ezsignbulksend_get_forms_data_v1_response_all_of_TEST
#define ezsignbulksend_get_forms_data_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_get_forms_data_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_get_forms_data_v1_response_all_of.h"
ezsignbulksend_get_forms_data_v1_response_all_of_t* instantiate_ezsignbulksend_get_forms_data_v1_response_all_of(int include_optional);

#include "test_ezsignbulksend_get_forms_data_v1_response_m_payload.c"


ezsignbulksend_get_forms_data_v1_response_all_of_t* instantiate_ezsignbulksend_get_forms_data_v1_response_all_of(int include_optional) {
  ezsignbulksend_get_forms_data_v1_response_all_of_t* ezsignbulksend_get_forms_data_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignbulksend_get_forms_data_v1_response_all_of = ezsignbulksend_get_forms_data_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignbulksend_get_forms_data_v1_response_m_payload(0)
    );
  } else {
    ezsignbulksend_get_forms_data_v1_response_all_of = ezsignbulksend_get_forms_data_v1_response_all_of_create(
      NULL
    );
  }

  return ezsignbulksend_get_forms_data_v1_response_all_of;
}


#ifdef ezsignbulksend_get_forms_data_v1_response_all_of_MAIN

void test_ezsignbulksend_get_forms_data_v1_response_all_of(int include_optional) {
    ezsignbulksend_get_forms_data_v1_response_all_of_t* ezsignbulksend_get_forms_data_v1_response_all_of_1 = instantiate_ezsignbulksend_get_forms_data_v1_response_all_of(include_optional);

	cJSON* jsonezsignbulksend_get_forms_data_v1_response_all_of_1 = ezsignbulksend_get_forms_data_v1_response_all_of_convertToJSON(ezsignbulksend_get_forms_data_v1_response_all_of_1);
	printf("ezsignbulksend_get_forms_data_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignbulksend_get_forms_data_v1_response_all_of_1));
	ezsignbulksend_get_forms_data_v1_response_all_of_t* ezsignbulksend_get_forms_data_v1_response_all_of_2 = ezsignbulksend_get_forms_data_v1_response_all_of_parseFromJSON(jsonezsignbulksend_get_forms_data_v1_response_all_of_1);
	cJSON* jsonezsignbulksend_get_forms_data_v1_response_all_of_2 = ezsignbulksend_get_forms_data_v1_response_all_of_convertToJSON(ezsignbulksend_get_forms_data_v1_response_all_of_2);
	printf("repeating ezsignbulksend_get_forms_data_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignbulksend_get_forms_data_v1_response_all_of_2));
}

int main() {
  test_ezsignbulksend_get_forms_data_v1_response_all_of(1);
  test_ezsignbulksend_get_forms_data_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_get_forms_data_v1_response_all_of_MAIN
#endif // ezsignbulksend_get_forms_data_v1_response_all_of_TEST
