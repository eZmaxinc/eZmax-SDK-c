#ifndef list_save_listpresentation_v1_response_TEST
#define list_save_listpresentation_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define list_save_listpresentation_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/list_save_listpresentation_v1_response.h"
list_save_listpresentation_v1_response_t* instantiate_list_save_listpresentation_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


list_save_listpresentation_v1_response_t* instantiate_list_save_listpresentation_v1_response(int include_optional) {
  list_save_listpresentation_v1_response_t* list_save_listpresentation_v1_response = NULL;
  if (include_optional) {
    list_save_listpresentation_v1_response = list_save_listpresentation_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    list_save_listpresentation_v1_response = list_save_listpresentation_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return list_save_listpresentation_v1_response;
}


#ifdef list_save_listpresentation_v1_response_MAIN

void test_list_save_listpresentation_v1_response(int include_optional) {
    list_save_listpresentation_v1_response_t* list_save_listpresentation_v1_response_1 = instantiate_list_save_listpresentation_v1_response(include_optional);

	cJSON* jsonlist_save_listpresentation_v1_response_1 = list_save_listpresentation_v1_response_convertToJSON(list_save_listpresentation_v1_response_1);
	printf("list_save_listpresentation_v1_response :\n%s\n", cJSON_Print(jsonlist_save_listpresentation_v1_response_1));
	list_save_listpresentation_v1_response_t* list_save_listpresentation_v1_response_2 = list_save_listpresentation_v1_response_parseFromJSON(jsonlist_save_listpresentation_v1_response_1);
	cJSON* jsonlist_save_listpresentation_v1_response_2 = list_save_listpresentation_v1_response_convertToJSON(list_save_listpresentation_v1_response_2);
	printf("repeating list_save_listpresentation_v1_response:\n%s\n", cJSON_Print(jsonlist_save_listpresentation_v1_response_2));
}

int main() {
  test_list_save_listpresentation_v1_response(1);
  test_list_save_listpresentation_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // list_save_listpresentation_v1_response_MAIN
#endif // list_save_listpresentation_v1_response_TEST
