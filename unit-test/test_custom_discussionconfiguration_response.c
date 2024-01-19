#ifndef custom_discussionconfiguration_response_TEST
#define custom_discussionconfiguration_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_discussionconfiguration_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_discussionconfiguration_response.h"
custom_discussionconfiguration_response_t* instantiate_custom_discussionconfiguration_response(int include_optional);



custom_discussionconfiguration_response_t* instantiate_custom_discussionconfiguration_response(int include_optional) {
  custom_discussionconfiguration_response_t* custom_discussionconfiguration_response = NULL;
  if (include_optional) {
    custom_discussionconfiguration_response = custom_discussionconfiguration_response_create(
      true,
      true,
      true,
      true,
      true
    );
  } else {
    custom_discussionconfiguration_response = custom_discussionconfiguration_response_create(
      true,
      true,
      true,
      true,
      true
    );
  }

  return custom_discussionconfiguration_response;
}


#ifdef custom_discussionconfiguration_response_MAIN

void test_custom_discussionconfiguration_response(int include_optional) {
    custom_discussionconfiguration_response_t* custom_discussionconfiguration_response_1 = instantiate_custom_discussionconfiguration_response(include_optional);

	cJSON* jsoncustom_discussionconfiguration_response_1 = custom_discussionconfiguration_response_convertToJSON(custom_discussionconfiguration_response_1);
	printf("custom_discussionconfiguration_response :\n%s\n", cJSON_Print(jsoncustom_discussionconfiguration_response_1));
	custom_discussionconfiguration_response_t* custom_discussionconfiguration_response_2 = custom_discussionconfiguration_response_parseFromJSON(jsoncustom_discussionconfiguration_response_1);
	cJSON* jsoncustom_discussionconfiguration_response_2 = custom_discussionconfiguration_response_convertToJSON(custom_discussionconfiguration_response_2);
	printf("repeating custom_discussionconfiguration_response:\n%s\n", cJSON_Print(jsoncustom_discussionconfiguration_response_2));
}

int main() {
  test_custom_discussionconfiguration_response(1);
  test_custom_discussionconfiguration_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_discussionconfiguration_response_MAIN
#endif // custom_discussionconfiguration_response_TEST
