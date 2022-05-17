#ifndef custom_ezsignsignaturestatus_response_TEST
#define custom_ezsignsignaturestatus_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignsignaturestatus_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignsignaturestatus_response.h"
custom_ezsignsignaturestatus_response_t* instantiate_custom_ezsignsignaturestatus_response(int include_optional);



custom_ezsignsignaturestatus_response_t* instantiate_custom_ezsignsignaturestatus_response(int include_optional) {
  custom_ezsignsignaturestatus_response_t* custom_ezsignsignaturestatus_response = NULL;
  if (include_optional) {
    custom_ezsignsignaturestatus_response = custom_ezsignsignaturestatus_response_create(
      ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_Form,
      1,
      2,
      1
    );
  } else {
    custom_ezsignsignaturestatus_response = custom_ezsignsignaturestatus_response_create(
      ezmax_api_definition__full_custom_ezsignsignaturestatus_response_EEZSIGNSIGNATURESTATUSSTEPTYPE_Form,
      1,
      2,
      1
    );
  }

  return custom_ezsignsignaturestatus_response;
}


#ifdef custom_ezsignsignaturestatus_response_MAIN

void test_custom_ezsignsignaturestatus_response(int include_optional) {
    custom_ezsignsignaturestatus_response_t* custom_ezsignsignaturestatus_response_1 = instantiate_custom_ezsignsignaturestatus_response(include_optional);

	cJSON* jsoncustom_ezsignsignaturestatus_response_1 = custom_ezsignsignaturestatus_response_convertToJSON(custom_ezsignsignaturestatus_response_1);
	printf("custom_ezsignsignaturestatus_response :\n%s\n", cJSON_Print(jsoncustom_ezsignsignaturestatus_response_1));
	custom_ezsignsignaturestatus_response_t* custom_ezsignsignaturestatus_response_2 = custom_ezsignsignaturestatus_response_parseFromJSON(jsoncustom_ezsignsignaturestatus_response_1);
	cJSON* jsoncustom_ezsignsignaturestatus_response_2 = custom_ezsignsignaturestatus_response_convertToJSON(custom_ezsignsignaturestatus_response_2);
	printf("repeating custom_ezsignsignaturestatus_response:\n%s\n", cJSON_Print(jsoncustom_ezsignsignaturestatus_response_2));
}

int main() {
  test_custom_ezsignsignaturestatus_response(1);
  test_custom_ezsignsignaturestatus_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignsignaturestatus_response_MAIN
#endif // custom_ezsignsignaturestatus_response_TEST
