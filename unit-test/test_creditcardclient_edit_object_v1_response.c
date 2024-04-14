#ifndef creditcardclient_edit_object_v1_response_TEST
#define creditcardclient_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardclient_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardclient_edit_object_v1_response.h"
creditcardclient_edit_object_v1_response_t* instantiate_creditcardclient_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


creditcardclient_edit_object_v1_response_t* instantiate_creditcardclient_edit_object_v1_response(int include_optional) {
  creditcardclient_edit_object_v1_response_t* creditcardclient_edit_object_v1_response = NULL;
  if (include_optional) {
    creditcardclient_edit_object_v1_response = creditcardclient_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    creditcardclient_edit_object_v1_response = creditcardclient_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return creditcardclient_edit_object_v1_response;
}


#ifdef creditcardclient_edit_object_v1_response_MAIN

void test_creditcardclient_edit_object_v1_response(int include_optional) {
    creditcardclient_edit_object_v1_response_t* creditcardclient_edit_object_v1_response_1 = instantiate_creditcardclient_edit_object_v1_response(include_optional);

	cJSON* jsoncreditcardclient_edit_object_v1_response_1 = creditcardclient_edit_object_v1_response_convertToJSON(creditcardclient_edit_object_v1_response_1);
	printf("creditcardclient_edit_object_v1_response :\n%s\n", cJSON_Print(jsoncreditcardclient_edit_object_v1_response_1));
	creditcardclient_edit_object_v1_response_t* creditcardclient_edit_object_v1_response_2 = creditcardclient_edit_object_v1_response_parseFromJSON(jsoncreditcardclient_edit_object_v1_response_1);
	cJSON* jsoncreditcardclient_edit_object_v1_response_2 = creditcardclient_edit_object_v1_response_convertToJSON(creditcardclient_edit_object_v1_response_2);
	printf("repeating creditcardclient_edit_object_v1_response:\n%s\n", cJSON_Print(jsoncreditcardclient_edit_object_v1_response_2));
}

int main() {
  test_creditcardclient_edit_object_v1_response(1);
  test_creditcardclient_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardclient_edit_object_v1_response_MAIN
#endif // creditcardclient_edit_object_v1_response_TEST
