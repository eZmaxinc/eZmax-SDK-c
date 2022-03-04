#ifndef custom_form_data_ezsignformfield_response_TEST
#define custom_form_data_ezsignformfield_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_form_data_ezsignformfield_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_form_data_ezsignformfield_response.h"
custom_form_data_ezsignformfield_response_t* instantiate_custom_form_data_ezsignformfield_response(int include_optional);



custom_form_data_ezsignformfield_response_t* instantiate_custom_form_data_ezsignformfield_response(int include_optional) {
  custom_form_data_ezsignformfield_response_t* custom_form_data_ezsignformfield_response = NULL;
  if (include_optional) {
    custom_form_data_ezsignformfield_response = custom_form_data_ezsignformfield_response_create(
      "Peanuts",
      "Yes"
    );
  } else {
    custom_form_data_ezsignformfield_response = custom_form_data_ezsignformfield_response_create(
      "Peanuts",
      "Yes"
    );
  }

  return custom_form_data_ezsignformfield_response;
}


#ifdef custom_form_data_ezsignformfield_response_MAIN

void test_custom_form_data_ezsignformfield_response(int include_optional) {
    custom_form_data_ezsignformfield_response_t* custom_form_data_ezsignformfield_response_1 = instantiate_custom_form_data_ezsignformfield_response(include_optional);

	cJSON* jsoncustom_form_data_ezsignformfield_response_1 = custom_form_data_ezsignformfield_response_convertToJSON(custom_form_data_ezsignformfield_response_1);
	printf("custom_form_data_ezsignformfield_response :\n%s\n", cJSON_Print(jsoncustom_form_data_ezsignformfield_response_1));
	custom_form_data_ezsignformfield_response_t* custom_form_data_ezsignformfield_response_2 = custom_form_data_ezsignformfield_response_parseFromJSON(jsoncustom_form_data_ezsignformfield_response_1);
	cJSON* jsoncustom_form_data_ezsignformfield_response_2 = custom_form_data_ezsignformfield_response_convertToJSON(custom_form_data_ezsignformfield_response_2);
	printf("repeating custom_form_data_ezsignformfield_response:\n%s\n", cJSON_Print(jsoncustom_form_data_ezsignformfield_response_2));
}

int main() {
  test_custom_form_data_ezsignformfield_response(1);
  test_custom_form_data_ezsignformfield_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_form_data_ezsignformfield_response_MAIN
#endif // custom_form_data_ezsignformfield_response_TEST
