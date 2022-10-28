#ifndef versionhistory_response_TEST
#define versionhistory_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define versionhistory_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/versionhistory_response.h"
versionhistory_response_t* instantiate_versionhistory_response(int include_optional);

#include "test_multilingual_versionhistory_detail.c"


versionhistory_response_t* instantiate_versionhistory_response(int include_optional) {
  versionhistory_response_t* versionhistory_response = NULL;
  if (include_optional) {
    versionhistory_response = versionhistory_response_create(
      42,
      40,
      53,
      "Purchase",
      "Access",
      ezmax_api_definition__full_versionhistory_response__"Normal",
       // false, not to have infinite recursion
      instantiate_multilingual_versionhistory_detail(0),
      "2020-12-31",
      "2020-12-31",
      ezmax_api_definition__full_versionhistory_response__"NewFeature",
      1
    );
  } else {
    versionhistory_response = versionhistory_response_create(
      42,
      40,
      53,
      "Purchase",
      "Access",
      ezmax_api_definition__full_versionhistory_response__"Normal",
      NULL,
      "2020-12-31",
      "2020-12-31",
      ezmax_api_definition__full_versionhistory_response__"NewFeature",
      1
    );
  }

  return versionhistory_response;
}


#ifdef versionhistory_response_MAIN

void test_versionhistory_response(int include_optional) {
    versionhistory_response_t* versionhistory_response_1 = instantiate_versionhistory_response(include_optional);

	cJSON* jsonversionhistory_response_1 = versionhistory_response_convertToJSON(versionhistory_response_1);
	printf("versionhistory_response :\n%s\n", cJSON_Print(jsonversionhistory_response_1));
	versionhistory_response_t* versionhistory_response_2 = versionhistory_response_parseFromJSON(jsonversionhistory_response_1);
	cJSON* jsonversionhistory_response_2 = versionhistory_response_convertToJSON(versionhistory_response_2);
	printf("repeating versionhistory_response:\n%s\n", cJSON_Print(jsonversionhistory_response_2));
}

int main() {
  test_versionhistory_response(1);
  test_versionhistory_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // versionhistory_response_MAIN
#endif // versionhistory_response_TEST
