#ifndef userstaged_response_TEST
#define userstaged_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_response.h"
userstaged_response_t* instantiate_userstaged_response(int include_optional);



userstaged_response_t* instantiate_userstaged_response(int include_optional) {
  userstaged_response_t* userstaged_response = NULL;
  if (include_optional) {
    userstaged_response = userstaged_response_create(
      90,
      22,
      "Jane",
      "Doe",
      "azuread_6b303ca8-9e34-4c21-9a53-0856342dec5e"
    );
  } else {
    userstaged_response = userstaged_response_create(
      90,
      22,
      "Jane",
      "Doe",
      "azuread_6b303ca8-9e34-4c21-9a53-0856342dec5e"
    );
  }

  return userstaged_response;
}


#ifdef userstaged_response_MAIN

void test_userstaged_response(int include_optional) {
    userstaged_response_t* userstaged_response_1 = instantiate_userstaged_response(include_optional);

	cJSON* jsonuserstaged_response_1 = userstaged_response_convertToJSON(userstaged_response_1);
	printf("userstaged_response :\n%s\n", cJSON_Print(jsonuserstaged_response_1));
	userstaged_response_t* userstaged_response_2 = userstaged_response_parseFromJSON(jsonuserstaged_response_1);
	cJSON* jsonuserstaged_response_2 = userstaged_response_convertToJSON(userstaged_response_2);
	printf("repeating userstaged_response:\n%s\n", cJSON_Print(jsonuserstaged_response_2));
}

int main() {
  test_userstaged_response(1);
  test_userstaged_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_response_MAIN
#endif // userstaged_response_TEST
