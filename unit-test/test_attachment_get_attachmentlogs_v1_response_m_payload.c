#ifndef attachment_get_attachmentlogs_v1_response_m_payload_TEST
#define attachment_get_attachmentlogs_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attachment_get_attachmentlogs_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attachment_get_attachmentlogs_v1_response_m_payload.h"
attachment_get_attachmentlogs_v1_response_m_payload_t* instantiate_attachment_get_attachmentlogs_v1_response_m_payload(int include_optional);



attachment_get_attachmentlogs_v1_response_m_payload_t* instantiate_attachment_get_attachmentlogs_v1_response_m_payload(int include_optional) {
  attachment_get_attachmentlogs_v1_response_m_payload_t* attachment_get_attachmentlogs_v1_response_m_payload = NULL;
  if (include_optional) {
    attachment_get_attachmentlogs_v1_response_m_payload = attachment_get_attachmentlogs_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    attachment_get_attachmentlogs_v1_response_m_payload = attachment_get_attachmentlogs_v1_response_m_payload_create(
      list_createList()
    );
  }

  return attachment_get_attachmentlogs_v1_response_m_payload;
}


#ifdef attachment_get_attachmentlogs_v1_response_m_payload_MAIN

void test_attachment_get_attachmentlogs_v1_response_m_payload(int include_optional) {
    attachment_get_attachmentlogs_v1_response_m_payload_t* attachment_get_attachmentlogs_v1_response_m_payload_1 = instantiate_attachment_get_attachmentlogs_v1_response_m_payload(include_optional);

	cJSON* jsonattachment_get_attachmentlogs_v1_response_m_payload_1 = attachment_get_attachmentlogs_v1_response_m_payload_convertToJSON(attachment_get_attachmentlogs_v1_response_m_payload_1);
	printf("attachment_get_attachmentlogs_v1_response_m_payload :\n%s\n", cJSON_Print(jsonattachment_get_attachmentlogs_v1_response_m_payload_1));
	attachment_get_attachmentlogs_v1_response_m_payload_t* attachment_get_attachmentlogs_v1_response_m_payload_2 = attachment_get_attachmentlogs_v1_response_m_payload_parseFromJSON(jsonattachment_get_attachmentlogs_v1_response_m_payload_1);
	cJSON* jsonattachment_get_attachmentlogs_v1_response_m_payload_2 = attachment_get_attachmentlogs_v1_response_m_payload_convertToJSON(attachment_get_attachmentlogs_v1_response_m_payload_2);
	printf("repeating attachment_get_attachmentlogs_v1_response_m_payload:\n%s\n", cJSON_Print(jsonattachment_get_attachmentlogs_v1_response_m_payload_2));
}

int main() {
  test_attachment_get_attachmentlogs_v1_response_m_payload(1);
  test_attachment_get_attachmentlogs_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // attachment_get_attachmentlogs_v1_response_m_payload_MAIN
#endif // attachment_get_attachmentlogs_v1_response_m_payload_TEST
