#ifndef electronicfundstransfer_get_communicationrecipients_v1_response_TEST
#define electronicfundstransfer_get_communicationrecipients_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define electronicfundstransfer_get_communicationrecipients_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/electronicfundstransfer_get_communicationrecipients_v1_response.h"
electronicfundstransfer_get_communicationrecipients_v1_response_t* instantiate_electronicfundstransfer_get_communicationrecipients_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_electronicfundstransfer_get_communicationrecipients_v1_response_m_payload.c"


electronicfundstransfer_get_communicationrecipients_v1_response_t* instantiate_electronicfundstransfer_get_communicationrecipients_v1_response(int include_optional) {
  electronicfundstransfer_get_communicationrecipients_v1_response_t* electronicfundstransfer_get_communicationrecipients_v1_response = NULL;
  if (include_optional) {
    electronicfundstransfer_get_communicationrecipients_v1_response = electronicfundstransfer_get_communicationrecipients_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_electronicfundstransfer_get_communicationrecipients_v1_response_m_payload(0)
    );
  } else {
    electronicfundstransfer_get_communicationrecipients_v1_response = electronicfundstransfer_get_communicationrecipients_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return electronicfundstransfer_get_communicationrecipients_v1_response;
}


#ifdef electronicfundstransfer_get_communicationrecipients_v1_response_MAIN

void test_electronicfundstransfer_get_communicationrecipients_v1_response(int include_optional) {
    electronicfundstransfer_get_communicationrecipients_v1_response_t* electronicfundstransfer_get_communicationrecipients_v1_response_1 = instantiate_electronicfundstransfer_get_communicationrecipients_v1_response(include_optional);

	cJSON* jsonelectronicfundstransfer_get_communicationrecipients_v1_response_1 = electronicfundstransfer_get_communicationrecipients_v1_response_convertToJSON(electronicfundstransfer_get_communicationrecipients_v1_response_1);
	printf("electronicfundstransfer_get_communicationrecipients_v1_response :\n%s\n", cJSON_Print(jsonelectronicfundstransfer_get_communicationrecipients_v1_response_1));
	electronicfundstransfer_get_communicationrecipients_v1_response_t* electronicfundstransfer_get_communicationrecipients_v1_response_2 = electronicfundstransfer_get_communicationrecipients_v1_response_parseFromJSON(jsonelectronicfundstransfer_get_communicationrecipients_v1_response_1);
	cJSON* jsonelectronicfundstransfer_get_communicationrecipients_v1_response_2 = electronicfundstransfer_get_communicationrecipients_v1_response_convertToJSON(electronicfundstransfer_get_communicationrecipients_v1_response_2);
	printf("repeating electronicfundstransfer_get_communicationrecipients_v1_response:\n%s\n", cJSON_Print(jsonelectronicfundstransfer_get_communicationrecipients_v1_response_2));
}

int main() {
  test_electronicfundstransfer_get_communicationrecipients_v1_response(1);
  test_electronicfundstransfer_get_communicationrecipients_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // electronicfundstransfer_get_communicationrecipients_v1_response_MAIN
#endif // electronicfundstransfer_get_communicationrecipients_v1_response_TEST
