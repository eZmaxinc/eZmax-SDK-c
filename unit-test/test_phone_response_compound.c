#ifndef phone_response_compound_TEST
#define phone_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phone_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phone_response_compound.h"
phone_response_compound_t* instantiate_phone_response_compound(int include_optional);



phone_response_compound_t* instantiate_phone_response_compound(int include_optional) {
  phone_response_compound_t* phone_response_compound = NULL;
  if (include_optional) {
    phone_response_compound = phone_response_compound_create(
      1,
      1,
      ezmax_api_definition__full_phone_response_compound__"Local",
      "+15149901516",
      "123"
    );
  } else {
    phone_response_compound = phone_response_compound_create(
      1,
      1,
      ezmax_api_definition__full_phone_response_compound__"Local",
      "+15149901516",
      "123"
    );
  }

  return phone_response_compound;
}


#ifdef phone_response_compound_MAIN

void test_phone_response_compound(int include_optional) {
    phone_response_compound_t* phone_response_compound_1 = instantiate_phone_response_compound(include_optional);

	cJSON* jsonphone_response_compound_1 = phone_response_compound_convertToJSON(phone_response_compound_1);
	printf("phone_response_compound :\n%s\n", cJSON_Print(jsonphone_response_compound_1));
	phone_response_compound_t* phone_response_compound_2 = phone_response_compound_parseFromJSON(jsonphone_response_compound_1);
	cJSON* jsonphone_response_compound_2 = phone_response_compound_convertToJSON(phone_response_compound_2);
	printf("repeating phone_response_compound:\n%s\n", cJSON_Print(jsonphone_response_compound_2));
}

int main() {
  test_phone_response_compound(1);
  test_phone_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // phone_response_compound_MAIN
#endif // phone_response_compound_TEST
