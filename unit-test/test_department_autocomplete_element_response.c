#ifndef department_autocomplete_element_response_TEST
#define department_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define department_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/department_autocomplete_element_response.h"
department_autocomplete_element_response_t* instantiate_department_autocomplete_element_response(int include_optional);



department_autocomplete_element_response_t* instantiate_department_autocomplete_element_response(int include_optional) {
  department_autocomplete_element_response_t* department_autocomplete_element_response = NULL;
  if (include_optional) {
    department_autocomplete_element_response = department_autocomplete_element_response_create(
      "Acme inc.",
      "Head Office",
      21,
      true
    );
  } else {
    department_autocomplete_element_response = department_autocomplete_element_response_create(
      "Acme inc.",
      "Head Office",
      21,
      true
    );
  }

  return department_autocomplete_element_response;
}


#ifdef department_autocomplete_element_response_MAIN

void test_department_autocomplete_element_response(int include_optional) {
    department_autocomplete_element_response_t* department_autocomplete_element_response_1 = instantiate_department_autocomplete_element_response(include_optional);

	cJSON* jsondepartment_autocomplete_element_response_1 = department_autocomplete_element_response_convertToJSON(department_autocomplete_element_response_1);
	printf("department_autocomplete_element_response :\n%s\n", cJSON_Print(jsondepartment_autocomplete_element_response_1));
	department_autocomplete_element_response_t* department_autocomplete_element_response_2 = department_autocomplete_element_response_parseFromJSON(jsondepartment_autocomplete_element_response_1);
	cJSON* jsondepartment_autocomplete_element_response_2 = department_autocomplete_element_response_convertToJSON(department_autocomplete_element_response_2);
	printf("repeating department_autocomplete_element_response:\n%s\n", cJSON_Print(jsondepartment_autocomplete_element_response_2));
}

int main() {
  test_department_autocomplete_element_response(1);
  test_department_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // department_autocomplete_element_response_MAIN
#endif // department_autocomplete_element_response_TEST
