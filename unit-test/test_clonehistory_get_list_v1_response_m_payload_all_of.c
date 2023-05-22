#ifndef clonehistory_get_list_v1_response_m_payload_all_of_TEST
#define clonehistory_get_list_v1_response_m_payload_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define clonehistory_get_list_v1_response_m_payload_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/clonehistory_get_list_v1_response_m_payload_all_of.h"
clonehistory_get_list_v1_response_m_payload_all_of_t* instantiate_clonehistory_get_list_v1_response_m_payload_all_of(int include_optional);



clonehistory_get_list_v1_response_m_payload_all_of_t* instantiate_clonehistory_get_list_v1_response_m_payload_all_of(int include_optional) {
  clonehistory_get_list_v1_response_m_payload_all_of_t* clonehistory_get_list_v1_response_m_payload_all_of = NULL;
  if (include_optional) {
    clonehistory_get_list_v1_response_m_payload_all_of = clonehistory_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  } else {
    clonehistory_get_list_v1_response_m_payload_all_of = clonehistory_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  }

  return clonehistory_get_list_v1_response_m_payload_all_of;
}


#ifdef clonehistory_get_list_v1_response_m_payload_all_of_MAIN

void test_clonehistory_get_list_v1_response_m_payload_all_of(int include_optional) {
    clonehistory_get_list_v1_response_m_payload_all_of_t* clonehistory_get_list_v1_response_m_payload_all_of_1 = instantiate_clonehistory_get_list_v1_response_m_payload_all_of(include_optional);

	cJSON* jsonclonehistory_get_list_v1_response_m_payload_all_of_1 = clonehistory_get_list_v1_response_m_payload_all_of_convertToJSON(clonehistory_get_list_v1_response_m_payload_all_of_1);
	printf("clonehistory_get_list_v1_response_m_payload_all_of :\n%s\n", cJSON_Print(jsonclonehistory_get_list_v1_response_m_payload_all_of_1));
	clonehistory_get_list_v1_response_m_payload_all_of_t* clonehistory_get_list_v1_response_m_payload_all_of_2 = clonehistory_get_list_v1_response_m_payload_all_of_parseFromJSON(jsonclonehistory_get_list_v1_response_m_payload_all_of_1);
	cJSON* jsonclonehistory_get_list_v1_response_m_payload_all_of_2 = clonehistory_get_list_v1_response_m_payload_all_of_convertToJSON(clonehistory_get_list_v1_response_m_payload_all_of_2);
	printf("repeating clonehistory_get_list_v1_response_m_payload_all_of:\n%s\n", cJSON_Print(jsonclonehistory_get_list_v1_response_m_payload_all_of_2));
}

int main() {
  test_clonehistory_get_list_v1_response_m_payload_all_of(1);
  test_clonehistory_get_list_v1_response_m_payload_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // clonehistory_get_list_v1_response_m_payload_all_of_MAIN
#endif // clonehistory_get_list_v1_response_m_payload_all_of_TEST
