#ifndef list_get_listpresentation_v1_response_m_payload_TEST
#define list_get_listpresentation_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define list_get_listpresentation_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/list_get_listpresentation_v1_response_m_payload.h"
list_get_listpresentation_v1_response_m_payload_t* instantiate_list_get_listpresentation_v1_response_m_payload(int include_optional);



list_get_listpresentation_v1_response_m_payload_t* instantiate_list_get_listpresentation_v1_response_m_payload(int include_optional) {
  list_get_listpresentation_v1_response_m_payload_t* list_get_listpresentation_v1_response_m_payload = NULL;
  if (include_optional) {
    list_get_listpresentation_v1_response_m_payload = list_get_listpresentation_v1_response_m_payload_create(
      list_create()
    );
  } else {
    list_get_listpresentation_v1_response_m_payload = list_get_listpresentation_v1_response_m_payload_create(
      list_create()
    );
  }

  return list_get_listpresentation_v1_response_m_payload;
}


#ifdef list_get_listpresentation_v1_response_m_payload_MAIN

void test_list_get_listpresentation_v1_response_m_payload(int include_optional) {
    list_get_listpresentation_v1_response_m_payload_t* list_get_listpresentation_v1_response_m_payload_1 = instantiate_list_get_listpresentation_v1_response_m_payload(include_optional);

	cJSON* jsonlist_get_listpresentation_v1_response_m_payload_1 = list_get_listpresentation_v1_response_m_payload_convertToJSON(list_get_listpresentation_v1_response_m_payload_1);
	printf("list_get_listpresentation_v1_response_m_payload :\n%s\n", cJSON_Print(jsonlist_get_listpresentation_v1_response_m_payload_1));
	list_get_listpresentation_v1_response_m_payload_t* list_get_listpresentation_v1_response_m_payload_2 = list_get_listpresentation_v1_response_m_payload_parseFromJSON(jsonlist_get_listpresentation_v1_response_m_payload_1);
	cJSON* jsonlist_get_listpresentation_v1_response_m_payload_2 = list_get_listpresentation_v1_response_m_payload_convertToJSON(list_get_listpresentation_v1_response_m_payload_2);
	printf("repeating list_get_listpresentation_v1_response_m_payload:\n%s\n", cJSON_Print(jsonlist_get_listpresentation_v1_response_m_payload_2));
}

int main() {
  test_list_get_listpresentation_v1_response_m_payload(1);
  test_list_get_listpresentation_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // list_get_listpresentation_v1_response_m_payload_MAIN
#endif // list_get_listpresentation_v1_response_m_payload_TEST
