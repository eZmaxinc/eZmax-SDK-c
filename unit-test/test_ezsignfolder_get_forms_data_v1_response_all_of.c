#ifndef ezsignfolder_get_forms_data_v1_response_all_of_TEST
#define ezsignfolder_get_forms_data_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_get_forms_data_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_get_forms_data_v1_response_all_of.h"
ezsignfolder_get_forms_data_v1_response_all_of_t* instantiate_ezsignfolder_get_forms_data_v1_response_all_of(int include_optional);

#include "test_ezsignfolder_get_forms_data_v1_response_m_payload.c"


ezsignfolder_get_forms_data_v1_response_all_of_t* instantiate_ezsignfolder_get_forms_data_v1_response_all_of(int include_optional) {
  ezsignfolder_get_forms_data_v1_response_all_of_t* ezsignfolder_get_forms_data_v1_response_all_of = NULL;
  if (include_optional) {
    ezsignfolder_get_forms_data_v1_response_all_of = ezsignfolder_get_forms_data_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignfolder_get_forms_data_v1_response_m_payload(0)
    );
  } else {
    ezsignfolder_get_forms_data_v1_response_all_of = ezsignfolder_get_forms_data_v1_response_all_of_create(
      NULL
    );
  }

  return ezsignfolder_get_forms_data_v1_response_all_of;
}


#ifdef ezsignfolder_get_forms_data_v1_response_all_of_MAIN

void test_ezsignfolder_get_forms_data_v1_response_all_of(int include_optional) {
    ezsignfolder_get_forms_data_v1_response_all_of_t* ezsignfolder_get_forms_data_v1_response_all_of_1 = instantiate_ezsignfolder_get_forms_data_v1_response_all_of(include_optional);

	cJSON* jsonezsignfolder_get_forms_data_v1_response_all_of_1 = ezsignfolder_get_forms_data_v1_response_all_of_convertToJSON(ezsignfolder_get_forms_data_v1_response_all_of_1);
	printf("ezsignfolder_get_forms_data_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsignfolder_get_forms_data_v1_response_all_of_1));
	ezsignfolder_get_forms_data_v1_response_all_of_t* ezsignfolder_get_forms_data_v1_response_all_of_2 = ezsignfolder_get_forms_data_v1_response_all_of_parseFromJSON(jsonezsignfolder_get_forms_data_v1_response_all_of_1);
	cJSON* jsonezsignfolder_get_forms_data_v1_response_all_of_2 = ezsignfolder_get_forms_data_v1_response_all_of_convertToJSON(ezsignfolder_get_forms_data_v1_response_all_of_2);
	printf("repeating ezsignfolder_get_forms_data_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsignfolder_get_forms_data_v1_response_all_of_2));
}

int main() {
  test_ezsignfolder_get_forms_data_v1_response_all_of(1);
  test_ezsignfolder_get_forms_data_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_get_forms_data_v1_response_all_of_MAIN
#endif // ezsignfolder_get_forms_data_v1_response_all_of_TEST
