#ifndef cors_request_compound_TEST
#define cors_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cors_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cors_request_compound.h"
cors_request_compound_t* instantiate_cors_request_compound(int include_optional);



cors_request_compound_t* instantiate_cors_request_compound(int include_optional) {
  cors_request_compound_t* cors_request_compound = NULL;
  if (include_optional) {
    cors_request_compound = cors_request_compound_create(
      228,
      99,
      "https://www.example.com"
    );
  } else {
    cors_request_compound = cors_request_compound_create(
      228,
      99,
      "https://www.example.com"
    );
  }

  return cors_request_compound;
}


#ifdef cors_request_compound_MAIN

void test_cors_request_compound(int include_optional) {
    cors_request_compound_t* cors_request_compound_1 = instantiate_cors_request_compound(include_optional);

	cJSON* jsoncors_request_compound_1 = cors_request_compound_convertToJSON(cors_request_compound_1);
	printf("cors_request_compound :\n%s\n", cJSON_Print(jsoncors_request_compound_1));
	cors_request_compound_t* cors_request_compound_2 = cors_request_compound_parseFromJSON(jsoncors_request_compound_1);
	cJSON* jsoncors_request_compound_2 = cors_request_compound_convertToJSON(cors_request_compound_2);
	printf("repeating cors_request_compound:\n%s\n", cJSON_Print(jsoncors_request_compound_2));
}

int main() {
  test_cors_request_compound(1);
  test_cors_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // cors_request_compound_MAIN
#endif // cors_request_compound_TEST
