#ifndef ezsigndocument_matchingtemplate_v3_response_TEST
#define ezsigndocument_matchingtemplate_v3_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_matchingtemplate_v3_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_matchingtemplate_v3_response.h"
ezsigndocument_matchingtemplate_v3_response_t* instantiate_ezsigndocument_matchingtemplate_v3_response(int include_optional);



ezsigndocument_matchingtemplate_v3_response_t* instantiate_ezsigndocument_matchingtemplate_v3_response(int include_optional) {
  ezsigndocument_matchingtemplate_v3_response_t* ezsigndocument_matchingtemplate_v3_response = NULL;
  if (include_optional) {
    ezsigndocument_matchingtemplate_v3_response = ezsigndocument_matchingtemplate_v3_response_create(
      36,
      36
    );
  } else {
    ezsigndocument_matchingtemplate_v3_response = ezsigndocument_matchingtemplate_v3_response_create(
      36,
      36
    );
  }

  return ezsigndocument_matchingtemplate_v3_response;
}


#ifdef ezsigndocument_matchingtemplate_v3_response_MAIN

void test_ezsigndocument_matchingtemplate_v3_response(int include_optional) {
    ezsigndocument_matchingtemplate_v3_response_t* ezsigndocument_matchingtemplate_v3_response_1 = instantiate_ezsigndocument_matchingtemplate_v3_response(include_optional);

	cJSON* jsonezsigndocument_matchingtemplate_v3_response_1 = ezsigndocument_matchingtemplate_v3_response_convertToJSON(ezsigndocument_matchingtemplate_v3_response_1);
	printf("ezsigndocument_matchingtemplate_v3_response :\n%s\n", cJSON_Print(jsonezsigndocument_matchingtemplate_v3_response_1));
	ezsigndocument_matchingtemplate_v3_response_t* ezsigndocument_matchingtemplate_v3_response_2 = ezsigndocument_matchingtemplate_v3_response_parseFromJSON(jsonezsigndocument_matchingtemplate_v3_response_1);
	cJSON* jsonezsigndocument_matchingtemplate_v3_response_2 = ezsigndocument_matchingtemplate_v3_response_convertToJSON(ezsigndocument_matchingtemplate_v3_response_2);
	printf("repeating ezsigndocument_matchingtemplate_v3_response:\n%s\n", cJSON_Print(jsonezsigndocument_matchingtemplate_v3_response_2));
}

int main() {
  test_ezsigndocument_matchingtemplate_v3_response(1);
  test_ezsigndocument_matchingtemplate_v3_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_matchingtemplate_v3_response_MAIN
#endif // ezsigndocument_matchingtemplate_v3_response_TEST
