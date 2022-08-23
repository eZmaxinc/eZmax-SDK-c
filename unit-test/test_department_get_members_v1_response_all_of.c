#ifndef department_get_members_v1_response_all_of_TEST
#define department_get_members_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define department_get_members_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/department_get_members_v1_response_all_of.h"
department_get_members_v1_response_all_of_t* instantiate_department_get_members_v1_response_all_of(int include_optional);

#include "test_department_get_members_v1_response_m_payload.c"


department_get_members_v1_response_all_of_t* instantiate_department_get_members_v1_response_all_of(int include_optional) {
  department_get_members_v1_response_all_of_t* department_get_members_v1_response_all_of = NULL;
  if (include_optional) {
    department_get_members_v1_response_all_of = department_get_members_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_department_get_members_v1_response_m_payload(0)
    );
  } else {
    department_get_members_v1_response_all_of = department_get_members_v1_response_all_of_create(
      NULL
    );
  }

  return department_get_members_v1_response_all_of;
}


#ifdef department_get_members_v1_response_all_of_MAIN

void test_department_get_members_v1_response_all_of(int include_optional) {
    department_get_members_v1_response_all_of_t* department_get_members_v1_response_all_of_1 = instantiate_department_get_members_v1_response_all_of(include_optional);

	cJSON* jsondepartment_get_members_v1_response_all_of_1 = department_get_members_v1_response_all_of_convertToJSON(department_get_members_v1_response_all_of_1);
	printf("department_get_members_v1_response_all_of :\n%s\n", cJSON_Print(jsondepartment_get_members_v1_response_all_of_1));
	department_get_members_v1_response_all_of_t* department_get_members_v1_response_all_of_2 = department_get_members_v1_response_all_of_parseFromJSON(jsondepartment_get_members_v1_response_all_of_1);
	cJSON* jsondepartment_get_members_v1_response_all_of_2 = department_get_members_v1_response_all_of_convertToJSON(department_get_members_v1_response_all_of_2);
	printf("repeating department_get_members_v1_response_all_of:\n%s\n", cJSON_Print(jsondepartment_get_members_v1_response_all_of_2));
}

int main() {
  test_department_get_members_v1_response_all_of(1);
  test_department_get_members_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // department_get_members_v1_response_all_of_MAIN
#endif // department_get_members_v1_response_all_of_TEST
