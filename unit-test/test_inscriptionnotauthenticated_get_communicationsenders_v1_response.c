#ifndef inscriptionnotauthenticated_get_communicationsenders_v1_response_TEST
#define inscriptionnotauthenticated_get_communicationsenders_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inscriptionnotauthenticated_get_communicationsenders_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inscriptionnotauthenticated_get_communicationsenders_v1_response.h"
inscriptionnotauthenticated_get_communicationsenders_v1_response_t* instantiate_inscriptionnotauthenticated_get_communicationsenders_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload.c"


inscriptionnotauthenticated_get_communicationsenders_v1_response_t* instantiate_inscriptionnotauthenticated_get_communicationsenders_v1_response(int include_optional) {
  inscriptionnotauthenticated_get_communicationsenders_v1_response_t* inscriptionnotauthenticated_get_communicationsenders_v1_response = NULL;
  if (include_optional) {
    inscriptionnotauthenticated_get_communicationsenders_v1_response = inscriptionnotauthenticated_get_communicationsenders_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload(0)
    );
  } else {
    inscriptionnotauthenticated_get_communicationsenders_v1_response = inscriptionnotauthenticated_get_communicationsenders_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return inscriptionnotauthenticated_get_communicationsenders_v1_response;
}


#ifdef inscriptionnotauthenticated_get_communicationsenders_v1_response_MAIN

void test_inscriptionnotauthenticated_get_communicationsenders_v1_response(int include_optional) {
    inscriptionnotauthenticated_get_communicationsenders_v1_response_t* inscriptionnotauthenticated_get_communicationsenders_v1_response_1 = instantiate_inscriptionnotauthenticated_get_communicationsenders_v1_response(include_optional);

	cJSON* jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_1 = inscriptionnotauthenticated_get_communicationsenders_v1_response_convertToJSON(inscriptionnotauthenticated_get_communicationsenders_v1_response_1);
	printf("inscriptionnotauthenticated_get_communicationsenders_v1_response :\n%s\n", cJSON_Print(jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_1));
	inscriptionnotauthenticated_get_communicationsenders_v1_response_t* inscriptionnotauthenticated_get_communicationsenders_v1_response_2 = inscriptionnotauthenticated_get_communicationsenders_v1_response_parseFromJSON(jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_1);
	cJSON* jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_2 = inscriptionnotauthenticated_get_communicationsenders_v1_response_convertToJSON(inscriptionnotauthenticated_get_communicationsenders_v1_response_2);
	printf("repeating inscriptionnotauthenticated_get_communicationsenders_v1_response:\n%s\n", cJSON_Print(jsoninscriptionnotauthenticated_get_communicationsenders_v1_response_2));
}

int main() {
  test_inscriptionnotauthenticated_get_communicationsenders_v1_response(1);
  test_inscriptionnotauthenticated_get_communicationsenders_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // inscriptionnotauthenticated_get_communicationsenders_v1_response_MAIN
#endif // inscriptionnotauthenticated_get_communicationsenders_v1_response_TEST
