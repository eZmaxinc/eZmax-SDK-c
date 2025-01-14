#ifndef custom_apikeyfederation_TEST
#define custom_apikeyfederation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_apikeyfederation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_apikeyfederation.h"
custom_apikeyfederation_t* instantiate_custom_apikeyfederation(int include_optional);



custom_apikeyfederation_t* instantiate_custom_apikeyfederation(int include_optional) {
  custom_apikeyfederation_t* custom_apikeyfederation = NULL;
  if (include_optional) {
    custom_apikeyfederation = custom_apikeyfederation_create(
      "a",
      "f514d7a0008a9f6dee03e60734624d04"
    );
  } else {
    custom_apikeyfederation = custom_apikeyfederation_create(
      "a",
      "f514d7a0008a9f6dee03e60734624d04"
    );
  }

  return custom_apikeyfederation;
}


#ifdef custom_apikeyfederation_MAIN

void test_custom_apikeyfederation(int include_optional) {
    custom_apikeyfederation_t* custom_apikeyfederation_1 = instantiate_custom_apikeyfederation(include_optional);

	cJSON* jsoncustom_apikeyfederation_1 = custom_apikeyfederation_convertToJSON(custom_apikeyfederation_1);
	printf("custom_apikeyfederation :\n%s\n", cJSON_Print(jsoncustom_apikeyfederation_1));
	custom_apikeyfederation_t* custom_apikeyfederation_2 = custom_apikeyfederation_parseFromJSON(jsoncustom_apikeyfederation_1);
	cJSON* jsoncustom_apikeyfederation_2 = custom_apikeyfederation_convertToJSON(custom_apikeyfederation_2);
	printf("repeating custom_apikeyfederation:\n%s\n", cJSON_Print(jsoncustom_apikeyfederation_2));
}

int main() {
  test_custom_apikeyfederation(1);
  test_custom_apikeyfederation(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_apikeyfederation_MAIN
#endif // custom_apikeyfederation_TEST
