#ifndef custom_ezsignformfielderrortest_response_TEST
#define custom_ezsignformfielderrortest_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignformfielderrortest_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignformfielderrortest_response.h"
custom_ezsignformfielderrortest_response_t* instantiate_custom_ezsignformfielderrortest_response(int include_optional);



custom_ezsignformfielderrortest_response_t* instantiate_custom_ezsignformfielderrortest_response(int include_optional) {
  custom_ezsignformfielderrortest_response_t* custom_ezsignformfielderrortest_response = NULL;
  if (include_optional) {
    custom_ezsignformfielderrortest_response = custom_ezsignformfielderrortest_response_create(
      "a",
      "a"
    );
  } else {
    custom_ezsignformfielderrortest_response = custom_ezsignformfielderrortest_response_create(
      "a",
      "a"
    );
  }

  return custom_ezsignformfielderrortest_response;
}


#ifdef custom_ezsignformfielderrortest_response_MAIN

void test_custom_ezsignformfielderrortest_response(int include_optional) {
    custom_ezsignformfielderrortest_response_t* custom_ezsignformfielderrortest_response_1 = instantiate_custom_ezsignformfielderrortest_response(include_optional);

	cJSON* jsoncustom_ezsignformfielderrortest_response_1 = custom_ezsignformfielderrortest_response_convertToJSON(custom_ezsignformfielderrortest_response_1);
	printf("custom_ezsignformfielderrortest_response :\n%s\n", cJSON_Print(jsoncustom_ezsignformfielderrortest_response_1));
	custom_ezsignformfielderrortest_response_t* custom_ezsignformfielderrortest_response_2 = custom_ezsignformfielderrortest_response_parseFromJSON(jsoncustom_ezsignformfielderrortest_response_1);
	cJSON* jsoncustom_ezsignformfielderrortest_response_2 = custom_ezsignformfielderrortest_response_convertToJSON(custom_ezsignformfielderrortest_response_2);
	printf("repeating custom_ezsignformfielderrortest_response:\n%s\n", cJSON_Print(jsoncustom_ezsignformfielderrortest_response_2));
}

int main() {
  test_custom_ezsignformfielderrortest_response(1);
  test_custom_ezsignformfielderrortest_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignformfielderrortest_response_MAIN
#endif // custom_ezsignformfielderrortest_response_TEST
