#ifndef ezsigndocument_extract_text_v1_request_TEST
#define ezsigndocument_extract_text_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_extract_text_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_extract_text_v1_request.h"
ezsigndocument_extract_text_v1_request_t* instantiate_ezsigndocument_extract_text_v1_request(int include_optional);



ezsigndocument_extract_text_v1_request_t* instantiate_ezsigndocument_extract_text_v1_request(int include_optional) {
  ezsigndocument_extract_text_v1_request_t* ezsigndocument_extract_text_v1_request = NULL;
  if (include_optional) {
    ezsigndocument_extract_text_v1_request = ezsigndocument_extract_text_v1_request_create(
      1,
      ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_"Region",
      1,
      1,
      1,
      1
    );
  } else {
    ezsigndocument_extract_text_v1_request = ezsigndocument_extract_text_v1_request_create(
      1,
      ezmax_api_definition__full_ezsigndocument_extract_text_v1_request_ESECTION_"Region",
      1,
      1,
      1,
      1
    );
  }

  return ezsigndocument_extract_text_v1_request;
}


#ifdef ezsigndocument_extract_text_v1_request_MAIN

void test_ezsigndocument_extract_text_v1_request(int include_optional) {
    ezsigndocument_extract_text_v1_request_t* ezsigndocument_extract_text_v1_request_1 = instantiate_ezsigndocument_extract_text_v1_request(include_optional);

	cJSON* jsonezsigndocument_extract_text_v1_request_1 = ezsigndocument_extract_text_v1_request_convertToJSON(ezsigndocument_extract_text_v1_request_1);
	printf("ezsigndocument_extract_text_v1_request :\n%s\n", cJSON_Print(jsonezsigndocument_extract_text_v1_request_1));
	ezsigndocument_extract_text_v1_request_t* ezsigndocument_extract_text_v1_request_2 = ezsigndocument_extract_text_v1_request_parseFromJSON(jsonezsigndocument_extract_text_v1_request_1);
	cJSON* jsonezsigndocument_extract_text_v1_request_2 = ezsigndocument_extract_text_v1_request_convertToJSON(ezsigndocument_extract_text_v1_request_2);
	printf("repeating ezsigndocument_extract_text_v1_request:\n%s\n", cJSON_Print(jsonezsigndocument_extract_text_v1_request_2));
}

int main() {
  test_ezsigndocument_extract_text_v1_request(1);
  test_ezsigndocument_extract_text_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_extract_text_v1_request_MAIN
#endif // ezsigndocument_extract_text_v1_request_TEST
