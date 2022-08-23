#ifndef webhook_edit_object_v1_response_TEST
#define webhook_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_edit_object_v1_response.h"
webhook_edit_object_v1_response_t* instantiate_webhook_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


webhook_edit_object_v1_response_t* instantiate_webhook_edit_object_v1_response(int include_optional) {
  webhook_edit_object_v1_response_t* webhook_edit_object_v1_response = NULL;
  if (include_optional) {
    webhook_edit_object_v1_response = webhook_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    webhook_edit_object_v1_response = webhook_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return webhook_edit_object_v1_response;
}


#ifdef webhook_edit_object_v1_response_MAIN

void test_webhook_edit_object_v1_response(int include_optional) {
    webhook_edit_object_v1_response_t* webhook_edit_object_v1_response_1 = instantiate_webhook_edit_object_v1_response(include_optional);

	cJSON* jsonwebhook_edit_object_v1_response_1 = webhook_edit_object_v1_response_convertToJSON(webhook_edit_object_v1_response_1);
	printf("webhook_edit_object_v1_response :\n%s\n", cJSON_Print(jsonwebhook_edit_object_v1_response_1));
	webhook_edit_object_v1_response_t* webhook_edit_object_v1_response_2 = webhook_edit_object_v1_response_parseFromJSON(jsonwebhook_edit_object_v1_response_1);
	cJSON* jsonwebhook_edit_object_v1_response_2 = webhook_edit_object_v1_response_convertToJSON(webhook_edit_object_v1_response_2);
	printf("repeating webhook_edit_object_v1_response:\n%s\n", cJSON_Print(jsonwebhook_edit_object_v1_response_2));
}

int main() {
  test_webhook_edit_object_v1_response(1);
  test_webhook_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_edit_object_v1_response_MAIN
#endif // webhook_edit_object_v1_response_TEST
