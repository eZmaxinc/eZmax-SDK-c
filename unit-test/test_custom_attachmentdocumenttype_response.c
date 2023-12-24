#ifndef custom_attachmentdocumenttype_response_TEST
#define custom_attachmentdocumenttype_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_attachmentdocumenttype_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_attachmentdocumenttype_response.h"
custom_attachmentdocumenttype_response_t* instantiate_custom_attachmentdocumenttype_response(int include_optional);



custom_attachmentdocumenttype_response_t* instantiate_custom_attachmentdocumenttype_response(int include_optional) {
  custom_attachmentdocumenttype_response_t* custom_attachmentdocumenttype_response = NULL;
  if (include_optional) {
    custom_attachmentdocumenttype_response = custom_attachmentdocumenttype_response_create(
      ezmax_api_definition__full_custom_attachmentdocumenttype_response__"Adjustment",
      list_createList()
    );
  } else {
    custom_attachmentdocumenttype_response = custom_attachmentdocumenttype_response_create(
      ezmax_api_definition__full_custom_attachmentdocumenttype_response__"Adjustment",
      list_createList()
    );
  }

  return custom_attachmentdocumenttype_response;
}


#ifdef custom_attachmentdocumenttype_response_MAIN

void test_custom_attachmentdocumenttype_response(int include_optional) {
    custom_attachmentdocumenttype_response_t* custom_attachmentdocumenttype_response_1 = instantiate_custom_attachmentdocumenttype_response(include_optional);

	cJSON* jsoncustom_attachmentdocumenttype_response_1 = custom_attachmentdocumenttype_response_convertToJSON(custom_attachmentdocumenttype_response_1);
	printf("custom_attachmentdocumenttype_response :\n%s\n", cJSON_Print(jsoncustom_attachmentdocumenttype_response_1));
	custom_attachmentdocumenttype_response_t* custom_attachmentdocumenttype_response_2 = custom_attachmentdocumenttype_response_parseFromJSON(jsoncustom_attachmentdocumenttype_response_1);
	cJSON* jsoncustom_attachmentdocumenttype_response_2 = custom_attachmentdocumenttype_response_convertToJSON(custom_attachmentdocumenttype_response_2);
	printf("repeating custom_attachmentdocumenttype_response:\n%s\n", cJSON_Print(jsoncustom_attachmentdocumenttype_response_2));
}

int main() {
  test_custom_attachmentdocumenttype_response(1);
  test_custom_attachmentdocumenttype_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_attachmentdocumenttype_response_MAIN
#endif // custom_attachmentdocumenttype_response_TEST
