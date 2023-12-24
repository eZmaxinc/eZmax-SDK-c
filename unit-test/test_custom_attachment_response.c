#ifndef custom_attachment_response_TEST
#define custom_attachment_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_attachment_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_attachment_response.h"
custom_attachment_response_t* instantiate_custom_attachment_response(int include_optional);

#include "test_common_audit.c"
#include "test_attachment_response_compound.c"
#include "test_attachment_response_compound.c"


custom_attachment_response_t* instantiate_custom_attachment_response(int include_optional) {
  custom_attachment_response_t* custom_attachment_response = NULL;
  if (include_optional) {
    custom_attachment_response = custom_attachment_response_create(
      1,
      249,
      202,
      1,
      46,
      26,
      115,
      1,
      18,
      152,
      54,
      251,
      1262,
      31,
      1,
      238,
      170,
      97,
      217,
      17,
      2445,
      24,
      1,
      38,
      61,
      117,
      50,
      156,
      24,
      117,
      178,
      45,
      1,
      200,
      142,
      124,
      155,
      73,
      1,
      39,
      232,
      191,
      81,
      532,
      51,
      140,
      97,
      ezmax_api_definition__full_custom_attachment_response__"Adjustment",
      "Document.pdf",
      ezmax_api_definition__full_custom_attachment_response__"All",
      70,
      ezmax_api_definition__full_custom_attachment_response__"Other",
      277465200,
      65,
      "2cb29026e8a93c930e71598579400db6",
      false,
      true,
      ezmax_api_definition__full_custom_attachment_response__"No",
      "Unreadable",
      70,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
       // false, not to have infinite recursion
      instantiate_attachment_response_compound(0),
       // false, not to have infinite recursion
      instantiate_attachment_response_compound(0),
      list_createList(),
      list_createList()
    );
  } else {
    custom_attachment_response = custom_attachment_response_create(
      1,
      249,
      202,
      1,
      46,
      26,
      115,
      1,
      18,
      152,
      54,
      251,
      1262,
      31,
      1,
      238,
      170,
      97,
      217,
      17,
      2445,
      24,
      1,
      38,
      61,
      117,
      50,
      156,
      24,
      117,
      178,
      45,
      1,
      200,
      142,
      124,
      155,
      73,
      1,
      39,
      232,
      191,
      81,
      532,
      51,
      140,
      97,
      ezmax_api_definition__full_custom_attachment_response__"Adjustment",
      "Document.pdf",
      ezmax_api_definition__full_custom_attachment_response__"All",
      70,
      ezmax_api_definition__full_custom_attachment_response__"Other",
      277465200,
      65,
      "2cb29026e8a93c930e71598579400db6",
      false,
      true,
      ezmax_api_definition__full_custom_attachment_response__"No",
      "Unreadable",
      70,
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return custom_attachment_response;
}


#ifdef custom_attachment_response_MAIN

void test_custom_attachment_response(int include_optional) {
    custom_attachment_response_t* custom_attachment_response_1 = instantiate_custom_attachment_response(include_optional);

	cJSON* jsoncustom_attachment_response_1 = custom_attachment_response_convertToJSON(custom_attachment_response_1);
	printf("custom_attachment_response :\n%s\n", cJSON_Print(jsoncustom_attachment_response_1));
	custom_attachment_response_t* custom_attachment_response_2 = custom_attachment_response_parseFromJSON(jsoncustom_attachment_response_1);
	cJSON* jsoncustom_attachment_response_2 = custom_attachment_response_convertToJSON(custom_attachment_response_2);
	printf("repeating custom_attachment_response:\n%s\n", cJSON_Print(jsoncustom_attachment_response_2));
}

int main() {
  test_custom_attachment_response(1);
  test_custom_attachment_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_attachment_response_MAIN
#endif // custom_attachment_response_TEST
