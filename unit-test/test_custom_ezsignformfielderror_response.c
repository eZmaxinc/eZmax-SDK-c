#ifndef custom_ezsignformfielderror_response_TEST
#define custom_ezsignformfielderror_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignformfielderror_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignformfielderror_response.h"
custom_ezsignformfielderror_response_t* instantiate_custom_ezsignformfielderror_response(int include_optional);



custom_ezsignformfielderror_response_t* instantiate_custom_ezsignformfielderror_response(int include_optional) {
  custom_ezsignformfielderror_response_t* custom_ezsignformfielderror_response = NULL;
  if (include_optional) {
    custom_ezsignformfielderror_response = custom_ezsignformfielderror_response_create(
      "Peanuts",
      list_createList()
    );
  } else {
    custom_ezsignformfielderror_response = custom_ezsignformfielderror_response_create(
      "Peanuts",
      list_createList()
    );
  }

  return custom_ezsignformfielderror_response;
}


#ifdef custom_ezsignformfielderror_response_MAIN

void test_custom_ezsignformfielderror_response(int include_optional) {
    custom_ezsignformfielderror_response_t* custom_ezsignformfielderror_response_1 = instantiate_custom_ezsignformfielderror_response(include_optional);

	cJSON* jsoncustom_ezsignformfielderror_response_1 = custom_ezsignformfielderror_response_convertToJSON(custom_ezsignformfielderror_response_1);
	printf("custom_ezsignformfielderror_response :\n%s\n", cJSON_Print(jsoncustom_ezsignformfielderror_response_1));
	custom_ezsignformfielderror_response_t* custom_ezsignformfielderror_response_2 = custom_ezsignformfielderror_response_parseFromJSON(jsoncustom_ezsignformfielderror_response_1);
	cJSON* jsoncustom_ezsignformfielderror_response_2 = custom_ezsignformfielderror_response_convertToJSON(custom_ezsignformfielderror_response_2);
	printf("repeating custom_ezsignformfielderror_response:\n%s\n", cJSON_Print(jsoncustom_ezsignformfielderror_response_2));
}

int main() {
  test_custom_ezsignformfielderror_response(1);
  test_custom_ezsignformfielderror_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignformfielderror_response_MAIN
#endif // custom_ezsignformfielderror_response_TEST
