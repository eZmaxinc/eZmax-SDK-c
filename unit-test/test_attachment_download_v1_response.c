#ifndef attachment_download_v1_response_TEST
#define attachment_download_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define attachment_download_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/attachment_download_v1_response.h"
attachment_download_v1_response_t* instantiate_attachment_download_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


attachment_download_v1_response_t* instantiate_attachment_download_v1_response(int include_optional) {
  attachment_download_v1_response_t* attachment_download_v1_response = NULL;
  if (include_optional) {
    attachment_download_v1_response = attachment_download_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    attachment_download_v1_response = attachment_download_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return attachment_download_v1_response;
}


#ifdef attachment_download_v1_response_MAIN

void test_attachment_download_v1_response(int include_optional) {
    attachment_download_v1_response_t* attachment_download_v1_response_1 = instantiate_attachment_download_v1_response(include_optional);

	cJSON* jsonattachment_download_v1_response_1 = attachment_download_v1_response_convertToJSON(attachment_download_v1_response_1);
	printf("attachment_download_v1_response :\n%s\n", cJSON_Print(jsonattachment_download_v1_response_1));
	attachment_download_v1_response_t* attachment_download_v1_response_2 = attachment_download_v1_response_parseFromJSON(jsonattachment_download_v1_response_1);
	cJSON* jsonattachment_download_v1_response_2 = attachment_download_v1_response_convertToJSON(attachment_download_v1_response_2);
	printf("repeating attachment_download_v1_response:\n%s\n", cJSON_Print(jsonattachment_download_v1_response_2));
}

int main() {
  test_attachment_download_v1_response(1);
  test_attachment_download_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // attachment_download_v1_response_MAIN
#endif // attachment_download_v1_response_TEST
