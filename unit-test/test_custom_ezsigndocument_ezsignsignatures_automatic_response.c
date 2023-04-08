#ifndef custom_ezsigndocument_ezsignsignatures_automatic_response_TEST
#define custom_ezsigndocument_ezsignsignatures_automatic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsigndocument_ezsignsignatures_automatic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsigndocument_ezsignsignatures_automatic_response.h"
custom_ezsigndocument_ezsignsignatures_automatic_response_t* instantiate_custom_ezsigndocument_ezsignsignatures_automatic_response(int include_optional);



custom_ezsigndocument_ezsignsignatures_automatic_response_t* instantiate_custom_ezsigndocument_ezsignsignatures_automatic_response(int include_optional) {
  custom_ezsigndocument_ezsignsignatures_automatic_response_t* custom_ezsigndocument_ezsignsignatures_automatic_response = NULL;
  if (include_optional) {
    custom_ezsigndocument_ezsignsignatures_automatic_response = custom_ezsigndocument_ezsignsignatures_automatic_response_create(
      97,
      "Contract #123",
      list_createList()
    );
  } else {
    custom_ezsigndocument_ezsignsignatures_automatic_response = custom_ezsigndocument_ezsignsignatures_automatic_response_create(
      97,
      "Contract #123",
      list_createList()
    );
  }

  return custom_ezsigndocument_ezsignsignatures_automatic_response;
}


#ifdef custom_ezsigndocument_ezsignsignatures_automatic_response_MAIN

void test_custom_ezsigndocument_ezsignsignatures_automatic_response(int include_optional) {
    custom_ezsigndocument_ezsignsignatures_automatic_response_t* custom_ezsigndocument_ezsignsignatures_automatic_response_1 = instantiate_custom_ezsigndocument_ezsignsignatures_automatic_response(include_optional);

	cJSON* jsoncustom_ezsigndocument_ezsignsignatures_automatic_response_1 = custom_ezsigndocument_ezsignsignatures_automatic_response_convertToJSON(custom_ezsigndocument_ezsignsignatures_automatic_response_1);
	printf("custom_ezsigndocument_ezsignsignatures_automatic_response :\n%s\n", cJSON_Print(jsoncustom_ezsigndocument_ezsignsignatures_automatic_response_1));
	custom_ezsigndocument_ezsignsignatures_automatic_response_t* custom_ezsigndocument_ezsignsignatures_automatic_response_2 = custom_ezsigndocument_ezsignsignatures_automatic_response_parseFromJSON(jsoncustom_ezsigndocument_ezsignsignatures_automatic_response_1);
	cJSON* jsoncustom_ezsigndocument_ezsignsignatures_automatic_response_2 = custom_ezsigndocument_ezsignsignatures_automatic_response_convertToJSON(custom_ezsigndocument_ezsignsignatures_automatic_response_2);
	printf("repeating custom_ezsigndocument_ezsignsignatures_automatic_response:\n%s\n", cJSON_Print(jsoncustom_ezsigndocument_ezsignsignatures_automatic_response_2));
}

int main() {
  test_custom_ezsigndocument_ezsignsignatures_automatic_response(1);
  test_custom_ezsigndocument_ezsignsignatures_automatic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsigndocument_ezsignsignatures_automatic_response_MAIN
#endif // custom_ezsigndocument_ezsignsignatures_automatic_response_TEST
