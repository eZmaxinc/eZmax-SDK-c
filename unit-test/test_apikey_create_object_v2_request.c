#ifndef apikey_create_object_v2_request_TEST
#define apikey_create_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_create_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_create_object_v2_request.h"
apikey_create_object_v2_request_t* instantiate_apikey_create_object_v2_request(int include_optional);



apikey_create_object_v2_request_t* instantiate_apikey_create_object_v2_request(int include_optional) {
  apikey_create_object_v2_request_t* apikey_create_object_v2_request = NULL;
  if (include_optional) {
    apikey_create_object_v2_request = apikey_create_object_v2_request_create(
      list_createList()
    );
  } else {
    apikey_create_object_v2_request = apikey_create_object_v2_request_create(
      list_createList()
    );
  }

  return apikey_create_object_v2_request;
}


#ifdef apikey_create_object_v2_request_MAIN

void test_apikey_create_object_v2_request(int include_optional) {
    apikey_create_object_v2_request_t* apikey_create_object_v2_request_1 = instantiate_apikey_create_object_v2_request(include_optional);

	cJSON* jsonapikey_create_object_v2_request_1 = apikey_create_object_v2_request_convertToJSON(apikey_create_object_v2_request_1);
	printf("apikey_create_object_v2_request :\n%s\n", cJSON_Print(jsonapikey_create_object_v2_request_1));
	apikey_create_object_v2_request_t* apikey_create_object_v2_request_2 = apikey_create_object_v2_request_parseFromJSON(jsonapikey_create_object_v2_request_1);
	cJSON* jsonapikey_create_object_v2_request_2 = apikey_create_object_v2_request_convertToJSON(apikey_create_object_v2_request_2);
	printf("repeating apikey_create_object_v2_request:\n%s\n", cJSON_Print(jsonapikey_create_object_v2_request_2));
}

int main() {
  test_apikey_create_object_v2_request(1);
  test_apikey_create_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_create_object_v2_request_MAIN
#endif // apikey_create_object_v2_request_TEST
