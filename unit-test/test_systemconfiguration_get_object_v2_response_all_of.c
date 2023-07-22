#ifndef systemconfiguration_get_object_v2_response_all_of_TEST
#define systemconfiguration_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define systemconfiguration_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/systemconfiguration_get_object_v2_response_all_of.h"
systemconfiguration_get_object_v2_response_all_of_t* instantiate_systemconfiguration_get_object_v2_response_all_of(int include_optional);

#include "test_systemconfiguration_get_object_v2_response_m_payload.c"


systemconfiguration_get_object_v2_response_all_of_t* instantiate_systemconfiguration_get_object_v2_response_all_of(int include_optional) {
  systemconfiguration_get_object_v2_response_all_of_t* systemconfiguration_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    systemconfiguration_get_object_v2_response_all_of = systemconfiguration_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_systemconfiguration_get_object_v2_response_m_payload(0)
    );
  } else {
    systemconfiguration_get_object_v2_response_all_of = systemconfiguration_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return systemconfiguration_get_object_v2_response_all_of;
}


#ifdef systemconfiguration_get_object_v2_response_all_of_MAIN

void test_systemconfiguration_get_object_v2_response_all_of(int include_optional) {
    systemconfiguration_get_object_v2_response_all_of_t* systemconfiguration_get_object_v2_response_all_of_1 = instantiate_systemconfiguration_get_object_v2_response_all_of(include_optional);

	cJSON* jsonsystemconfiguration_get_object_v2_response_all_of_1 = systemconfiguration_get_object_v2_response_all_of_convertToJSON(systemconfiguration_get_object_v2_response_all_of_1);
	printf("systemconfiguration_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonsystemconfiguration_get_object_v2_response_all_of_1));
	systemconfiguration_get_object_v2_response_all_of_t* systemconfiguration_get_object_v2_response_all_of_2 = systemconfiguration_get_object_v2_response_all_of_parseFromJSON(jsonsystemconfiguration_get_object_v2_response_all_of_1);
	cJSON* jsonsystemconfiguration_get_object_v2_response_all_of_2 = systemconfiguration_get_object_v2_response_all_of_convertToJSON(systemconfiguration_get_object_v2_response_all_of_2);
	printf("repeating systemconfiguration_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonsystemconfiguration_get_object_v2_response_all_of_2));
}

int main() {
  test_systemconfiguration_get_object_v2_response_all_of(1);
  test_systemconfiguration_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // systemconfiguration_get_object_v2_response_all_of_MAIN
#endif // systemconfiguration_get_object_v2_response_all_of_TEST
