#ifndef custom_communicationsender_request_TEST
#define custom_communicationsender_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_communicationsender_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_communicationsender_request.h"
custom_communicationsender_request_t* instantiate_custom_communicationsender_request(int include_optional);



custom_communicationsender_request_t* instantiate_custom_communicationsender_request(int include_optional) {
  custom_communicationsender_request_t* custom_communicationsender_request = NULL;
  if (include_optional) {
    custom_communicationsender_request = custom_communicationsender_request_create(
      1,
      26,
      47,
      70
    );
  } else {
    custom_communicationsender_request = custom_communicationsender_request_create(
      1,
      26,
      47,
      70
    );
  }

  return custom_communicationsender_request;
}


#ifdef custom_communicationsender_request_MAIN

void test_custom_communicationsender_request(int include_optional) {
    custom_communicationsender_request_t* custom_communicationsender_request_1 = instantiate_custom_communicationsender_request(include_optional);

	cJSON* jsoncustom_communicationsender_request_1 = custom_communicationsender_request_convertToJSON(custom_communicationsender_request_1);
	printf("custom_communicationsender_request :\n%s\n", cJSON_Print(jsoncustom_communicationsender_request_1));
	custom_communicationsender_request_t* custom_communicationsender_request_2 = custom_communicationsender_request_parseFromJSON(jsoncustom_communicationsender_request_1);
	cJSON* jsoncustom_communicationsender_request_2 = custom_communicationsender_request_convertToJSON(custom_communicationsender_request_2);
	printf("repeating custom_communicationsender_request:\n%s\n", cJSON_Print(jsoncustom_communicationsender_request_2));
}

int main() {
  test_custom_communicationsender_request(1);
  test_custom_communicationsender_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_communicationsender_request_MAIN
#endif // custom_communicationsender_request_TEST
