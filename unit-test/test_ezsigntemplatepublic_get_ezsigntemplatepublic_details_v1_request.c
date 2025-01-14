#ifndef ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_TEST
#define ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request.h"
ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t* instantiate_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request(int include_optional);



ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t* instantiate_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request(int include_optional) {
  ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t* ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request = NULL;
  if (include_optional) {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_create(
      "demo",
      "6B29FC40-CA47-1067-B31D-00DD010662DA"
    );
  } else {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_create(
      "demo",
      "6B29FC40-CA47-1067-B31D-00DD010662DA"
    );
  }

  return ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request;
}


#ifdef ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_MAIN

void test_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request(int include_optional) {
    ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t* ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_1 = instantiate_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request(include_optional);

	cJSON* jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_1 = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_1);
	printf("ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request :\n%s\n", cJSON_Print(jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_1));
	ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t* ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_2 = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_parseFromJSON(jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_1);
	cJSON* jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_2 = ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_2);
	printf("repeating ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request:\n%s\n", cJSON_Print(jsonezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_2));
}

int main() {
  test_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request(1);
  test_ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_MAIN
#endif // ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_TEST
