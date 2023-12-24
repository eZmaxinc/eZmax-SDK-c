#ifndef attachmentlog_response_compound_TEST
#define attachmentlog_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attachmentlog_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attachmentlog_response_compound.h"
attachmentlog_response_compound_t* instantiate_attachmentlog_response_compound(int include_optional);



attachmentlog_response_compound_t* instantiate_attachmentlog_response_compound(int include_optional) {
  attachmentlog_response_compound_t* attachmentlog_response_compound = NULL;
  if (include_optional) {
    attachmentlog_response_compound = attachmentlog_response_compound_create(
      1,
      70,
      "2020-12-31 23:59:59",
      ezmax_api_definition__full_attachmentlog_response_compound__"AutoValidation",
      "System"
    );
  } else {
    attachmentlog_response_compound = attachmentlog_response_compound_create(
      1,
      70,
      "2020-12-31 23:59:59",
      ezmax_api_definition__full_attachmentlog_response_compound__"AutoValidation",
      "System"
    );
  }

  return attachmentlog_response_compound;
}


#ifdef attachmentlog_response_compound_MAIN

void test_attachmentlog_response_compound(int include_optional) {
    attachmentlog_response_compound_t* attachmentlog_response_compound_1 = instantiate_attachmentlog_response_compound(include_optional);

	cJSON* jsonattachmentlog_response_compound_1 = attachmentlog_response_compound_convertToJSON(attachmentlog_response_compound_1);
	printf("attachmentlog_response_compound :\n%s\n", cJSON_Print(jsonattachmentlog_response_compound_1));
	attachmentlog_response_compound_t* attachmentlog_response_compound_2 = attachmentlog_response_compound_parseFromJSON(jsonattachmentlog_response_compound_1);
	cJSON* jsonattachmentlog_response_compound_2 = attachmentlog_response_compound_convertToJSON(attachmentlog_response_compound_2);
	printf("repeating attachmentlog_response_compound:\n%s\n", cJSON_Print(jsonattachmentlog_response_compound_2));
}

int main() {
  test_attachmentlog_response_compound(1);
  test_attachmentlog_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // attachmentlog_response_compound_MAIN
#endif // attachmentlog_response_compound_TEST
