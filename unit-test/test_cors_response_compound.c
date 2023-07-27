#ifndef cors_response_compound_TEST
#define cors_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_response_compound.h"
cors_response_compound_t* instantiate_cors_response_compound(int include_optional);



cors_response_compound_t* instantiate_cors_response_compound(int include_optional) {
  cors_response_compound_t* cors_response_compound = NULL;
  if (include_optional) {
    cors_response_compound = cors_response_compound_create(
      228,
      99,
      "Https://www.example.com"
    );
  } else {
    cors_response_compound = cors_response_compound_create(
      228,
      99,
      "Https://www.example.com"
    );
  }

  return cors_response_compound;
}


#ifdef cors_response_compound_MAIN

void test_cors_response_compound(int include_optional) {
    cors_response_compound_t* cors_response_compound_1 = instantiate_cors_response_compound(include_optional);

	cJSON* jsoncors_response_compound_1 = cors_response_compound_convertToJSON(cors_response_compound_1);
	printf("cors_response_compound :\n%s\n", cJSON_Print(jsoncors_response_compound_1));
	cors_response_compound_t* cors_response_compound_2 = cors_response_compound_parseFromJSON(jsoncors_response_compound_1);
	cJSON* jsoncors_response_compound_2 = cors_response_compound_convertToJSON(cors_response_compound_2);
	printf("repeating cors_response_compound:\n%s\n", cJSON_Print(jsoncors_response_compound_2));
}

int main() {
  test_cors_response_compound(1);
  test_cors_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_response_compound_MAIN
#endif // cors_response_compound_TEST
