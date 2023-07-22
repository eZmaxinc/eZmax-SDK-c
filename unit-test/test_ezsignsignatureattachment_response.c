#ifndef ezsignsignatureattachment_response_TEST
#define ezsignsignatureattachment_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignatureattachment_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignatureattachment_response.h"
ezsignsignatureattachment_response_t* instantiate_ezsignsignatureattachment_response(int include_optional);



ezsignsignatureattachment_response_t* instantiate_ezsignsignatureattachment_response(int include_optional) {
  ezsignsignatureattachment_response_t* ezsignsignatureattachment_response = NULL;
  if (include_optional) {
    ezsignsignatureattachment_response = ezsignsignatureattachment_response_create(
      177,
      49,
      "098f6bcd4621d373cade4e832627b4f6",
      "document.pdf",
      "http://www.example.com/document.pdf"
    );
  } else {
    ezsignsignatureattachment_response = ezsignsignatureattachment_response_create(
      177,
      49,
      "098f6bcd4621d373cade4e832627b4f6",
      "document.pdf",
      "http://www.example.com/document.pdf"
    );
  }

  return ezsignsignatureattachment_response;
}


#ifdef ezsignsignatureattachment_response_MAIN

void test_ezsignsignatureattachment_response(int include_optional) {
    ezsignsignatureattachment_response_t* ezsignsignatureattachment_response_1 = instantiate_ezsignsignatureattachment_response(include_optional);

	cJSON* jsonezsignsignatureattachment_response_1 = ezsignsignatureattachment_response_convertToJSON(ezsignsignatureattachment_response_1);
	printf("ezsignsignatureattachment_response :\n%s\n", cJSON_Print(jsonezsignsignatureattachment_response_1));
	ezsignsignatureattachment_response_t* ezsignsignatureattachment_response_2 = ezsignsignatureattachment_response_parseFromJSON(jsonezsignsignatureattachment_response_1);
	cJSON* jsonezsignsignatureattachment_response_2 = ezsignsignatureattachment_response_convertToJSON(ezsignsignatureattachment_response_2);
	printf("repeating ezsignsignatureattachment_response:\n%s\n", cJSON_Print(jsonezsignsignatureattachment_response_2));
}

int main() {
  test_ezsignsignatureattachment_response(1);
  test_ezsignsignatureattachment_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignatureattachment_response_MAIN
#endif // ezsignsignatureattachment_response_TEST
