#ifndef custom_ezsignformfield_request_all_of_TEST
#define custom_ezsignformfield_request_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignformfield_request_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignformfield_request_all_of.h"
custom_ezsignformfield_request_all_of_t* instantiate_custom_ezsignformfield_request_all_of(int include_optional);



custom_ezsignformfield_request_all_of_t* instantiate_custom_ezsignformfield_request_all_of(int include_optional) {
  custom_ezsignformfield_request_all_of_t* custom_ezsignformfield_request_all_of = NULL;
  if (include_optional) {
    custom_ezsignformfield_request_all_of = custom_ezsignformfield_request_all_of_create(
      32,
      "Peanuts",
      1,
      "Montreal"
    );
  } else {
    custom_ezsignformfield_request_all_of = custom_ezsignformfield_request_all_of_create(
      32,
      "Peanuts",
      1,
      "Montreal"
    );
  }

  return custom_ezsignformfield_request_all_of;
}


#ifdef custom_ezsignformfield_request_all_of_MAIN

void test_custom_ezsignformfield_request_all_of(int include_optional) {
    custom_ezsignformfield_request_all_of_t* custom_ezsignformfield_request_all_of_1 = instantiate_custom_ezsignformfield_request_all_of(include_optional);

	cJSON* jsoncustom_ezsignformfield_request_all_of_1 = custom_ezsignformfield_request_all_of_convertToJSON(custom_ezsignformfield_request_all_of_1);
	printf("custom_ezsignformfield_request_all_of :\n%s\n", cJSON_Print(jsoncustom_ezsignformfield_request_all_of_1));
	custom_ezsignformfield_request_all_of_t* custom_ezsignformfield_request_all_of_2 = custom_ezsignformfield_request_all_of_parseFromJSON(jsoncustom_ezsignformfield_request_all_of_1);
	cJSON* jsoncustom_ezsignformfield_request_all_of_2 = custom_ezsignformfield_request_all_of_convertToJSON(custom_ezsignformfield_request_all_of_2);
	printf("repeating custom_ezsignformfield_request_all_of:\n%s\n", cJSON_Print(jsoncustom_ezsignformfield_request_all_of_2));
}

int main() {
  test_custom_ezsignformfield_request_all_of(1);
  test_custom_ezsignformfield_request_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignformfield_request_all_of_MAIN
#endif // custom_ezsignformfield_request_all_of_TEST
