#ifndef phone_request_TEST
#define phone_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phone_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phone_request.h"
phone_request_t* instantiate_phone_request(int include_optional);



phone_request_t* instantiate_phone_request(int include_optional) {
  phone_request_t* phone_request = NULL;
  if (include_optional) {
    phone_request = phone_request_create(
      1,
      ezmax_api_definition__full_phone_request__"Local",
      "514",
      "990",
      "1516",
      "+15149901516",
      "123"
    );
  } else {
    phone_request = phone_request_create(
      1,
      ezmax_api_definition__full_phone_request__"Local",
      "514",
      "990",
      "1516",
      "+15149901516",
      "123"
    );
  }

  return phone_request;
}


#ifdef phone_request_MAIN

void test_phone_request(int include_optional) {
    phone_request_t* phone_request_1 = instantiate_phone_request(include_optional);

	cJSON* jsonphone_request_1 = phone_request_convertToJSON(phone_request_1);
	printf("phone_request :\n%s\n", cJSON_Print(jsonphone_request_1));
	phone_request_t* phone_request_2 = phone_request_parseFromJSON(jsonphone_request_1);
	cJSON* jsonphone_request_2 = phone_request_convertToJSON(phone_request_2);
	printf("repeating phone_request:\n%s\n", cJSON_Print(jsonphone_request_2));
}

int main() {
  test_phone_request(1);
  test_phone_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // phone_request_MAIN
#endif // phone_request_TEST
