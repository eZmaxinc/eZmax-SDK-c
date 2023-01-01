#ifndef phone_response_TEST
#define phone_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phone_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phone_response.h"
phone_response_t* instantiate_phone_response(int include_optional);



phone_response_t* instantiate_phone_response(int include_optional) {
  phone_response_t* phone_response = NULL;
  if (include_optional) {
    phone_response = phone_response_create(
      1,
      1,
      ezmax_api_definition__full_phone_response__"Local",
      "514",
      "990",
      "1516",
      "123",
      "15149901516"
    );
  } else {
    phone_response = phone_response_create(
      1,
      1,
      ezmax_api_definition__full_phone_response__"Local",
      "514",
      "990",
      "1516",
      "123",
      "15149901516"
    );
  }

  return phone_response;
}


#ifdef phone_response_MAIN

void test_phone_response(int include_optional) {
    phone_response_t* phone_response_1 = instantiate_phone_response(include_optional);

	cJSON* jsonphone_response_1 = phone_response_convertToJSON(phone_response_1);
	printf("phone_response :\n%s\n", cJSON_Print(jsonphone_response_1));
	phone_response_t* phone_response_2 = phone_response_parseFromJSON(jsonphone_response_1);
	cJSON* jsonphone_response_2 = phone_response_convertToJSON(phone_response_2);
	printf("repeating phone_response:\n%s\n", cJSON_Print(jsonphone_response_2));
}

int main() {
  test_phone_response(1);
  test_phone_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // phone_response_MAIN
#endif // phone_response_TEST
