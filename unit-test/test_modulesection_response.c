#ifndef modulesection_response_TEST
#define modulesection_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modulesection_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modulesection_response.h"
modulesection_response_t* instantiate_modulesection_response(int include_optional);



modulesection_response_t* instantiate_modulesection_response(int include_optional) {
  modulesection_response_t* modulesection_response = NULL;
  if (include_optional) {
    modulesection_response = modulesection_response_create(
      53,
      40,
      "Access",
      "Access"
    );
  } else {
    modulesection_response = modulesection_response_create(
      53,
      40,
      "Access",
      "Access"
    );
  }

  return modulesection_response;
}


#ifdef modulesection_response_MAIN

void test_modulesection_response(int include_optional) {
    modulesection_response_t* modulesection_response_1 = instantiate_modulesection_response(include_optional);

	cJSON* jsonmodulesection_response_1 = modulesection_response_convertToJSON(modulesection_response_1);
	printf("modulesection_response :\n%s\n", cJSON_Print(jsonmodulesection_response_1));
	modulesection_response_t* modulesection_response_2 = modulesection_response_parseFromJSON(jsonmodulesection_response_1);
	cJSON* jsonmodulesection_response_2 = modulesection_response_convertToJSON(modulesection_response_2);
	printf("repeating modulesection_response:\n%s\n", cJSON_Print(jsonmodulesection_response_2));
}

int main() {
  test_modulesection_response(1);
  test_modulesection_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // modulesection_response_MAIN
#endif // modulesection_response_TEST
