#ifndef activesession_generate_federation_token_v1_request_TEST
#define activesession_generate_federation_token_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define activesession_generate_federation_token_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/activesession_generate_federation_token_v1_request.h"
activesession_generate_federation_token_v1_request_t* instantiate_activesession_generate_federation_token_v1_request(int include_optional);



activesession_generate_federation_token_v1_request_t* instantiate_activesession_generate_federation_token_v1_request(int include_optional) {
  activesession_generate_federation_token_v1_request_t* activesession_generate_federation_token_v1_request = NULL;
  if (include_optional) {
    activesession_generate_federation_token_v1_request = activesession_generate_federation_token_v1_request_create(
      "demo"
    );
  } else {
    activesession_generate_federation_token_v1_request = activesession_generate_federation_token_v1_request_create(
      "demo"
    );
  }

  return activesession_generate_federation_token_v1_request;
}


#ifdef activesession_generate_federation_token_v1_request_MAIN

void test_activesession_generate_federation_token_v1_request(int include_optional) {
    activesession_generate_federation_token_v1_request_t* activesession_generate_federation_token_v1_request_1 = instantiate_activesession_generate_federation_token_v1_request(include_optional);

	cJSON* jsonactivesession_generate_federation_token_v1_request_1 = activesession_generate_federation_token_v1_request_convertToJSON(activesession_generate_federation_token_v1_request_1);
	printf("activesession_generate_federation_token_v1_request :\n%s\n", cJSON_Print(jsonactivesession_generate_federation_token_v1_request_1));
	activesession_generate_federation_token_v1_request_t* activesession_generate_federation_token_v1_request_2 = activesession_generate_federation_token_v1_request_parseFromJSON(jsonactivesession_generate_federation_token_v1_request_1);
	cJSON* jsonactivesession_generate_federation_token_v1_request_2 = activesession_generate_federation_token_v1_request_convertToJSON(activesession_generate_federation_token_v1_request_2);
	printf("repeating activesession_generate_federation_token_v1_request:\n%s\n", cJSON_Print(jsonactivesession_generate_federation_token_v1_request_2));
}

int main() {
  test_activesession_generate_federation_token_v1_request(1);
  test_activesession_generate_federation_token_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // activesession_generate_federation_token_v1_request_MAIN
#endif // activesession_generate_federation_token_v1_request_TEST
