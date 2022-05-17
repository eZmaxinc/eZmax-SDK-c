#ifndef ezsigntemplateformfieldgroup_edit_object_v1_request_TEST
#define ezsigntemplateformfieldgroup_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_edit_object_v1_request.h"
ezsigntemplateformfieldgroup_edit_object_v1_request_t* instantiate_ezsigntemplateformfieldgroup_edit_object_v1_request(int include_optional);

#include "test_ezsigntemplateformfieldgroup_request_compound.c"


ezsigntemplateformfieldgroup_edit_object_v1_request_t* instantiate_ezsigntemplateformfieldgroup_edit_object_v1_request(int include_optional) {
  ezsigntemplateformfieldgroup_edit_object_v1_request_t* ezsigntemplateformfieldgroup_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_edit_object_v1_request = ezsigntemplateformfieldgroup_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplateformfieldgroup_request_compound(0)
    );
  } else {
    ezsigntemplateformfieldgroup_edit_object_v1_request = ezsigntemplateformfieldgroup_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsigntemplateformfieldgroup_edit_object_v1_request;
}


#ifdef ezsigntemplateformfieldgroup_edit_object_v1_request_MAIN

void test_ezsigntemplateformfieldgroup_edit_object_v1_request(int include_optional) {
    ezsigntemplateformfieldgroup_edit_object_v1_request_t* ezsigntemplateformfieldgroup_edit_object_v1_request_1 = instantiate_ezsigntemplateformfieldgroup_edit_object_v1_request(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_edit_object_v1_request_1 = ezsigntemplateformfieldgroup_edit_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_request_1);
	printf("ezsigntemplateformfieldgroup_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_edit_object_v1_request_1));
	ezsigntemplateformfieldgroup_edit_object_v1_request_t* ezsigntemplateformfieldgroup_edit_object_v1_request_2 = ezsigntemplateformfieldgroup_edit_object_v1_request_parseFromJSON(jsonezsigntemplateformfieldgroup_edit_object_v1_request_1);
	cJSON* jsonezsigntemplateformfieldgroup_edit_object_v1_request_2 = ezsigntemplateformfieldgroup_edit_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_request_2);
	printf("repeating ezsigntemplateformfieldgroup_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_edit_object_v1_request_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_edit_object_v1_request(1);
  test_ezsigntemplateformfieldgroup_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_edit_object_v1_request_MAIN
#endif // ezsigntemplateformfieldgroup_edit_object_v1_request_TEST
