#ifndef province_autocomplete_element_response_TEST
#define province_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define province_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/province_autocomplete_element_response.h"
province_autocomplete_element_response_t* instantiate_province_autocomplete_element_response(int include_optional);



province_autocomplete_element_response_t* instantiate_province_autocomplete_element_response(int include_optional) {
  province_autocomplete_element_response_t* province_autocomplete_element_response = NULL;
  if (include_optional) {
    province_autocomplete_element_response = province_autocomplete_element_response_create(
      11,
      1,
      "Quebec",
      "QC",
      true
    );
  } else {
    province_autocomplete_element_response = province_autocomplete_element_response_create(
      11,
      1,
      "Quebec",
      "QC",
      true
    );
  }

  return province_autocomplete_element_response;
}


#ifdef province_autocomplete_element_response_MAIN

void test_province_autocomplete_element_response(int include_optional) {
    province_autocomplete_element_response_t* province_autocomplete_element_response_1 = instantiate_province_autocomplete_element_response(include_optional);

	cJSON* jsonprovince_autocomplete_element_response_1 = province_autocomplete_element_response_convertToJSON(province_autocomplete_element_response_1);
	printf("province_autocomplete_element_response :\n%s\n", cJSON_Print(jsonprovince_autocomplete_element_response_1));
	province_autocomplete_element_response_t* province_autocomplete_element_response_2 = province_autocomplete_element_response_parseFromJSON(jsonprovince_autocomplete_element_response_1);
	cJSON* jsonprovince_autocomplete_element_response_2 = province_autocomplete_element_response_convertToJSON(province_autocomplete_element_response_2);
	printf("repeating province_autocomplete_element_response:\n%s\n", cJSON_Print(jsonprovince_autocomplete_element_response_2));
}

int main() {
  test_province_autocomplete_element_response(1);
  test_province_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // province_autocomplete_element_response_MAIN
#endif // province_autocomplete_element_response_TEST
