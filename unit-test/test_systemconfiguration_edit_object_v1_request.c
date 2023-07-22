#ifndef systemconfiguration_edit_object_v1_request_TEST
#define systemconfiguration_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_edit_object_v1_request.h"
systemconfiguration_edit_object_v1_request_t* instantiate_systemconfiguration_edit_object_v1_request(int include_optional);

#include "test_systemconfiguration_request_compound.c"


systemconfiguration_edit_object_v1_request_t* instantiate_systemconfiguration_edit_object_v1_request(int include_optional) {
  systemconfiguration_edit_object_v1_request_t* systemconfiguration_edit_object_v1_request = NULL;
  if (include_optional) {
    systemconfiguration_edit_object_v1_request = systemconfiguration_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_systemconfiguration_request_compound(0)
    );
  } else {
    systemconfiguration_edit_object_v1_request = systemconfiguration_edit_object_v1_request_create(
      NULL
    );
  }

  return systemconfiguration_edit_object_v1_request;
}


#ifdef systemconfiguration_edit_object_v1_request_MAIN

void test_systemconfiguration_edit_object_v1_request(int include_optional) {
    systemconfiguration_edit_object_v1_request_t* systemconfiguration_edit_object_v1_request_1 = instantiate_systemconfiguration_edit_object_v1_request(include_optional);

	cJSON* jsonsystemconfiguration_edit_object_v1_request_1 = systemconfiguration_edit_object_v1_request_convertToJSON(systemconfiguration_edit_object_v1_request_1);
	printf("systemconfiguration_edit_object_v1_request :\n%s\n", cJSON_Print(jsonsystemconfiguration_edit_object_v1_request_1));
	systemconfiguration_edit_object_v1_request_t* systemconfiguration_edit_object_v1_request_2 = systemconfiguration_edit_object_v1_request_parseFromJSON(jsonsystemconfiguration_edit_object_v1_request_1);
	cJSON* jsonsystemconfiguration_edit_object_v1_request_2 = systemconfiguration_edit_object_v1_request_convertToJSON(systemconfiguration_edit_object_v1_request_2);
	printf("repeating systemconfiguration_edit_object_v1_request:\n%s\n", cJSON_Print(jsonsystemconfiguration_edit_object_v1_request_2));
}

int main() {
  test_systemconfiguration_edit_object_v1_request(1);
  test_systemconfiguration_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_edit_object_v1_request_MAIN
#endif // systemconfiguration_edit_object_v1_request_TEST
