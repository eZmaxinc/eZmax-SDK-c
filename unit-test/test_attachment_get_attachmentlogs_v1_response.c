#ifndef attachment_get_attachmentlogs_v1_response_TEST
#define attachment_get_attachmentlogs_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attachment_get_attachmentlogs_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attachment_get_attachmentlogs_v1_response.h"
attachment_get_attachmentlogs_v1_response_t* instantiate_attachment_get_attachmentlogs_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_attachment_get_attachmentlogs_v1_response_m_payload.c"


attachment_get_attachmentlogs_v1_response_t* instantiate_attachment_get_attachmentlogs_v1_response(int include_optional) {
  attachment_get_attachmentlogs_v1_response_t* attachment_get_attachmentlogs_v1_response = NULL;
  if (include_optional) {
    attachment_get_attachmentlogs_v1_response = attachment_get_attachmentlogs_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_attachment_get_attachmentlogs_v1_response_m_payload(0)
    );
  } else {
    attachment_get_attachmentlogs_v1_response = attachment_get_attachmentlogs_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return attachment_get_attachmentlogs_v1_response;
}


#ifdef attachment_get_attachmentlogs_v1_response_MAIN

void test_attachment_get_attachmentlogs_v1_response(int include_optional) {
    attachment_get_attachmentlogs_v1_response_t* attachment_get_attachmentlogs_v1_response_1 = instantiate_attachment_get_attachmentlogs_v1_response(include_optional);

	cJSON* jsonattachment_get_attachmentlogs_v1_response_1 = attachment_get_attachmentlogs_v1_response_convertToJSON(attachment_get_attachmentlogs_v1_response_1);
	printf("attachment_get_attachmentlogs_v1_response :\n%s\n", cJSON_Print(jsonattachment_get_attachmentlogs_v1_response_1));
	attachment_get_attachmentlogs_v1_response_t* attachment_get_attachmentlogs_v1_response_2 = attachment_get_attachmentlogs_v1_response_parseFromJSON(jsonattachment_get_attachmentlogs_v1_response_1);
	cJSON* jsonattachment_get_attachmentlogs_v1_response_2 = attachment_get_attachmentlogs_v1_response_convertToJSON(attachment_get_attachmentlogs_v1_response_2);
	printf("repeating attachment_get_attachmentlogs_v1_response:\n%s\n", cJSON_Print(jsonattachment_get_attachmentlogs_v1_response_2));
}

int main() {
  test_attachment_get_attachmentlogs_v1_response(1);
  test_attachment_get_attachmentlogs_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // attachment_get_attachmentlogs_v1_response_MAIN
#endif // attachment_get_attachmentlogs_v1_response_TEST
