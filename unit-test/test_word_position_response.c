#ifndef word_position_response_TEST
#define word_position_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define word_position_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/word_position_response.h"
word_position_response_t* instantiate_word_position_response(int include_optional);



word_position_response_t* instantiate_word_position_response(int include_optional) {
  word_position_response_t* word_position_response = NULL;
  if (include_optional) {
    word_position_response = word_position_response_create(
      1,
      0,
      0
    );
  } else {
    word_position_response = word_position_response_create(
      1,
      0,
      0
    );
  }

  return word_position_response;
}


#ifdef word_position_response_MAIN

void test_word_position_response(int include_optional) {
    word_position_response_t* word_position_response_1 = instantiate_word_position_response(include_optional);

	cJSON* jsonword_position_response_1 = word_position_response_convertToJSON(word_position_response_1);
	printf("word_position_response :\n%s\n", cJSON_Print(jsonword_position_response_1));
	word_position_response_t* word_position_response_2 = word_position_response_parseFromJSON(jsonword_position_response_1);
	cJSON* jsonword_position_response_2 = word_position_response_convertToJSON(word_position_response_2);
	printf("repeating word_position_response:\n%s\n", cJSON_Print(jsonword_position_response_2));
}

int main() {
  test_word_position_response(1);
  test_word_position_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // word_position_response_MAIN
#endif // word_position_response_TEST
