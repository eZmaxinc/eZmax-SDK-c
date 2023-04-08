#ifndef activesession_get_list_v1_response_m_payload_all_of_TEST
#define activesession_get_list_v1_response_m_payload_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_get_list_v1_response_m_payload_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_get_list_v1_response_m_payload_all_of.h"
activesession_get_list_v1_response_m_payload_all_of_t* instantiate_activesession_get_list_v1_response_m_payload_all_of(int include_optional);



activesession_get_list_v1_response_m_payload_all_of_t* instantiate_activesession_get_list_v1_response_m_payload_all_of(int include_optional) {
  activesession_get_list_v1_response_m_payload_all_of_t* activesession_get_list_v1_response_m_payload_all_of = NULL;
  if (include_optional) {
    activesession_get_list_v1_response_m_payload_all_of = activesession_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  } else {
    activesession_get_list_v1_response_m_payload_all_of = activesession_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  }

  return activesession_get_list_v1_response_m_payload_all_of;
}


#ifdef activesession_get_list_v1_response_m_payload_all_of_MAIN

void test_activesession_get_list_v1_response_m_payload_all_of(int include_optional) {
    activesession_get_list_v1_response_m_payload_all_of_t* activesession_get_list_v1_response_m_payload_all_of_1 = instantiate_activesession_get_list_v1_response_m_payload_all_of(include_optional);

	cJSON* jsonactivesession_get_list_v1_response_m_payload_all_of_1 = activesession_get_list_v1_response_m_payload_all_of_convertToJSON(activesession_get_list_v1_response_m_payload_all_of_1);
	printf("activesession_get_list_v1_response_m_payload_all_of :\n%s\n", cJSON_Print(jsonactivesession_get_list_v1_response_m_payload_all_of_1));
	activesession_get_list_v1_response_m_payload_all_of_t* activesession_get_list_v1_response_m_payload_all_of_2 = activesession_get_list_v1_response_m_payload_all_of_parseFromJSON(jsonactivesession_get_list_v1_response_m_payload_all_of_1);
	cJSON* jsonactivesession_get_list_v1_response_m_payload_all_of_2 = activesession_get_list_v1_response_m_payload_all_of_convertToJSON(activesession_get_list_v1_response_m_payload_all_of_2);
	printf("repeating activesession_get_list_v1_response_m_payload_all_of:\n%s\n", cJSON_Print(jsonactivesession_get_list_v1_response_m_payload_all_of_2));
}

int main() {
  test_activesession_get_list_v1_response_m_payload_all_of(1);
  test_activesession_get_list_v1_response_m_payload_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_get_list_v1_response_m_payload_all_of_MAIN
#endif // activesession_get_list_v1_response_m_payload_all_of_TEST
