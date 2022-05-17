#ifndef ezsigntemplatedocument_get_words_positions_v1_request_TEST
#define ezsigntemplatedocument_get_words_positions_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatedocument_get_words_positions_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatedocument_get_words_positions_v1_request.h"
ezsigntemplatedocument_get_words_positions_v1_request_t* instantiate_ezsigntemplatedocument_get_words_positions_v1_request(int include_optional);



ezsigntemplatedocument_get_words_positions_v1_request_t* instantiate_ezsigntemplatedocument_get_words_positions_v1_request(int include_optional) {
  ezsigntemplatedocument_get_words_positions_v1_request_t* ezsigntemplatedocument_get_words_positions_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatedocument_get_words_positions_v1_request = ezsigntemplatedocument_get_words_positions_v1_request_create(
      ezmax_api_definition__full_ezsigntemplatedocument_get_words_positions_v1_request_EGET_All,
      1,
      list_createList()
    );
  } else {
    ezsigntemplatedocument_get_words_positions_v1_request = ezsigntemplatedocument_get_words_positions_v1_request_create(
      ezmax_api_definition__full_ezsigntemplatedocument_get_words_positions_v1_request_EGET_All,
      1,
      list_createList()
    );
  }

  return ezsigntemplatedocument_get_words_positions_v1_request;
}


#ifdef ezsigntemplatedocument_get_words_positions_v1_request_MAIN

void test_ezsigntemplatedocument_get_words_positions_v1_request(int include_optional) {
    ezsigntemplatedocument_get_words_positions_v1_request_t* ezsigntemplatedocument_get_words_positions_v1_request_1 = instantiate_ezsigntemplatedocument_get_words_positions_v1_request(include_optional);

	cJSON* jsonezsigntemplatedocument_get_words_positions_v1_request_1 = ezsigntemplatedocument_get_words_positions_v1_request_convertToJSON(ezsigntemplatedocument_get_words_positions_v1_request_1);
	printf("ezsigntemplatedocument_get_words_positions_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatedocument_get_words_positions_v1_request_1));
	ezsigntemplatedocument_get_words_positions_v1_request_t* ezsigntemplatedocument_get_words_positions_v1_request_2 = ezsigntemplatedocument_get_words_positions_v1_request_parseFromJSON(jsonezsigntemplatedocument_get_words_positions_v1_request_1);
	cJSON* jsonezsigntemplatedocument_get_words_positions_v1_request_2 = ezsigntemplatedocument_get_words_positions_v1_request_convertToJSON(ezsigntemplatedocument_get_words_positions_v1_request_2);
	printf("repeating ezsigntemplatedocument_get_words_positions_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatedocument_get_words_positions_v1_request_2));
}

int main() {
  test_ezsigntemplatedocument_get_words_positions_v1_request(1);
  test_ezsigntemplatedocument_get_words_positions_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatedocument_get_words_positions_v1_request_MAIN
#endif // ezsigntemplatedocument_get_words_positions_v1_request_TEST
