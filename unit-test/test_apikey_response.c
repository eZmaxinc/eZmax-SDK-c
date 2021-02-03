#ifndef apikey_response_TEST
#define apikey_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apikey_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apikey_response.h"
apikey_response_t* instantiate_apikey_response(int include_optional);

#include "test_multilingual_apikey_description.c"
#include "test_common_audit.c"


apikey_response_t* instantiate_apikey_response(int include_optional) {
  apikey_response_t* apikey_response = NULL;
  if (include_optional) {
    apikey_response = apikey_response_create(
      {"sApikeyDescription1":"Projet X","sApikeyDescription2":"Project X"},
      "0",
      99,
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  } else {
    apikey_response = apikey_response_create(
      {"sApikeyDescription1":"Projet X","sApikeyDescription2":"Project X"},
      "0",
      99,
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  }

  return apikey_response;
}


#ifdef apikey_response_MAIN

void test_apikey_response(int include_optional) {
    apikey_response_t* apikey_response_1 = instantiate_apikey_response(include_optional);

	cJSON* jsonapikey_response_1 = apikey_response_convertToJSON(apikey_response_1);
	printf("apikey_response :\n%s\n", cJSON_Print(jsonapikey_response_1));
	apikey_response_t* apikey_response_2 = apikey_response_parseFromJSON(jsonapikey_response_1);
	cJSON* jsonapikey_response_2 = apikey_response_convertToJSON(apikey_response_2);
	printf("repeating apikey_response:\n%s\n", cJSON_Print(jsonapikey_response_2));
}

int main() {
  test_apikey_response(1);
  test_apikey_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // apikey_response_MAIN
#endif // apikey_response_TEST
