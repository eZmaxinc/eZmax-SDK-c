#ifndef ezsignfoldersignerassociation_get_object_v2_response_TEST
#define ezsignfoldersignerassociation_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_get_object_v2_response.h"
ezsignfoldersignerassociation_get_object_v2_response_t* instantiate_ezsignfoldersignerassociation_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignfoldersignerassociation_get_object_v2_response_m_payload.c"


ezsignfoldersignerassociation_get_object_v2_response_t* instantiate_ezsignfoldersignerassociation_get_object_v2_response(int include_optional) {
  ezsignfoldersignerassociation_get_object_v2_response_t* ezsignfoldersignerassociation_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_get_object_v2_response = ezsignfoldersignerassociation_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignfoldersignerassociation_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignfoldersignerassociation_get_object_v2_response = ezsignfoldersignerassociation_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignfoldersignerassociation_get_object_v2_response;
}


#ifdef ezsignfoldersignerassociation_get_object_v2_response_MAIN

void test_ezsignfoldersignerassociation_get_object_v2_response(int include_optional) {
    ezsignfoldersignerassociation_get_object_v2_response_t* ezsignfoldersignerassociation_get_object_v2_response_1 = instantiate_ezsignfoldersignerassociation_get_object_v2_response(include_optional);

	cJSON* jsonezsignfoldersignerassociation_get_object_v2_response_1 = ezsignfoldersignerassociation_get_object_v2_response_convertToJSON(ezsignfoldersignerassociation_get_object_v2_response_1);
	printf("ezsignfoldersignerassociation_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_get_object_v2_response_1));
	ezsignfoldersignerassociation_get_object_v2_response_t* ezsignfoldersignerassociation_get_object_v2_response_2 = ezsignfoldersignerassociation_get_object_v2_response_parseFromJSON(jsonezsignfoldersignerassociation_get_object_v2_response_1);
	cJSON* jsonezsignfoldersignerassociation_get_object_v2_response_2 = ezsignfoldersignerassociation_get_object_v2_response_convertToJSON(ezsignfoldersignerassociation_get_object_v2_response_2);
	printf("repeating ezsignfoldersignerassociation_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_get_object_v2_response_2));
}

int main() {
  test_ezsignfoldersignerassociation_get_object_v2_response(1);
  test_ezsignfoldersignerassociation_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_get_object_v2_response_MAIN
#endif // ezsignfoldersignerassociation_get_object_v2_response_TEST
