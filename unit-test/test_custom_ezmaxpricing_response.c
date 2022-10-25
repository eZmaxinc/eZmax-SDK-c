#ifndef custom_ezmaxpricing_response_TEST
#define custom_ezmaxpricing_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezmaxpricing_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezmaxpricing_response.h"
custom_ezmaxpricing_response_t* instantiate_custom_ezmaxpricing_response(int include_optional);



custom_ezmaxpricing_response_t* instantiate_custom_ezmaxpricing_response(int include_optional) {
  custom_ezmaxpricing_response_t* custom_ezmaxpricing_response = NULL;
  if (include_optional) {
    custom_ezmaxpricing_response = custom_ezmaxpricing_response_create(
      28,
      "2020-12-31",
      "2020-12-31"
    );
  } else {
    custom_ezmaxpricing_response = custom_ezmaxpricing_response_create(
      28,
      "2020-12-31",
      "2020-12-31"
    );
  }

  return custom_ezmaxpricing_response;
}


#ifdef custom_ezmaxpricing_response_MAIN

void test_custom_ezmaxpricing_response(int include_optional) {
    custom_ezmaxpricing_response_t* custom_ezmaxpricing_response_1 = instantiate_custom_ezmaxpricing_response(include_optional);

	cJSON* jsoncustom_ezmaxpricing_response_1 = custom_ezmaxpricing_response_convertToJSON(custom_ezmaxpricing_response_1);
	printf("custom_ezmaxpricing_response :\n%s\n", cJSON_Print(jsoncustom_ezmaxpricing_response_1));
	custom_ezmaxpricing_response_t* custom_ezmaxpricing_response_2 = custom_ezmaxpricing_response_parseFromJSON(jsoncustom_ezmaxpricing_response_1);
	cJSON* jsoncustom_ezmaxpricing_response_2 = custom_ezmaxpricing_response_convertToJSON(custom_ezmaxpricing_response_2);
	printf("repeating custom_ezmaxpricing_response:\n%s\n", cJSON_Print(jsoncustom_ezmaxpricing_response_2));
}

int main() {
  test_custom_ezmaxpricing_response(1);
  test_custom_ezmaxpricing_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezmaxpricing_response_MAIN
#endif // custom_ezmaxpricing_response_TEST
