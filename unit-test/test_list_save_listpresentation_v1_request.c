#ifndef list_save_listpresentation_v1_request_TEST
#define list_save_listpresentation_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define list_save_listpresentation_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/list_save_listpresentation_v1_request.h"
list_save_listpresentation_v1_request_t* instantiate_list_save_listpresentation_v1_request(int include_optional);



list_save_listpresentation_v1_request_t* instantiate_list_save_listpresentation_v1_request(int include_optional) {
  list_save_listpresentation_v1_request_t* list_save_listpresentation_v1_request = NULL;
  if (include_optional) {
    list_save_listpresentation_v1_request = list_save_listpresentation_v1_request_create(
      list_createList()
    );
  } else {
    list_save_listpresentation_v1_request = list_save_listpresentation_v1_request_create(
      list_createList()
    );
  }

  return list_save_listpresentation_v1_request;
}


#ifdef list_save_listpresentation_v1_request_MAIN

void test_list_save_listpresentation_v1_request(int include_optional) {
    list_save_listpresentation_v1_request_t* list_save_listpresentation_v1_request_1 = instantiate_list_save_listpresentation_v1_request(include_optional);

	cJSON* jsonlist_save_listpresentation_v1_request_1 = list_save_listpresentation_v1_request_convertToJSON(list_save_listpresentation_v1_request_1);
	printf("list_save_listpresentation_v1_request :\n%s\n", cJSON_Print(jsonlist_save_listpresentation_v1_request_1));
	list_save_listpresentation_v1_request_t* list_save_listpresentation_v1_request_2 = list_save_listpresentation_v1_request_parseFromJSON(jsonlist_save_listpresentation_v1_request_1);
	cJSON* jsonlist_save_listpresentation_v1_request_2 = list_save_listpresentation_v1_request_convertToJSON(list_save_listpresentation_v1_request_2);
	printf("repeating list_save_listpresentation_v1_request:\n%s\n", cJSON_Print(jsonlist_save_listpresentation_v1_request_2));
}

int main() {
  test_list_save_listpresentation_v1_request(1);
  test_list_save_listpresentation_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // list_save_listpresentation_v1_request_MAIN
#endif // list_save_listpresentation_v1_request_TEST
