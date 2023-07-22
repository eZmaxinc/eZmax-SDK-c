#ifndef custom_ezsignformfieldgroup_request_TEST
#define custom_ezsignformfieldgroup_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignformfieldgroup_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignformfieldgroup_request.h"
custom_ezsignformfieldgroup_request_t* instantiate_custom_ezsignformfieldgroup_request(int include_optional);



custom_ezsignformfieldgroup_request_t* instantiate_custom_ezsignformfieldgroup_request(int include_optional) {
  custom_ezsignformfieldgroup_request_t* custom_ezsignformfieldgroup_request = NULL;
  if (include_optional) {
    custom_ezsignformfieldgroup_request = custom_ezsignformfieldgroup_request_create(
      26,
      "Allergies",
      list_createList()
    );
  } else {
    custom_ezsignformfieldgroup_request = custom_ezsignformfieldgroup_request_create(
      26,
      "Allergies",
      list_createList()
    );
  }

  return custom_ezsignformfieldgroup_request;
}


#ifdef custom_ezsignformfieldgroup_request_MAIN

void test_custom_ezsignformfieldgroup_request(int include_optional) {
    custom_ezsignformfieldgroup_request_t* custom_ezsignformfieldgroup_request_1 = instantiate_custom_ezsignformfieldgroup_request(include_optional);

	cJSON* jsoncustom_ezsignformfieldgroup_request_1 = custom_ezsignformfieldgroup_request_convertToJSON(custom_ezsignformfieldgroup_request_1);
	printf("custom_ezsignformfieldgroup_request :\n%s\n", cJSON_Print(jsoncustom_ezsignformfieldgroup_request_1));
	custom_ezsignformfieldgroup_request_t* custom_ezsignformfieldgroup_request_2 = custom_ezsignformfieldgroup_request_parseFromJSON(jsoncustom_ezsignformfieldgroup_request_1);
	cJSON* jsoncustom_ezsignformfieldgroup_request_2 = custom_ezsignformfieldgroup_request_convertToJSON(custom_ezsignformfieldgroup_request_2);
	printf("repeating custom_ezsignformfieldgroup_request:\n%s\n", cJSON_Print(jsoncustom_ezsignformfieldgroup_request_2));
}

int main() {
  test_custom_ezsignformfieldgroup_request(1);
  test_custom_ezsignformfieldgroup_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignformfieldgroup_request_MAIN
#endif // custom_ezsignformfieldgroup_request_TEST
