#ifndef ezsignformfield_request_TEST
#define ezsignformfield_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignformfield_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignformfield_request.h"
ezsignformfield_request_t* instantiate_ezsignformfield_request(int include_optional);



ezsignformfield_request_t* instantiate_ezsignformfield_request(int include_optional) {
  ezsignformfield_request_t* ezsignformfield_request = NULL;
  if (include_optional) {
    ezsignformfield_request = ezsignformfield_request_create(
      32,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      "Montreal"
    );
  } else {
    ezsignformfield_request = ezsignformfield_request_create(
      32,
      1,
      "Peanuts",
      "Yes",
      200,
      300,
      102,
      22,
      1,
      "Montreal"
    );
  }

  return ezsignformfield_request;
}


#ifdef ezsignformfield_request_MAIN

void test_ezsignformfield_request(int include_optional) {
    ezsignformfield_request_t* ezsignformfield_request_1 = instantiate_ezsignformfield_request(include_optional);

	cJSON* jsonezsignformfield_request_1 = ezsignformfield_request_convertToJSON(ezsignformfield_request_1);
	printf("ezsignformfield_request :\n%s\n", cJSON_Print(jsonezsignformfield_request_1));
	ezsignformfield_request_t* ezsignformfield_request_2 = ezsignformfield_request_parseFromJSON(jsonezsignformfield_request_1);
	cJSON* jsonezsignformfield_request_2 = ezsignformfield_request_convertToJSON(ezsignformfield_request_2);
	printf("repeating ezsignformfield_request:\n%s\n", cJSON_Print(jsonezsignformfield_request_2));
}

int main() {
  test_ezsignformfield_request(1);
  test_ezsignformfield_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignformfield_request_MAIN
#endif // ezsignformfield_request_TEST
