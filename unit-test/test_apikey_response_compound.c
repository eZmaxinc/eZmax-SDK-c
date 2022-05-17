#ifndef apikey_response_compound_TEST
#define apikey_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_response_compound.h"
apikey_response_compound_t* instantiate_apikey_response_compound(int include_optional);

#include "test_multilingual_apikey_description.c"
#include "test_common_audit.c"


apikey_response_compound_t* instantiate_apikey_response_compound(int include_optional) {
  apikey_response_compound_t* apikey_response_compound = NULL;
  if (include_optional) {
    apikey_response_compound = apikey_response_compound_create(
       // false, not to have infinite recursion
      instantiate_multilingual_apikey_description(0),
      "0",
      99,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    apikey_response_compound = apikey_response_compound_create(
      NULL,
      "0",
      99,
      NULL
    );
  }

  return apikey_response_compound;
}


#ifdef apikey_response_compound_MAIN

void test_apikey_response_compound(int include_optional) {
    apikey_response_compound_t* apikey_response_compound_1 = instantiate_apikey_response_compound(include_optional);

	cJSON* jsonapikey_response_compound_1 = apikey_response_compound_convertToJSON(apikey_response_compound_1);
	printf("apikey_response_compound :\n%s\n", cJSON_Print(jsonapikey_response_compound_1));
	apikey_response_compound_t* apikey_response_compound_2 = apikey_response_compound_parseFromJSON(jsonapikey_response_compound_1);
	cJSON* jsonapikey_response_compound_2 = apikey_response_compound_convertToJSON(apikey_response_compound_2);
	printf("repeating apikey_response_compound:\n%s\n", cJSON_Print(jsonapikey_response_compound_2));
}

int main() {
  test_apikey_response_compound(1);
  test_apikey_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_response_compound_MAIN
#endif // apikey_response_compound_TEST
