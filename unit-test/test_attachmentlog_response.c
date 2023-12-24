#ifndef attachmentlog_response_TEST
#define attachmentlog_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attachmentlog_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attachmentlog_response.h"
attachmentlog_response_t* instantiate_attachmentlog_response(int include_optional);



attachmentlog_response_t* instantiate_attachmentlog_response(int include_optional) {
  attachmentlog_response_t* attachmentlog_response = NULL;
  if (include_optional) {
    attachmentlog_response = attachmentlog_response_create(
      1,
      70,
      "2020-12-31 23:59:59",
      ezmax_api_definition__full_attachmentlog_response__"AutoValidation",
      "System"
    );
  } else {
    attachmentlog_response = attachmentlog_response_create(
      1,
      70,
      "2020-12-31 23:59:59",
      ezmax_api_definition__full_attachmentlog_response__"AutoValidation",
      "System"
    );
  }

  return attachmentlog_response;
}


#ifdef attachmentlog_response_MAIN

void test_attachmentlog_response(int include_optional) {
    attachmentlog_response_t* attachmentlog_response_1 = instantiate_attachmentlog_response(include_optional);

	cJSON* jsonattachmentlog_response_1 = attachmentlog_response_convertToJSON(attachmentlog_response_1);
	printf("attachmentlog_response :\n%s\n", cJSON_Print(jsonattachmentlog_response_1));
	attachmentlog_response_t* attachmentlog_response_2 = attachmentlog_response_parseFromJSON(jsonattachmentlog_response_1);
	cJSON* jsonattachmentlog_response_2 = attachmentlog_response_convertToJSON(attachmentlog_response_2);
	printf("repeating attachmentlog_response:\n%s\n", cJSON_Print(jsonattachmentlog_response_2));
}

int main() {
  test_attachmentlog_response(1);
  test_attachmentlog_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // attachmentlog_response_MAIN
#endif // attachmentlog_response_TEST
