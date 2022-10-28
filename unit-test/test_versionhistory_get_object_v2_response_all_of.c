#ifndef versionhistory_get_object_v2_response_all_of_TEST
#define versionhistory_get_object_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define versionhistory_get_object_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/versionhistory_get_object_v2_response_all_of.h"
versionhistory_get_object_v2_response_all_of_t* instantiate_versionhistory_get_object_v2_response_all_of(int include_optional);

#include "test_versionhistory_get_object_v2_response_m_payload.c"


versionhistory_get_object_v2_response_all_of_t* instantiate_versionhistory_get_object_v2_response_all_of(int include_optional) {
  versionhistory_get_object_v2_response_all_of_t* versionhistory_get_object_v2_response_all_of = NULL;
  if (include_optional) {
    versionhistory_get_object_v2_response_all_of = versionhistory_get_object_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_versionhistory_get_object_v2_response_m_payload(0)
    );
  } else {
    versionhistory_get_object_v2_response_all_of = versionhistory_get_object_v2_response_all_of_create(
      NULL
    );
  }

  return versionhistory_get_object_v2_response_all_of;
}


#ifdef versionhistory_get_object_v2_response_all_of_MAIN

void test_versionhistory_get_object_v2_response_all_of(int include_optional) {
    versionhistory_get_object_v2_response_all_of_t* versionhistory_get_object_v2_response_all_of_1 = instantiate_versionhistory_get_object_v2_response_all_of(include_optional);

	cJSON* jsonversionhistory_get_object_v2_response_all_of_1 = versionhistory_get_object_v2_response_all_of_convertToJSON(versionhistory_get_object_v2_response_all_of_1);
	printf("versionhistory_get_object_v2_response_all_of :\n%s\n", cJSON_Print(jsonversionhistory_get_object_v2_response_all_of_1));
	versionhistory_get_object_v2_response_all_of_t* versionhistory_get_object_v2_response_all_of_2 = versionhistory_get_object_v2_response_all_of_parseFromJSON(jsonversionhistory_get_object_v2_response_all_of_1);
	cJSON* jsonversionhistory_get_object_v2_response_all_of_2 = versionhistory_get_object_v2_response_all_of_convertToJSON(versionhistory_get_object_v2_response_all_of_2);
	printf("repeating versionhistory_get_object_v2_response_all_of:\n%s\n", cJSON_Print(jsonversionhistory_get_object_v2_response_all_of_2));
}

int main() {
  test_versionhistory_get_object_v2_response_all_of(1);
  test_versionhistory_get_object_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // versionhistory_get_object_v2_response_all_of_MAIN
#endif // versionhistory_get_object_v2_response_all_of_TEST
