#ifndef phone_request_v2_TEST
#define phone_request_v2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phone_request_v2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phone_request_v2.h"
phone_request_v2_t* instantiate_phone_request_v2(int include_optional);



phone_request_v2_t* instantiate_phone_request_v2(int include_optional) {
  phone_request_v2_t* phone_request_v2 = NULL;
  if (include_optional) {
    phone_request_v2 = phone_request_v2_create(
      1,
      1,
      "123",
      "+15149901516"
    );
  } else {
    phone_request_v2 = phone_request_v2_create(
      1,
      1,
      "123",
      "+15149901516"
    );
  }

  return phone_request_v2;
}


#ifdef phone_request_v2_MAIN

void test_phone_request_v2(int include_optional) {
    phone_request_v2_t* phone_request_v2_1 = instantiate_phone_request_v2(include_optional);

	cJSON* jsonphone_request_v2_1 = phone_request_v2_convertToJSON(phone_request_v2_1);
	printf("phone_request_v2 :\n%s\n", cJSON_Print(jsonphone_request_v2_1));
	phone_request_v2_t* phone_request_v2_2 = phone_request_v2_parseFromJSON(jsonphone_request_v2_1);
	cJSON* jsonphone_request_v2_2 = phone_request_v2_convertToJSON(phone_request_v2_2);
	printf("repeating phone_request_v2:\n%s\n", cJSON_Print(jsonphone_request_v2_2));
}

int main() {
  test_phone_request_v2(1);
  test_phone_request_v2(0);

  printf("Hello world \n");
  return 0;
}

#endif // phone_request_v2_MAIN
#endif // phone_request_v2_TEST
