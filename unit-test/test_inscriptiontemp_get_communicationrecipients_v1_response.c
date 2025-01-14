#ifndef inscriptiontemp_get_communicationrecipients_v1_response_TEST
#define inscriptiontemp_get_communicationrecipients_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inscriptiontemp_get_communicationrecipients_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inscriptiontemp_get_communicationrecipients_v1_response.h"
inscriptiontemp_get_communicationrecipients_v1_response_t* instantiate_inscriptiontemp_get_communicationrecipients_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_inscriptiontemp_get_communicationrecipients_v1_response_m_payload.c"


inscriptiontemp_get_communicationrecipients_v1_response_t* instantiate_inscriptiontemp_get_communicationrecipients_v1_response(int include_optional) {
  inscriptiontemp_get_communicationrecipients_v1_response_t* inscriptiontemp_get_communicationrecipients_v1_response = NULL;
  if (include_optional) {
    inscriptiontemp_get_communicationrecipients_v1_response = inscriptiontemp_get_communicationrecipients_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_inscriptiontemp_get_communicationrecipients_v1_response_m_payload(0)
    );
  } else {
    inscriptiontemp_get_communicationrecipients_v1_response = inscriptiontemp_get_communicationrecipients_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return inscriptiontemp_get_communicationrecipients_v1_response;
}


#ifdef inscriptiontemp_get_communicationrecipients_v1_response_MAIN

void test_inscriptiontemp_get_communicationrecipients_v1_response(int include_optional) {
    inscriptiontemp_get_communicationrecipients_v1_response_t* inscriptiontemp_get_communicationrecipients_v1_response_1 = instantiate_inscriptiontemp_get_communicationrecipients_v1_response(include_optional);

	cJSON* jsoninscriptiontemp_get_communicationrecipients_v1_response_1 = inscriptiontemp_get_communicationrecipients_v1_response_convertToJSON(inscriptiontemp_get_communicationrecipients_v1_response_1);
	printf("inscriptiontemp_get_communicationrecipients_v1_response :\n%s\n", cJSON_Print(jsoninscriptiontemp_get_communicationrecipients_v1_response_1));
	inscriptiontemp_get_communicationrecipients_v1_response_t* inscriptiontemp_get_communicationrecipients_v1_response_2 = inscriptiontemp_get_communicationrecipients_v1_response_parseFromJSON(jsoninscriptiontemp_get_communicationrecipients_v1_response_1);
	cJSON* jsoninscriptiontemp_get_communicationrecipients_v1_response_2 = inscriptiontemp_get_communicationrecipients_v1_response_convertToJSON(inscriptiontemp_get_communicationrecipients_v1_response_2);
	printf("repeating inscriptiontemp_get_communicationrecipients_v1_response:\n%s\n", cJSON_Print(jsoninscriptiontemp_get_communicationrecipients_v1_response_2));
}

int main() {
  test_inscriptiontemp_get_communicationrecipients_v1_response(1);
  test_inscriptiontemp_get_communicationrecipients_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // inscriptiontemp_get_communicationrecipients_v1_response_MAIN
#endif // inscriptiontemp_get_communicationrecipients_v1_response_TEST
