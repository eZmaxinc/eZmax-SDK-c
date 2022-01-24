#ifndef custom_word_position_word_response_TEST
#define custom_word_position_word_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_word_position_word_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_word_position_word_response.h"
custom_word_position_word_response_t* instantiate_custom_word_position_word_response(int include_optional);



custom_word_position_word_response_t* instantiate_custom_word_position_word_response(int include_optional) {
  custom_word_position_word_response_t* custom_word_position_word_response = NULL;
  if (include_optional) {
    custom_word_position_word_response = custom_word_position_word_response_create(
      "0",
      list_createList()
    );
  } else {
    custom_word_position_word_response = custom_word_position_word_response_create(
      "0",
      list_createList()
    );
  }

  return custom_word_position_word_response;
}


#ifdef custom_word_position_word_response_MAIN

void test_custom_word_position_word_response(int include_optional) {
    custom_word_position_word_response_t* custom_word_position_word_response_1 = instantiate_custom_word_position_word_response(include_optional);

	cJSON* jsoncustom_word_position_word_response_1 = custom_word_position_word_response_convertToJSON(custom_word_position_word_response_1);
	printf("custom_word_position_word_response :\n%s\n", cJSON_Print(jsoncustom_word_position_word_response_1));
	custom_word_position_word_response_t* custom_word_position_word_response_2 = custom_word_position_word_response_parseFromJSON(jsoncustom_word_position_word_response_1);
	cJSON* jsoncustom_word_position_word_response_2 = custom_word_position_word_response_convertToJSON(custom_word_position_word_response_2);
	printf("repeating custom_word_position_word_response:\n%s\n", cJSON_Print(jsoncustom_word_position_word_response_2));
}

int main() {
  test_custom_word_position_word_response(1);
  test_custom_word_position_word_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_word_position_word_response_MAIN
#endif // custom_word_position_word_response_TEST
