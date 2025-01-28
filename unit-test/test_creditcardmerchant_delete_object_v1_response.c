#ifndef creditcardmerchant_delete_object_v1_response_TEST
#define creditcardmerchant_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creditcardmerchant_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creditcardmerchant_delete_object_v1_response.h"
creditcardmerchant_delete_object_v1_response_t* instantiate_creditcardmerchant_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


creditcardmerchant_delete_object_v1_response_t* instantiate_creditcardmerchant_delete_object_v1_response(int include_optional) {
  creditcardmerchant_delete_object_v1_response_t* creditcardmerchant_delete_object_v1_response = NULL;
  if (include_optional) {
    creditcardmerchant_delete_object_v1_response = creditcardmerchant_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    creditcardmerchant_delete_object_v1_response = creditcardmerchant_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return creditcardmerchant_delete_object_v1_response;
}


#ifdef creditcardmerchant_delete_object_v1_response_MAIN

void test_creditcardmerchant_delete_object_v1_response(int include_optional) {
    creditcardmerchant_delete_object_v1_response_t* creditcardmerchant_delete_object_v1_response_1 = instantiate_creditcardmerchant_delete_object_v1_response(include_optional);

	cJSON* jsoncreditcardmerchant_delete_object_v1_response_1 = creditcardmerchant_delete_object_v1_response_convertToJSON(creditcardmerchant_delete_object_v1_response_1);
	printf("creditcardmerchant_delete_object_v1_response :\n%s\n", cJSON_Print(jsoncreditcardmerchant_delete_object_v1_response_1));
	creditcardmerchant_delete_object_v1_response_t* creditcardmerchant_delete_object_v1_response_2 = creditcardmerchant_delete_object_v1_response_parseFromJSON(jsoncreditcardmerchant_delete_object_v1_response_1);
	cJSON* jsoncreditcardmerchant_delete_object_v1_response_2 = creditcardmerchant_delete_object_v1_response_convertToJSON(creditcardmerchant_delete_object_v1_response_2);
	printf("repeating creditcardmerchant_delete_object_v1_response:\n%s\n", cJSON_Print(jsoncreditcardmerchant_delete_object_v1_response_2));
}

int main() {
  test_creditcardmerchant_delete_object_v1_response(1);
  test_creditcardmerchant_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // creditcardmerchant_delete_object_v1_response_MAIN
#endif // creditcardmerchant_delete_object_v1_response_TEST
