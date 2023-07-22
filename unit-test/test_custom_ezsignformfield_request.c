#ifndef custom_ezsignformfield_request_TEST
#define custom_ezsignformfield_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignformfield_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignformfield_request.h"
custom_ezsignformfield_request_t* instantiate_custom_ezsignformfield_request(int include_optional);



custom_ezsignformfield_request_t* instantiate_custom_ezsignformfield_request(int include_optional) {
  custom_ezsignformfield_request_t* custom_ezsignformfield_request = NULL;
  if (include_optional) {
    custom_ezsignformfield_request = custom_ezsignformfield_request_create(
      32,
      "Peanuts",
      1,
      "Montreal"
    );
  } else {
    custom_ezsignformfield_request = custom_ezsignformfield_request_create(
      32,
      "Peanuts",
      1,
      "Montreal"
    );
  }

  return custom_ezsignformfield_request;
}


#ifdef custom_ezsignformfield_request_MAIN

void test_custom_ezsignformfield_request(int include_optional) {
    custom_ezsignformfield_request_t* custom_ezsignformfield_request_1 = instantiate_custom_ezsignformfield_request(include_optional);

	cJSON* jsoncustom_ezsignformfield_request_1 = custom_ezsignformfield_request_convertToJSON(custom_ezsignformfield_request_1);
	printf("custom_ezsignformfield_request :\n%s\n", cJSON_Print(jsoncustom_ezsignformfield_request_1));
	custom_ezsignformfield_request_t* custom_ezsignformfield_request_2 = custom_ezsignformfield_request_parseFromJSON(jsoncustom_ezsignformfield_request_1);
	cJSON* jsoncustom_ezsignformfield_request_2 = custom_ezsignformfield_request_convertToJSON(custom_ezsignformfield_request_2);
	printf("repeating custom_ezsignformfield_request:\n%s\n", cJSON_Print(jsoncustom_ezsignformfield_request_2));
}

int main() {
  test_custom_ezsignformfield_request(1);
  test_custom_ezsignformfield_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignformfield_request_MAIN
#endif // custom_ezsignformfield_request_TEST
