#ifndef list_save_listpresentation_v1_response_all_of_TEST
#define list_save_listpresentation_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define list_save_listpresentation_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/list_save_listpresentation_v1_response_all_of.h"
list_save_listpresentation_v1_response_all_of_t* instantiate_list_save_listpresentation_v1_response_all_of(int include_optional);

#include "test_list_save_listpresentation_v1_response_m_payload.c"


list_save_listpresentation_v1_response_all_of_t* instantiate_list_save_listpresentation_v1_response_all_of(int include_optional) {
  list_save_listpresentation_v1_response_all_of_t* list_save_listpresentation_v1_response_all_of = NULL;
  if (include_optional) {
    list_save_listpresentation_v1_response_all_of = list_save_listpresentation_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_list_save_listpresentation_v1_response_m_payload(0)
    );
  } else {
    list_save_listpresentation_v1_response_all_of = list_save_listpresentation_v1_response_all_of_create(
      NULL
    );
  }

  return list_save_listpresentation_v1_response_all_of;
}


#ifdef list_save_listpresentation_v1_response_all_of_MAIN

void test_list_save_listpresentation_v1_response_all_of(int include_optional) {
    list_save_listpresentation_v1_response_all_of_t* list_save_listpresentation_v1_response_all_of_1 = instantiate_list_save_listpresentation_v1_response_all_of(include_optional);

	cJSON* jsonlist_save_listpresentation_v1_response_all_of_1 = list_save_listpresentation_v1_response_all_of_convertToJSON(list_save_listpresentation_v1_response_all_of_1);
	printf("list_save_listpresentation_v1_response_all_of :\n%s\n", cJSON_Print(jsonlist_save_listpresentation_v1_response_all_of_1));
	list_save_listpresentation_v1_response_all_of_t* list_save_listpresentation_v1_response_all_of_2 = list_save_listpresentation_v1_response_all_of_parseFromJSON(jsonlist_save_listpresentation_v1_response_all_of_1);
	cJSON* jsonlist_save_listpresentation_v1_response_all_of_2 = list_save_listpresentation_v1_response_all_of_convertToJSON(list_save_listpresentation_v1_response_all_of_2);
	printf("repeating list_save_listpresentation_v1_response_all_of:\n%s\n", cJSON_Print(jsonlist_save_listpresentation_v1_response_all_of_2));
}

int main() {
  test_list_save_listpresentation_v1_response_all_of(1);
  test_list_save_listpresentation_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // list_save_listpresentation_v1_response_all_of_MAIN
#endif // list_save_listpresentation_v1_response_all_of_TEST
