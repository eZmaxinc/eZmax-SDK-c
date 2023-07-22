#ifndef ezsigndocument_decline_to_sign_v1_request_TEST
#define ezsigndocument_decline_to_sign_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_decline_to_sign_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_decline_to_sign_v1_request.h"
ezsigndocument_decline_to_sign_v1_request_t* instantiate_ezsigndocument_decline_to_sign_v1_request(int include_optional);



ezsigndocument_decline_to_sign_v1_request_t* instantiate_ezsigndocument_decline_to_sign_v1_request(int include_optional) {
  ezsigndocument_decline_to_sign_v1_request_t* ezsigndocument_decline_to_sign_v1_request = NULL;
  if (include_optional) {
    ezsigndocument_decline_to_sign_v1_request = ezsigndocument_decline_to_sign_v1_request_create(
      "Wrong document"
    );
  } else {
    ezsigndocument_decline_to_sign_v1_request = ezsigndocument_decline_to_sign_v1_request_create(
      "Wrong document"
    );
  }

  return ezsigndocument_decline_to_sign_v1_request;
}


#ifdef ezsigndocument_decline_to_sign_v1_request_MAIN

void test_ezsigndocument_decline_to_sign_v1_request(int include_optional) {
    ezsigndocument_decline_to_sign_v1_request_t* ezsigndocument_decline_to_sign_v1_request_1 = instantiate_ezsigndocument_decline_to_sign_v1_request(include_optional);

	cJSON* jsonezsigndocument_decline_to_sign_v1_request_1 = ezsigndocument_decline_to_sign_v1_request_convertToJSON(ezsigndocument_decline_to_sign_v1_request_1);
	printf("ezsigndocument_decline_to_sign_v1_request :\n%s\n", cJSON_Print(jsonezsigndocument_decline_to_sign_v1_request_1));
	ezsigndocument_decline_to_sign_v1_request_t* ezsigndocument_decline_to_sign_v1_request_2 = ezsigndocument_decline_to_sign_v1_request_parseFromJSON(jsonezsigndocument_decline_to_sign_v1_request_1);
	cJSON* jsonezsigndocument_decline_to_sign_v1_request_2 = ezsigndocument_decline_to_sign_v1_request_convertToJSON(ezsigndocument_decline_to_sign_v1_request_2);
	printf("repeating ezsigndocument_decline_to_sign_v1_request:\n%s\n", cJSON_Print(jsonezsigndocument_decline_to_sign_v1_request_2));
}

int main() {
  test_ezsigndocument_decline_to_sign_v1_request(1);
  test_ezsigndocument_decline_to_sign_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_decline_to_sign_v1_request_MAIN
#endif // ezsigndocument_decline_to_sign_v1_request_TEST
