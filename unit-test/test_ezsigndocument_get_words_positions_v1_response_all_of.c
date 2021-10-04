#ifndef ezsigndocument_get_words_positions_v1_response_all_of_TEST
#define ezsigndocument_get_words_positions_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_get_words_positions_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_get_words_positions_v1_response_all_of.h"
ezsigndocument_get_words_positions_v1_response_all_of_t* instantiate_ezsigndocument_get_words_positions_v1_response_all_of(int include_optional);



ezsigndocument_get_words_positions_v1_response_all_of_t* instantiate_ezsigndocument_get_words_positions_v1_response_all_of(int include_optional) {
  ezsigndocument_get_words_positions_v1_response_all_of_t* ezsigndocument_get_words_positions_v1_response_all_of = NULL;
  if (include_optional) {
    ezsigndocument_get_words_positions_v1_response_all_of = ezsigndocument_get_words_positions_v1_response_all_of_create(
      list_create()
    );
  } else {
    ezsigndocument_get_words_positions_v1_response_all_of = ezsigndocument_get_words_positions_v1_response_all_of_create(
      list_create()
    );
  }

  return ezsigndocument_get_words_positions_v1_response_all_of;
}


#ifdef ezsigndocument_get_words_positions_v1_response_all_of_MAIN

void test_ezsigndocument_get_words_positions_v1_response_all_of(int include_optional) {
    ezsigndocument_get_words_positions_v1_response_all_of_t* ezsigndocument_get_words_positions_v1_response_all_of_1 = instantiate_ezsigndocument_get_words_positions_v1_response_all_of(include_optional);

	cJSON* jsonezsigndocument_get_words_positions_v1_response_all_of_1 = ezsigndocument_get_words_positions_v1_response_all_of_convertToJSON(ezsigndocument_get_words_positions_v1_response_all_of_1);
	printf("ezsigndocument_get_words_positions_v1_response_all_of :\n%s\n", cJSON_Print(jsonezsigndocument_get_words_positions_v1_response_all_of_1));
	ezsigndocument_get_words_positions_v1_response_all_of_t* ezsigndocument_get_words_positions_v1_response_all_of_2 = ezsigndocument_get_words_positions_v1_response_all_of_parseFromJSON(jsonezsigndocument_get_words_positions_v1_response_all_of_1);
	cJSON* jsonezsigndocument_get_words_positions_v1_response_all_of_2 = ezsigndocument_get_words_positions_v1_response_all_of_convertToJSON(ezsigndocument_get_words_positions_v1_response_all_of_2);
	printf("repeating ezsigndocument_get_words_positions_v1_response_all_of:\n%s\n", cJSON_Print(jsonezsigndocument_get_words_positions_v1_response_all_of_2));
}

int main() {
  test_ezsigndocument_get_words_positions_v1_response_all_of(1);
  test_ezsigndocument_get_words_positions_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_get_words_positions_v1_response_all_of_MAIN
#endif // ezsigndocument_get_words_positions_v1_response_all_of_TEST
