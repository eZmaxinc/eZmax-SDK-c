#ifndef custom_create_ezsignelements_positioned_by_word_request_TEST
#define custom_create_ezsignelements_positioned_by_word_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_create_ezsignelements_positioned_by_word_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_create_ezsignelements_positioned_by_word_request.h"
custom_create_ezsignelements_positioned_by_word_request_t* instantiate_custom_create_ezsignelements_positioned_by_word_request(int include_optional);



custom_create_ezsignelements_positioned_by_word_request_t* instantiate_custom_create_ezsignelements_positioned_by_word_request(int include_optional) {
  custom_create_ezsignelements_positioned_by_word_request_t* custom_create_ezsignelements_positioned_by_word_request = NULL;
  if (include_optional) {
    custom_create_ezsignelements_positioned_by_word_request = custom_create_ezsignelements_positioned_by_word_request_create(
      "a",
      56,
      56,
      ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_All
    );
  } else {
    custom_create_ezsignelements_positioned_by_word_request = custom_create_ezsignelements_positioned_by_word_request_create(
      "a",
      56,
      56,
      ezmax_api_definition__full_custom_create_ezsignelements_positioned_by_word_request_ECREATEEZSIGNELEMENTSPOSITIONEDBYWORDOCCURANCE_All
    );
  }

  return custom_create_ezsignelements_positioned_by_word_request;
}


#ifdef custom_create_ezsignelements_positioned_by_word_request_MAIN

void test_custom_create_ezsignelements_positioned_by_word_request(int include_optional) {
    custom_create_ezsignelements_positioned_by_word_request_t* custom_create_ezsignelements_positioned_by_word_request_1 = instantiate_custom_create_ezsignelements_positioned_by_word_request(include_optional);

	cJSON* jsoncustom_create_ezsignelements_positioned_by_word_request_1 = custom_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_create_ezsignelements_positioned_by_word_request_1);
	printf("custom_create_ezsignelements_positioned_by_word_request :\n%s\n", cJSON_Print(jsoncustom_create_ezsignelements_positioned_by_word_request_1));
	custom_create_ezsignelements_positioned_by_word_request_t* custom_create_ezsignelements_positioned_by_word_request_2 = custom_create_ezsignelements_positioned_by_word_request_parseFromJSON(jsoncustom_create_ezsignelements_positioned_by_word_request_1);
	cJSON* jsoncustom_create_ezsignelements_positioned_by_word_request_2 = custom_create_ezsignelements_positioned_by_word_request_convertToJSON(custom_create_ezsignelements_positioned_by_word_request_2);
	printf("repeating custom_create_ezsignelements_positioned_by_word_request:\n%s\n", cJSON_Print(jsoncustom_create_ezsignelements_positioned_by_word_request_2));
}

int main() {
  test_custom_create_ezsignelements_positioned_by_word_request(1);
  test_custom_create_ezsignelements_positioned_by_word_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_create_ezsignelements_positioned_by_word_request_MAIN
#endif // custom_create_ezsignelements_positioned_by_word_request_TEST
