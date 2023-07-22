#ifndef phone_request_compound_TEST
#define phone_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phone_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phone_request_compound.h"
phone_request_compound_t* instantiate_phone_request_compound(int include_optional);



phone_request_compound_t* instantiate_phone_request_compound(int include_optional) {
  phone_request_compound_t* phone_request_compound = NULL;
  if (include_optional) {
    phone_request_compound = phone_request_compound_create(
      1,
      1,
      ezmax_api_definition__full_phone_request_compound__"Local",
      "514",
      "990",
      "1516",
      "15149901516",
      "123",
      "+15149901516"
    );
  } else {
    phone_request_compound = phone_request_compound_create(
      1,
      1,
      ezmax_api_definition__full_phone_request_compound__"Local",
      "514",
      "990",
      "1516",
      "15149901516",
      "123",
      "+15149901516"
    );
  }

  return phone_request_compound;
}


#ifdef phone_request_compound_MAIN

void test_phone_request_compound(int include_optional) {
    phone_request_compound_t* phone_request_compound_1 = instantiate_phone_request_compound(include_optional);

	cJSON* jsonphone_request_compound_1 = phone_request_compound_convertToJSON(phone_request_compound_1);
	printf("phone_request_compound :\n%s\n", cJSON_Print(jsonphone_request_compound_1));
	phone_request_compound_t* phone_request_compound_2 = phone_request_compound_parseFromJSON(jsonphone_request_compound_1);
	cJSON* jsonphone_request_compound_2 = phone_request_compound_convertToJSON(phone_request_compound_2);
	printf("repeating phone_request_compound:\n%s\n", cJSON_Print(jsonphone_request_compound_2));
}

int main() {
  test_phone_request_compound(1);
  test_phone_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // phone_request_compound_MAIN
#endif // phone_request_compound_TEST
