#ifndef modulegroup_get_all_v1_response_m_payload_TEST
#define modulegroup_get_all_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulegroup_get_all_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulegroup_get_all_v1_response_m_payload.h"
modulegroup_get_all_v1_response_m_payload_t* instantiate_modulegroup_get_all_v1_response_m_payload(int include_optional);



modulegroup_get_all_v1_response_m_payload_t* instantiate_modulegroup_get_all_v1_response_m_payload(int include_optional) {
  modulegroup_get_all_v1_response_m_payload_t* modulegroup_get_all_v1_response_m_payload = NULL;
  if (include_optional) {
    modulegroup_get_all_v1_response_m_payload = modulegroup_get_all_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    modulegroup_get_all_v1_response_m_payload = modulegroup_get_all_v1_response_m_payload_create(
      list_createList()
    );
  }

  return modulegroup_get_all_v1_response_m_payload;
}


#ifdef modulegroup_get_all_v1_response_m_payload_MAIN

void test_modulegroup_get_all_v1_response_m_payload(int include_optional) {
    modulegroup_get_all_v1_response_m_payload_t* modulegroup_get_all_v1_response_m_payload_1 = instantiate_modulegroup_get_all_v1_response_m_payload(include_optional);

	cJSON* jsonmodulegroup_get_all_v1_response_m_payload_1 = modulegroup_get_all_v1_response_m_payload_convertToJSON(modulegroup_get_all_v1_response_m_payload_1);
	printf("modulegroup_get_all_v1_response_m_payload :\n%s\n", cJSON_Print(jsonmodulegroup_get_all_v1_response_m_payload_1));
	modulegroup_get_all_v1_response_m_payload_t* modulegroup_get_all_v1_response_m_payload_2 = modulegroup_get_all_v1_response_m_payload_parseFromJSON(jsonmodulegroup_get_all_v1_response_m_payload_1);
	cJSON* jsonmodulegroup_get_all_v1_response_m_payload_2 = modulegroup_get_all_v1_response_m_payload_convertToJSON(modulegroup_get_all_v1_response_m_payload_2);
	printf("repeating modulegroup_get_all_v1_response_m_payload:\n%s\n", cJSON_Print(jsonmodulegroup_get_all_v1_response_m_payload_2));
}

int main() {
  test_modulegroup_get_all_v1_response_m_payload(1);
  test_modulegroup_get_all_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulegroup_get_all_v1_response_m_payload_MAIN
#endif // modulegroup_get_all_v1_response_m_payload_TEST
