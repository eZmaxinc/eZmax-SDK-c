#ifndef attachment_response_compound_TEST
#define attachment_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attachment_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attachment_response_compound.h"
attachment_response_compound_t* instantiate_attachment_response_compound(int include_optional);

#include "test_common_audit.c"


attachment_response_compound_t* instantiate_attachment_response_compound(int include_optional) {
  attachment_response_compound_t* attachment_response_compound = NULL;
  if (include_optional) {
    attachment_response_compound = attachment_response_compound_create(
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
      ezmax_api_definition__full_attachment_response_compound__"Adjustment",
      "Document.pdf",
      ezmax_api_definition__full_attachment_response_compound__"All",
      70,
      ezmax_api_definition__full_attachment_response_compound__"Other",
      277465200,
      65,
      "2cb29026e8a93c930e71598579400db6",
      false,
      true,
      ezmax_api_definition__full_attachment_response_compound__"No",
      "Unreadable",
      70,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    attachment_response_compound = attachment_response_compound_create(
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
      ezmax_api_definition__full_attachment_response_compound__"Adjustment",
      "Document.pdf",
      ezmax_api_definition__full_attachment_response_compound__"All",
      70,
      ezmax_api_definition__full_attachment_response_compound__"Other",
      277465200,
      65,
      "2cb29026e8a93c930e71598579400db6",
      false,
      true,
      ezmax_api_definition__full_attachment_response_compound__"No",
      "Unreadable",
      70,
      NULL
    );
  }

  return attachment_response_compound;
}


#ifdef attachment_response_compound_MAIN

void test_attachment_response_compound(int include_optional) {
    attachment_response_compound_t* attachment_response_compound_1 = instantiate_attachment_response_compound(include_optional);

	cJSON* jsonattachment_response_compound_1 = attachment_response_compound_convertToJSON(attachment_response_compound_1);
	printf("attachment_response_compound :\n%s\n", cJSON_Print(jsonattachment_response_compound_1));
	attachment_response_compound_t* attachment_response_compound_2 = attachment_response_compound_parseFromJSON(jsonattachment_response_compound_1);
	cJSON* jsonattachment_response_compound_2 = attachment_response_compound_convertToJSON(attachment_response_compound_2);
	printf("repeating attachment_response_compound:\n%s\n", cJSON_Print(jsonattachment_response_compound_2));
}

int main() {
  test_attachment_response_compound(1);
  test_attachment_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // attachment_response_compound_MAIN
#endif // attachment_response_compound_TEST
