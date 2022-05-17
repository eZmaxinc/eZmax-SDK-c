#ifndef ezsigntemplatepackage_edit_object_v1_request_TEST
#define ezsigntemplatepackage_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_edit_object_v1_request.h"
ezsigntemplatepackage_edit_object_v1_request_t* instantiate_ezsigntemplatepackage_edit_object_v1_request(int include_optional);

#include "test_ezsigntemplatepackage_request_compound.c"


ezsigntemplatepackage_edit_object_v1_request_t* instantiate_ezsigntemplatepackage_edit_object_v1_request(int include_optional) {
  ezsigntemplatepackage_edit_object_v1_request_t* ezsigntemplatepackage_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatepackage_edit_object_v1_request = ezsigntemplatepackage_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatepackage_request_compound(0)
    );
  } else {
    ezsigntemplatepackage_edit_object_v1_request = ezsigntemplatepackage_edit_object_v1_request_create(
      NULL
    );
  }

  return ezsigntemplatepackage_edit_object_v1_request;
}


#ifdef ezsigntemplatepackage_edit_object_v1_request_MAIN

void test_ezsigntemplatepackage_edit_object_v1_request(int include_optional) {
    ezsigntemplatepackage_edit_object_v1_request_t* ezsigntemplatepackage_edit_object_v1_request_1 = instantiate_ezsigntemplatepackage_edit_object_v1_request(include_optional);

	cJSON* jsonezsigntemplatepackage_edit_object_v1_request_1 = ezsigntemplatepackage_edit_object_v1_request_convertToJSON(ezsigntemplatepackage_edit_object_v1_request_1);
	printf("ezsigntemplatepackage_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_edit_object_v1_request_1));
	ezsigntemplatepackage_edit_object_v1_request_t* ezsigntemplatepackage_edit_object_v1_request_2 = ezsigntemplatepackage_edit_object_v1_request_parseFromJSON(jsonezsigntemplatepackage_edit_object_v1_request_1);
	cJSON* jsonezsigntemplatepackage_edit_object_v1_request_2 = ezsigntemplatepackage_edit_object_v1_request_convertToJSON(ezsigntemplatepackage_edit_object_v1_request_2);
	printf("repeating ezsigntemplatepackage_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_edit_object_v1_request_2));
}

int main() {
  test_ezsigntemplatepackage_edit_object_v1_request(1);
  test_ezsigntemplatepackage_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_edit_object_v1_request_MAIN
#endif // ezsigntemplatepackage_edit_object_v1_request_TEST
