#ifndef sessionhistory_list_element_TEST
#define sessionhistory_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sessionhistory_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sessionhistory_list_element.h"
sessionhistory_list_element_t* instantiate_sessionhistory_list_element(int include_optional);



sessionhistory_list_element_t* instantiate_sessionhistory_list_element(int include_optional) {
  sessionhistory_list_element_t* sessionhistory_list_element = NULL;
  if (include_optional) {
    sessionhistory_list_element = sessionhistory_list_element_create(
      259,
      249,
      70,
      "2020-12-31 17:35:37",
      "2020-12-31 19:27:38",
      ezmax_api_definition__full_sessionhistory_list_element__"Logoff",
      "PC001",
      "01:52:01",
      "127.0.0.1",
      "JohnDoe"
    );
  } else {
    sessionhistory_list_element = sessionhistory_list_element_create(
      259,
      249,
      70,
      "2020-12-31 17:35:37",
      "2020-12-31 19:27:38",
      ezmax_api_definition__full_sessionhistory_list_element__"Logoff",
      "PC001",
      "01:52:01",
      "127.0.0.1",
      "JohnDoe"
    );
  }

  return sessionhistory_list_element;
}


#ifdef sessionhistory_list_element_MAIN

void test_sessionhistory_list_element(int include_optional) {
    sessionhistory_list_element_t* sessionhistory_list_element_1 = instantiate_sessionhistory_list_element(include_optional);

	cJSON* jsonsessionhistory_list_element_1 = sessionhistory_list_element_convertToJSON(sessionhistory_list_element_1);
	printf("sessionhistory_list_element :\n%s\n", cJSON_Print(jsonsessionhistory_list_element_1));
	sessionhistory_list_element_t* sessionhistory_list_element_2 = sessionhistory_list_element_parseFromJSON(jsonsessionhistory_list_element_1);
	cJSON* jsonsessionhistory_list_element_2 = sessionhistory_list_element_convertToJSON(sessionhistory_list_element_2);
	printf("repeating sessionhistory_list_element:\n%s\n", cJSON_Print(jsonsessionhistory_list_element_2));
}

int main() {
  test_sessionhistory_list_element(1);
  test_sessionhistory_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // sessionhistory_list_element_MAIN
#endif // sessionhistory_list_element_TEST
