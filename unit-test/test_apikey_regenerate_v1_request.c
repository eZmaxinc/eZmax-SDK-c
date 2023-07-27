#ifndef apikey_regenerate_v1_request_TEST
#define apikey_regenerate_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_regenerate_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_regenerate_v1_request.h"
apikey_regenerate_v1_request_t* instantiate_apikey_regenerate_v1_request(int include_optional);



apikey_regenerate_v1_request_t* instantiate_apikey_regenerate_v1_request(int include_optional) {
  apikey_regenerate_v1_request_t* apikey_regenerate_v1_request = NULL;
  if (include_optional) {
    apikey_regenerate_v1_request = apikey_regenerate_v1_request_create(
      true
    );
  } else {
    apikey_regenerate_v1_request = apikey_regenerate_v1_request_create(
      true
    );
  }

  return apikey_regenerate_v1_request;
}


#ifdef apikey_regenerate_v1_request_MAIN

void test_apikey_regenerate_v1_request(int include_optional) {
    apikey_regenerate_v1_request_t* apikey_regenerate_v1_request_1 = instantiate_apikey_regenerate_v1_request(include_optional);

	cJSON* jsonapikey_regenerate_v1_request_1 = apikey_regenerate_v1_request_convertToJSON(apikey_regenerate_v1_request_1);
	printf("apikey_regenerate_v1_request :\n%s\n", cJSON_Print(jsonapikey_regenerate_v1_request_1));
	apikey_regenerate_v1_request_t* apikey_regenerate_v1_request_2 = apikey_regenerate_v1_request_parseFromJSON(jsonapikey_regenerate_v1_request_1);
	cJSON* jsonapikey_regenerate_v1_request_2 = apikey_regenerate_v1_request_convertToJSON(apikey_regenerate_v1_request_2);
	printf("repeating apikey_regenerate_v1_request:\n%s\n", cJSON_Print(jsonapikey_regenerate_v1_request_2));
}

int main() {
  test_apikey_regenerate_v1_request(1);
  test_apikey_regenerate_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_regenerate_v1_request_MAIN
#endif // apikey_regenerate_v1_request_TEST
