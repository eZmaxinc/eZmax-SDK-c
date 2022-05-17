#ifndef apikey_request_compound_TEST
#define apikey_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_request_compound.h"
apikey_request_compound_t* instantiate_apikey_request_compound(int include_optional);

#include "test_multilingual_apikey_description.c"


apikey_request_compound_t* instantiate_apikey_request_compound(int include_optional) {
  apikey_request_compound_t* apikey_request_compound = NULL;
  if (include_optional) {
    apikey_request_compound = apikey_request_compound_create(
      99,
      70,
       // false, not to have infinite recursion
      instantiate_multilingual_apikey_description(0)
    );
  } else {
    apikey_request_compound = apikey_request_compound_create(
      99,
      70,
      NULL
    );
  }

  return apikey_request_compound;
}


#ifdef apikey_request_compound_MAIN

void test_apikey_request_compound(int include_optional) {
    apikey_request_compound_t* apikey_request_compound_1 = instantiate_apikey_request_compound(include_optional);

	cJSON* jsonapikey_request_compound_1 = apikey_request_compound_convertToJSON(apikey_request_compound_1);
	printf("apikey_request_compound :\n%s\n", cJSON_Print(jsonapikey_request_compound_1));
	apikey_request_compound_t* apikey_request_compound_2 = apikey_request_compound_parseFromJSON(jsonapikey_request_compound_1);
	cJSON* jsonapikey_request_compound_2 = apikey_request_compound_convertToJSON(apikey_request_compound_2);
	printf("repeating apikey_request_compound:\n%s\n", cJSON_Print(jsonapikey_request_compound_2));
}

int main() {
  test_apikey_request_compound(1);
  test_apikey_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_request_compound_MAIN
#endif // apikey_request_compound_TEST
