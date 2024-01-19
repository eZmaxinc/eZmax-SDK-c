#ifndef custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_TEST
#define custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignsignature_create_ezsignelements_positioned_by_word_request.h"
custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t* instantiate_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request(int include_optional);

#include "test_custom_create_ezsignelements_positioned_by_word_request.c"


custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t* instantiate_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request(int include_optional) {
  custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request = NULL;
  if (include_optional) {
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_create(
      49,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"TopLeft",
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"Normal",
      20,
      1,
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"Description",
      "Attachment",
      1,
      75,
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"None",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"AllOf",
      1,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_custom_create_ezsignelements_positioned_by_word_request(0)
    );
  } else {
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_create(
      49,
      20,
      1,
      200,
      300,
      200,
      200,
      1,
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"Name",
      97,
      "Please sign here if you agree to the terms",
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"TopLeft",
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"Normal",
      20,
      1,
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"Description",
      "Attachment",
      1,
      75,
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"None",
      "/[-0-9a-zA-Z.+_]+@[-0-9a-zA-Z.+_]+.[a-zA-Z]{2,4}/",
      ezmax_api_definition__full_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request__"AllOf",
      1,
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return custom_ezsignsignature_create_ezsignelements_positioned_by_word_request;
}


#ifdef custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_MAIN

void test_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request(int include_optional) {
    custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_1 = instantiate_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request(include_optional);

	cJSON* jsoncustom_ezsignsignature_create_ezsignelements_positioned_by_word_request_1 = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_1);
	printf("custom_ezsignsignature_create_ezsignelements_positioned_by_word_request :\n%s\n", cJSON_Print(jsoncustom_ezsignsignature_create_ezsignelements_positioned_by_word_request_1));
	custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t* custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_2 = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_parseFromJSON(jsoncustom_ezsignsignature_create_ezsignelements_positioned_by_word_request_1);
	cJSON* jsoncustom_ezsignsignature_create_ezsignelements_positioned_by_word_request_2 = custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_2);
	printf("repeating custom_ezsignsignature_create_ezsignelements_positioned_by_word_request:\n%s\n", cJSON_Print(jsoncustom_ezsignsignature_create_ezsignelements_positioned_by_word_request_2));
}

int main() {
  test_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request(1);
  test_custom_ezsignsignature_create_ezsignelements_positioned_by_word_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_MAIN
#endif // custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_TEST
