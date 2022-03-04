#ifndef ezsignsigner_request_TEST
#define ezsignsigner_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigner_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigner_request.h"
ezsignsigner_request_t* instantiate_ezsignsigner_request(int include_optional);



ezsignsigner_request_t* instantiate_ezsignsigner_request(int include_optional) {
  ezsignsigner_request_t* ezsignsigner_request = NULL;
  if (include_optional) {
    ezsignsigner_request = ezsignsigner_request_create(
      2,
      1,
      7,
      ezmax_api_definition_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_Password,
      "0"
    );
  } else {
    ezsignsigner_request = ezsignsigner_request_create(
      2,
      1,
      7,
      ezmax_api_definition_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_Password,
      "0"
    );
  }

  return ezsignsigner_request;
}


#ifdef ezsignsigner_request_MAIN

void test_ezsignsigner_request(int include_optional) {
    ezsignsigner_request_t* ezsignsigner_request_1 = instantiate_ezsignsigner_request(include_optional);

	cJSON* jsonezsignsigner_request_1 = ezsignsigner_request_convertToJSON(ezsignsigner_request_1);
	printf("ezsignsigner_request :\n%s\n", cJSON_Print(jsonezsignsigner_request_1));
	ezsignsigner_request_t* ezsignsigner_request_2 = ezsignsigner_request_parseFromJSON(jsonezsignsigner_request_1);
	cJSON* jsonezsignsigner_request_2 = ezsignsigner_request_convertToJSON(ezsignsigner_request_2);
	printf("repeating ezsignsigner_request:\n%s\n", cJSON_Print(jsonezsignsigner_request_2));
}

int main() {
  test_ezsignsigner_request(1);
  test_ezsignsigner_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigner_request_MAIN
#endif // ezsignsigner_request_TEST
