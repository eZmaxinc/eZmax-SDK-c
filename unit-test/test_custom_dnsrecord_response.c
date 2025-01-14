#ifndef custom_dnsrecord_response_TEST
#define custom_dnsrecord_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_dnsrecord_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_dnsrecord_response.h"
custom_dnsrecord_response_t* instantiate_custom_dnsrecord_response(int include_optional);



custom_dnsrecord_response_t* instantiate_custom_dnsrecord_response(int include_optional) {
  custom_dnsrecord_response_t* custom_dnsrecord_response = NULL;
  if (include_optional) {
    custom_dnsrecord_response = custom_dnsrecord_response_create(
      ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_CNAME,
      ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_Match,
      "0",
      "0",
      "0",
      1
    );
  } else {
    custom_dnsrecord_response = custom_dnsrecord_response_create(
      ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_CNAME,
      ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_Match,
      "0",
      "0",
      "0",
      1
    );
  }

  return custom_dnsrecord_response;
}


#ifdef custom_dnsrecord_response_MAIN

void test_custom_dnsrecord_response(int include_optional) {
    custom_dnsrecord_response_t* custom_dnsrecord_response_1 = instantiate_custom_dnsrecord_response(include_optional);

	cJSON* jsoncustom_dnsrecord_response_1 = custom_dnsrecord_response_convertToJSON(custom_dnsrecord_response_1);
	printf("custom_dnsrecord_response :\n%s\n", cJSON_Print(jsoncustom_dnsrecord_response_1));
	custom_dnsrecord_response_t* custom_dnsrecord_response_2 = custom_dnsrecord_response_parseFromJSON(jsoncustom_dnsrecord_response_1);
	cJSON* jsoncustom_dnsrecord_response_2 = custom_dnsrecord_response_convertToJSON(custom_dnsrecord_response_2);
	printf("repeating custom_dnsrecord_response:\n%s\n", cJSON_Print(jsoncustom_dnsrecord_response_2));
}

int main() {
  test_custom_dnsrecord_response(1);
  test_custom_dnsrecord_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_dnsrecord_response_MAIN
#endif // custom_dnsrecord_response_TEST
