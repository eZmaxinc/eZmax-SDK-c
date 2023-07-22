#ifndef apikey_request_TEST
#define apikey_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_request.h"
apikey_request_t* instantiate_apikey_request(int include_optional);

#include "test_multilingual_apikey_description.c"


apikey_request_t* instantiate_apikey_request(int include_optional) {
  apikey_request_t* apikey_request = NULL;
  if (include_optional) {
    apikey_request = apikey_request_create(
      99,
      70,
       // false, not to have infinite recursion
      instantiate_multilingual_apikey_description(0),
      true
    );
  } else {
    apikey_request = apikey_request_create(
      99,
      70,
      NULL,
      true
    );
  }

  return apikey_request;
}


#ifdef apikey_request_MAIN

void test_apikey_request(int include_optional) {
    apikey_request_t* apikey_request_1 = instantiate_apikey_request(include_optional);

	cJSON* jsonapikey_request_1 = apikey_request_convertToJSON(apikey_request_1);
	printf("apikey_request :\n%s\n", cJSON_Print(jsonapikey_request_1));
	apikey_request_t* apikey_request_2 = apikey_request_parseFromJSON(jsonapikey_request_1);
	cJSON* jsonapikey_request_2 = apikey_request_convertToJSON(apikey_request_2);
	printf("repeating apikey_request:\n%s\n", cJSON_Print(jsonapikey_request_2));
}

int main() {
  test_apikey_request(1);
  test_apikey_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_request_MAIN
#endif // apikey_request_TEST
