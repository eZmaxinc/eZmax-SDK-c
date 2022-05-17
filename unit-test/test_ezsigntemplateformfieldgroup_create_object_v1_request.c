#ifndef ezsigntemplateformfieldgroup_create_object_v1_request_TEST
#define ezsigntemplateformfieldgroup_create_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateformfieldgroup_create_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateformfieldgroup_create_object_v1_request.h"
ezsigntemplateformfieldgroup_create_object_v1_request_t* instantiate_ezsigntemplateformfieldgroup_create_object_v1_request(int include_optional);



ezsigntemplateformfieldgroup_create_object_v1_request_t* instantiate_ezsigntemplateformfieldgroup_create_object_v1_request(int include_optional) {
  ezsigntemplateformfieldgroup_create_object_v1_request_t* ezsigntemplateformfieldgroup_create_object_v1_request = NULL;
  if (include_optional) {
    ezsigntemplateformfieldgroup_create_object_v1_request = ezsigntemplateformfieldgroup_create_object_v1_request_create(
      list_createList()
    );
  } else {
    ezsigntemplateformfieldgroup_create_object_v1_request = ezsigntemplateformfieldgroup_create_object_v1_request_create(
      list_createList()
    );
  }

  return ezsigntemplateformfieldgroup_create_object_v1_request;
}


#ifdef ezsigntemplateformfieldgroup_create_object_v1_request_MAIN

void test_ezsigntemplateformfieldgroup_create_object_v1_request(int include_optional) {
    ezsigntemplateformfieldgroup_create_object_v1_request_t* ezsigntemplateformfieldgroup_create_object_v1_request_1 = instantiate_ezsigntemplateformfieldgroup_create_object_v1_request(include_optional);

	cJSON* jsonezsigntemplateformfieldgroup_create_object_v1_request_1 = ezsigntemplateformfieldgroup_create_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_request_1);
	printf("ezsigntemplateformfieldgroup_create_object_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_create_object_v1_request_1));
	ezsigntemplateformfieldgroup_create_object_v1_request_t* ezsigntemplateformfieldgroup_create_object_v1_request_2 = ezsigntemplateformfieldgroup_create_object_v1_request_parseFromJSON(jsonezsigntemplateformfieldgroup_create_object_v1_request_1);
	cJSON* jsonezsigntemplateformfieldgroup_create_object_v1_request_2 = ezsigntemplateformfieldgroup_create_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_request_2);
	printf("repeating ezsigntemplateformfieldgroup_create_object_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplateformfieldgroup_create_object_v1_request_2));
}

int main() {
  test_ezsigntemplateformfieldgroup_create_object_v1_request(1);
  test_ezsigntemplateformfieldgroup_create_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateformfieldgroup_create_object_v1_request_MAIN
#endif // ezsigntemplateformfieldgroup_create_object_v1_request_TEST
