#ifndef department_get_members_v1_response_m_payload_TEST
#define department_get_members_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define department_get_members_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/department_get_members_v1_response_m_payload.h"
department_get_members_v1_response_m_payload_t* instantiate_department_get_members_v1_response_m_payload(int include_optional);



department_get_members_v1_response_m_payload_t* instantiate_department_get_members_v1_response_m_payload(int include_optional) {
  department_get_members_v1_response_m_payload_t* department_get_members_v1_response_m_payload = NULL;
  if (include_optional) {
    department_get_members_v1_response_m_payload = department_get_members_v1_response_m_payload_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    department_get_members_v1_response_m_payload = department_get_members_v1_response_m_payload_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return department_get_members_v1_response_m_payload;
}


#ifdef department_get_members_v1_response_m_payload_MAIN

void test_department_get_members_v1_response_m_payload(int include_optional) {
    department_get_members_v1_response_m_payload_t* department_get_members_v1_response_m_payload_1 = instantiate_department_get_members_v1_response_m_payload(include_optional);

	cJSON* jsondepartment_get_members_v1_response_m_payload_1 = department_get_members_v1_response_m_payload_convertToJSON(department_get_members_v1_response_m_payload_1);
	printf("department_get_members_v1_response_m_payload :\n%s\n", cJSON_Print(jsondepartment_get_members_v1_response_m_payload_1));
	department_get_members_v1_response_m_payload_t* department_get_members_v1_response_m_payload_2 = department_get_members_v1_response_m_payload_parseFromJSON(jsondepartment_get_members_v1_response_m_payload_1);
	cJSON* jsondepartment_get_members_v1_response_m_payload_2 = department_get_members_v1_response_m_payload_convertToJSON(department_get_members_v1_response_m_payload_2);
	printf("repeating department_get_members_v1_response_m_payload:\n%s\n", cJSON_Print(jsondepartment_get_members_v1_response_m_payload_2));
}

int main() {
  test_department_get_members_v1_response_m_payload(1);
  test_department_get_members_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // department_get_members_v1_response_m_payload_MAIN
#endif // department_get_members_v1_response_m_payload_TEST
