#ifndef custom_ezsignfoldertype_response_TEST
#define custom_ezsignfoldertype_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignfoldertype_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignfoldertype_response.h"
custom_ezsignfoldertype_response_t* instantiate_custom_ezsignfoldertype_response(int include_optional);



custom_ezsignfoldertype_response_t* instantiate_custom_ezsignfoldertype_response(int include_optional) {
  custom_ezsignfoldertype_response_t* custom_ezsignfoldertype_response = NULL;
  if (include_optional) {
    custom_ezsignfoldertype_response = custom_ezsignfoldertype_response_create(
      5,
      1,
      1,
      1,
      "Default",
      false,
      false,
      false,
      false,
      true,
      true,
      true,
      true,
      true,
      5,
      10,
      12
    );
  } else {
    custom_ezsignfoldertype_response = custom_ezsignfoldertype_response_create(
      5,
      1,
      1,
      1,
      "Default",
      false,
      false,
      false,
      false,
      true,
      true,
      true,
      true,
      true,
      5,
      10,
      12
    );
  }

  return custom_ezsignfoldertype_response;
}


#ifdef custom_ezsignfoldertype_response_MAIN

void test_custom_ezsignfoldertype_response(int include_optional) {
    custom_ezsignfoldertype_response_t* custom_ezsignfoldertype_response_1 = instantiate_custom_ezsignfoldertype_response(include_optional);

	cJSON* jsoncustom_ezsignfoldertype_response_1 = custom_ezsignfoldertype_response_convertToJSON(custom_ezsignfoldertype_response_1);
	printf("custom_ezsignfoldertype_response :\n%s\n", cJSON_Print(jsoncustom_ezsignfoldertype_response_1));
	custom_ezsignfoldertype_response_t* custom_ezsignfoldertype_response_2 = custom_ezsignfoldertype_response_parseFromJSON(jsoncustom_ezsignfoldertype_response_1);
	cJSON* jsoncustom_ezsignfoldertype_response_2 = custom_ezsignfoldertype_response_convertToJSON(custom_ezsignfoldertype_response_2);
	printf("repeating custom_ezsignfoldertype_response:\n%s\n", cJSON_Print(jsoncustom_ezsignfoldertype_response_2));
}

int main() {
  test_custom_ezsignfoldertype_response(1);
  test_custom_ezsignfoldertype_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignfoldertype_response_MAIN
#endif // custom_ezsignfoldertype_response_TEST
