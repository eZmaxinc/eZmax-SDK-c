#ifndef buyercontract_get_communicationrecipients_v1_response_TEST
#define buyercontract_get_communicationrecipients_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define buyercontract_get_communicationrecipients_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/buyercontract_get_communicationrecipients_v1_response.h"
buyercontract_get_communicationrecipients_v1_response_t* instantiate_buyercontract_get_communicationrecipients_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_buyercontract_get_communicationrecipients_v1_response_m_payload.c"


buyercontract_get_communicationrecipients_v1_response_t* instantiate_buyercontract_get_communicationrecipients_v1_response(int include_optional) {
  buyercontract_get_communicationrecipients_v1_response_t* buyercontract_get_communicationrecipients_v1_response = NULL;
  if (include_optional) {
    buyercontract_get_communicationrecipients_v1_response = buyercontract_get_communicationrecipients_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_buyercontract_get_communicationrecipients_v1_response_m_payload(0)
    );
  } else {
    buyercontract_get_communicationrecipients_v1_response = buyercontract_get_communicationrecipients_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return buyercontract_get_communicationrecipients_v1_response;
}


#ifdef buyercontract_get_communicationrecipients_v1_response_MAIN

void test_buyercontract_get_communicationrecipients_v1_response(int include_optional) {
    buyercontract_get_communicationrecipients_v1_response_t* buyercontract_get_communicationrecipients_v1_response_1 = instantiate_buyercontract_get_communicationrecipients_v1_response(include_optional);

	cJSON* jsonbuyercontract_get_communicationrecipients_v1_response_1 = buyercontract_get_communicationrecipients_v1_response_convertToJSON(buyercontract_get_communicationrecipients_v1_response_1);
	printf("buyercontract_get_communicationrecipients_v1_response :\n%s\n", cJSON_Print(jsonbuyercontract_get_communicationrecipients_v1_response_1));
	buyercontract_get_communicationrecipients_v1_response_t* buyercontract_get_communicationrecipients_v1_response_2 = buyercontract_get_communicationrecipients_v1_response_parseFromJSON(jsonbuyercontract_get_communicationrecipients_v1_response_1);
	cJSON* jsonbuyercontract_get_communicationrecipients_v1_response_2 = buyercontract_get_communicationrecipients_v1_response_convertToJSON(buyercontract_get_communicationrecipients_v1_response_2);
	printf("repeating buyercontract_get_communicationrecipients_v1_response:\n%s\n", cJSON_Print(jsonbuyercontract_get_communicationrecipients_v1_response_2));
}

int main() {
  test_buyercontract_get_communicationrecipients_v1_response(1);
  test_buyercontract_get_communicationrecipients_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // buyercontract_get_communicationrecipients_v1_response_MAIN
#endif // buyercontract_get_communicationrecipients_v1_response_TEST
