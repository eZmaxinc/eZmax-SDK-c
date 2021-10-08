#ifndef ezsignfoldersignerassociation_delete_object_v1_response_TEST
#define ezsignfoldersignerassociation_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_delete_object_v1_response.h"
ezsignfoldersignerassociation_delete_object_v1_response_t* instantiate_ezsignfoldersignerassociation_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignfoldersignerassociation_delete_object_v1_response_t* instantiate_ezsignfoldersignerassociation_delete_object_v1_response(int include_optional) {
  ezsignfoldersignerassociation_delete_object_v1_response_t* ezsignfoldersignerassociation_delete_object_v1_response = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_delete_object_v1_response = ezsignfoldersignerassociation_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignfoldersignerassociation_delete_object_v1_response = ezsignfoldersignerassociation_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignfoldersignerassociation_delete_object_v1_response;
}


#ifdef ezsignfoldersignerassociation_delete_object_v1_response_MAIN

void test_ezsignfoldersignerassociation_delete_object_v1_response(int include_optional) {
    ezsignfoldersignerassociation_delete_object_v1_response_t* ezsignfoldersignerassociation_delete_object_v1_response_1 = instantiate_ezsignfoldersignerassociation_delete_object_v1_response(include_optional);

	cJSON* jsonezsignfoldersignerassociation_delete_object_v1_response_1 = ezsignfoldersignerassociation_delete_object_v1_response_convertToJSON(ezsignfoldersignerassociation_delete_object_v1_response_1);
	printf("ezsignfoldersignerassociation_delete_object_v1_response :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_delete_object_v1_response_1));
	ezsignfoldersignerassociation_delete_object_v1_response_t* ezsignfoldersignerassociation_delete_object_v1_response_2 = ezsignfoldersignerassociation_delete_object_v1_response_parseFromJSON(jsonezsignfoldersignerassociation_delete_object_v1_response_1);
	cJSON* jsonezsignfoldersignerassociation_delete_object_v1_response_2 = ezsignfoldersignerassociation_delete_object_v1_response_convertToJSON(ezsignfoldersignerassociation_delete_object_v1_response_2);
	printf("repeating ezsignfoldersignerassociation_delete_object_v1_response:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_delete_object_v1_response_2));
}

int main() {
  test_ezsignfoldersignerassociation_delete_object_v1_response(1);
  test_ezsignfoldersignerassociation_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_delete_object_v1_response_MAIN
#endif // ezsignfoldersignerassociation_delete_object_v1_response_TEST
