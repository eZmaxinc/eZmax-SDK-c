#ifndef ezsignsigner_response_TEST
#define ezsignsigner_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_response.h"
ezsignsigner_response_t* instantiate_ezsignsigner_response(int include_optional);



ezsignsigner_response_t* instantiate_ezsignsigner_response(int include_optional) {
  ezsignsigner_response_t* ezsignsigner_response = NULL;
  if (include_optional) {
    ezsignsigner_response = ezsignsigner_response_create(
      1,
      7,
      ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_Password,
      "0"
    );
  } else {
    ezsignsigner_response = ezsignsigner_response_create(
      1,
      7,
      ezmax_api_definition_ezsignsigner_response_EEZSIGNSIGNERLOGINTYPE_Password,
      "0"
    );
  }

  return ezsignsigner_response;
}


#ifdef ezsignsigner_response_MAIN

void test_ezsignsigner_response(int include_optional) {
    ezsignsigner_response_t* ezsignsigner_response_1 = instantiate_ezsignsigner_response(include_optional);

	cJSON* jsonezsignsigner_response_1 = ezsignsigner_response_convertToJSON(ezsignsigner_response_1);
	printf("ezsignsigner_response :\n%s\n", cJSON_Print(jsonezsignsigner_response_1));
	ezsignsigner_response_t* ezsignsigner_response_2 = ezsignsigner_response_parseFromJSON(jsonezsignsigner_response_1);
	cJSON* jsonezsignsigner_response_2 = ezsignsigner_response_convertToJSON(ezsignsigner_response_2);
	printf("repeating ezsignsigner_response:\n%s\n", cJSON_Print(jsonezsignsigner_response_2));
}

int main() {
  test_ezsignsigner_response(1);
  test_ezsignsigner_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_response_MAIN
#endif // ezsignsigner_response_TEST
