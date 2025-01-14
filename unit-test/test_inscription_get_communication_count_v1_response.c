#ifndef inscription_get_communication_count_v1_response_TEST
#define inscription_get_communication_count_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inscription_get_communication_count_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inscription_get_communication_count_v1_response.h"
inscription_get_communication_count_v1_response_t* instantiate_inscription_get_communication_count_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_inscription_get_communication_count_v1_response_m_payload.c"


inscription_get_communication_count_v1_response_t* instantiate_inscription_get_communication_count_v1_response(int include_optional) {
  inscription_get_communication_count_v1_response_t* inscription_get_communication_count_v1_response = NULL;
  if (include_optional) {
    inscription_get_communication_count_v1_response = inscription_get_communication_count_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_inscription_get_communication_count_v1_response_m_payload(0)
    );
  } else {
    inscription_get_communication_count_v1_response = inscription_get_communication_count_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return inscription_get_communication_count_v1_response;
}


#ifdef inscription_get_communication_count_v1_response_MAIN

void test_inscription_get_communication_count_v1_response(int include_optional) {
    inscription_get_communication_count_v1_response_t* inscription_get_communication_count_v1_response_1 = instantiate_inscription_get_communication_count_v1_response(include_optional);

	cJSON* jsoninscription_get_communication_count_v1_response_1 = inscription_get_communication_count_v1_response_convertToJSON(inscription_get_communication_count_v1_response_1);
	printf("inscription_get_communication_count_v1_response :\n%s\n", cJSON_Print(jsoninscription_get_communication_count_v1_response_1));
	inscription_get_communication_count_v1_response_t* inscription_get_communication_count_v1_response_2 = inscription_get_communication_count_v1_response_parseFromJSON(jsoninscription_get_communication_count_v1_response_1);
	cJSON* jsoninscription_get_communication_count_v1_response_2 = inscription_get_communication_count_v1_response_convertToJSON(inscription_get_communication_count_v1_response_2);
	printf("repeating inscription_get_communication_count_v1_response:\n%s\n", cJSON_Print(jsoninscription_get_communication_count_v1_response_2));
}

int main() {
  test_inscription_get_communication_count_v1_response(1);
  test_inscription_get_communication_count_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // inscription_get_communication_count_v1_response_MAIN
#endif // inscription_get_communication_count_v1_response_TEST
