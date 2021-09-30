#ifndef custom_form_data_document_response_TEST
#define custom_form_data_document_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_form_data_document_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_form_data_document_response.h"
custom_form_data_document_response_t* instantiate_custom_form_data_document_response(int include_optional);



custom_form_data_document_response_t* instantiate_custom_form_data_document_response(int include_optional) {
  custom_form_data_document_response_t* custom_form_data_document_response = NULL;
  if (include_optional) {
    custom_form_data_document_response = custom_form_data_document_response_create(
      97,
      33,
      "Contract #123",
      "2020-12-31 23:59:59",
      list_create()
    );
  } else {
    custom_form_data_document_response = custom_form_data_document_response_create(
      97,
      33,
      "Contract #123",
      "2020-12-31 23:59:59",
      list_create()
    );
  }

  return custom_form_data_document_response;
}


#ifdef custom_form_data_document_response_MAIN

void test_custom_form_data_document_response(int include_optional) {
    custom_form_data_document_response_t* custom_form_data_document_response_1 = instantiate_custom_form_data_document_response(include_optional);

	cJSON* jsoncustom_form_data_document_response_1 = custom_form_data_document_response_convertToJSON(custom_form_data_document_response_1);
	printf("custom_form_data_document_response :\n%s\n", cJSON_Print(jsoncustom_form_data_document_response_1));
	custom_form_data_document_response_t* custom_form_data_document_response_2 = custom_form_data_document_response_parseFromJSON(jsoncustom_form_data_document_response_1);
	cJSON* jsoncustom_form_data_document_response_2 = custom_form_data_document_response_convertToJSON(custom_form_data_document_response_2);
	printf("repeating custom_form_data_document_response:\n%s\n", cJSON_Print(jsoncustom_form_data_document_response_2));
}

int main() {
  test_custom_form_data_document_response(1);
  test_custom_form_data_document_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_form_data_document_response_MAIN
#endif // custom_form_data_document_response_TEST
