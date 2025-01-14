#ifndef custom_apikey_TEST
#define custom_apikey_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_apikey_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_apikey.h"
custom_apikey_t* instantiate_custom_apikey(int include_optional);



custom_apikey_t* instantiate_custom_apikey(int include_optional) {
  custom_apikey_t* custom_apikey = NULL;
  if (include_optional) {
    custom_apikey = custom_apikey_create(
      "a",
      "f514d7a0008a9f6dee03e60734624d04"
    );
  } else {
    custom_apikey = custom_apikey_create(
      "a",
      "f514d7a0008a9f6dee03e60734624d04"
    );
  }

  return custom_apikey;
}


#ifdef custom_apikey_MAIN

void test_custom_apikey(int include_optional) {
    custom_apikey_t* custom_apikey_1 = instantiate_custom_apikey(include_optional);

	cJSON* jsoncustom_apikey_1 = custom_apikey_convertToJSON(custom_apikey_1);
	printf("custom_apikey :\n%s\n", cJSON_Print(jsoncustom_apikey_1));
	custom_apikey_t* custom_apikey_2 = custom_apikey_parseFromJSON(jsoncustom_apikey_1);
	cJSON* jsoncustom_apikey_2 = custom_apikey_convertToJSON(custom_apikey_2);
	printf("repeating custom_apikey:\n%s\n", cJSON_Print(jsoncustom_apikey_2));
}

int main() {
  test_custom_apikey(1);
  test_custom_apikey(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_apikey_MAIN
#endif // custom_apikey_TEST
