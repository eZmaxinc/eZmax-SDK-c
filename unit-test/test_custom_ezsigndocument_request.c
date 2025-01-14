#ifndef custom_ezsigndocument_request_TEST
#define custom_ezsigndocument_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsigndocument_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsigndocument_request.h"
custom_ezsigndocument_request_t* instantiate_custom_ezsigndocument_request(int include_optional);



custom_ezsigndocument_request_t* instantiate_custom_ezsigndocument_request(int include_optional) {
  custom_ezsigndocument_request_t* custom_ezsigndocument_request = NULL;
  if (include_optional) {
    custom_ezsigndocument_request = custom_ezsigndocument_request_create(
      97,
      list_createList()
    );
  } else {
    custom_ezsigndocument_request = custom_ezsigndocument_request_create(
      97,
      list_createList()
    );
  }

  return custom_ezsigndocument_request;
}


#ifdef custom_ezsigndocument_request_MAIN

void test_custom_ezsigndocument_request(int include_optional) {
    custom_ezsigndocument_request_t* custom_ezsigndocument_request_1 = instantiate_custom_ezsigndocument_request(include_optional);

	cJSON* jsoncustom_ezsigndocument_request_1 = custom_ezsigndocument_request_convertToJSON(custom_ezsigndocument_request_1);
	printf("custom_ezsigndocument_request :\n%s\n", cJSON_Print(jsoncustom_ezsigndocument_request_1));
	custom_ezsigndocument_request_t* custom_ezsigndocument_request_2 = custom_ezsigndocument_request_parseFromJSON(jsoncustom_ezsigndocument_request_1);
	cJSON* jsoncustom_ezsigndocument_request_2 = custom_ezsigndocument_request_convertToJSON(custom_ezsigndocument_request_2);
	printf("repeating custom_ezsigndocument_request:\n%s\n", cJSON_Print(jsoncustom_ezsigndocument_request_2));
}

int main() {
  test_custom_ezsigndocument_request(1);
  test_custom_ezsigndocument_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsigndocument_request_MAIN
#endif // custom_ezsigndocument_request_TEST
