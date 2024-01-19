#ifndef custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_TEST
#define custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request.h"
custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t* instantiate_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request(int include_optional);

#include "test_custom_create_ezsignelements_positioned_by_word_request.c"


custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t* instantiate_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request(int include_optional) {
  custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request = NULL;
  if (include_optional) {
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_create(
      26,
      97,
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"Text",
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"TopLeft",
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"None",
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_custom_create_ezsignelements_positioned_by_word_request(0)
    );
  } else {
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_create(
      26,
      97,
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"Text",
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"One",
      "Allergies",
      1,
      "Foo",
      1,
      2,
      1,
      75,
      1,
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      "Please enter a valid email address",
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"TopLeft",
      ezmax_api_definition__full_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request__"None",
      list_createList(),
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request;
}


#ifdef custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_MAIN

void test_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request(int include_optional) {
    custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_1 = instantiate_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request(include_optional);

	cJSON* jsoncustom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_1 = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_1);
	printf("custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request :\n%s\n", cJSON_Print(jsoncustom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_1));
	custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t* custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_2 = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_parseFromJSON(jsoncustom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_1);
	cJSON* jsoncustom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_2 = custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_2);
	printf("repeating custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request:\n%s\n", cJSON_Print(jsoncustom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_2));
}

int main() {
  test_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request(1);
  test_custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_MAIN
#endif // custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_TEST
