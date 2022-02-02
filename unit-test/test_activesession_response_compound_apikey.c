#ifndef activesession_response_compound_apikey_TEST
#define activesession_response_compound_apikey_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_response_compound_apikey_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_response_compound_apikey.h"
activesession_response_compound_apikey_t* instantiate_activesession_response_compound_apikey(int include_optional);



activesession_response_compound_apikey_t* instantiate_activesession_response_compound_apikey(int include_optional) {
  activesession_response_compound_apikey_t* activesession_response_compound_apikey = NULL;
  if (include_optional) {
    activesession_response_compound_apikey = activesession_response_compound_apikey_create(
      99,
      "Project X"
    );
  } else {
    activesession_response_compound_apikey = activesession_response_compound_apikey_create(
      99,
      "Project X"
    );
  }

  return activesession_response_compound_apikey;
}


#ifdef activesession_response_compound_apikey_MAIN

void test_activesession_response_compound_apikey(int include_optional) {
    activesession_response_compound_apikey_t* activesession_response_compound_apikey_1 = instantiate_activesession_response_compound_apikey(include_optional);

	cJSON* jsonactivesession_response_compound_apikey_1 = activesession_response_compound_apikey_convertToJSON(activesession_response_compound_apikey_1);
	printf("activesession_response_compound_apikey :\n%s\n", cJSON_Print(jsonactivesession_response_compound_apikey_1));
	activesession_response_compound_apikey_t* activesession_response_compound_apikey_2 = activesession_response_compound_apikey_parseFromJSON(jsonactivesession_response_compound_apikey_1);
	cJSON* jsonactivesession_response_compound_apikey_2 = activesession_response_compound_apikey_convertToJSON(activesession_response_compound_apikey_2);
	printf("repeating activesession_response_compound_apikey:\n%s\n", cJSON_Print(jsonactivesession_response_compound_apikey_2));
}

int main() {
  test_activesession_response_compound_apikey(1);
  test_activesession_response_compound_apikey(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_response_compound_apikey_MAIN
#endif // activesession_response_compound_apikey_TEST
