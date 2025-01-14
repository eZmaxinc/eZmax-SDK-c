#ifndef supply_get_object_v2_response_m_payload_TEST
#define supply_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_get_object_v2_response_m_payload.h"
supply_get_object_v2_response_m_payload_t* instantiate_supply_get_object_v2_response_m_payload(int include_optional);

#include "test_supply_response_compound.c"


supply_get_object_v2_response_m_payload_t* instantiate_supply_get_object_v2_response_m_payload(int include_optional) {
  supply_get_object_v2_response_m_payload_t* supply_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    supply_get_object_v2_response_m_payload = supply_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_supply_response_compound(0)
    );
  } else {
    supply_get_object_v2_response_m_payload = supply_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return supply_get_object_v2_response_m_payload;
}


#ifdef supply_get_object_v2_response_m_payload_MAIN

void test_supply_get_object_v2_response_m_payload(int include_optional) {
    supply_get_object_v2_response_m_payload_t* supply_get_object_v2_response_m_payload_1 = instantiate_supply_get_object_v2_response_m_payload(include_optional);

	cJSON* jsonsupply_get_object_v2_response_m_payload_1 = supply_get_object_v2_response_m_payload_convertToJSON(supply_get_object_v2_response_m_payload_1);
	printf("supply_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsonsupply_get_object_v2_response_m_payload_1));
	supply_get_object_v2_response_m_payload_t* supply_get_object_v2_response_m_payload_2 = supply_get_object_v2_response_m_payload_parseFromJSON(jsonsupply_get_object_v2_response_m_payload_1);
	cJSON* jsonsupply_get_object_v2_response_m_payload_2 = supply_get_object_v2_response_m_payload_convertToJSON(supply_get_object_v2_response_m_payload_2);
	printf("repeating supply_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsonsupply_get_object_v2_response_m_payload_2));
}

int main() {
  test_supply_get_object_v2_response_m_payload(1);
  test_supply_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_get_object_v2_response_m_payload_MAIN
#endif // supply_get_object_v2_response_m_payload_TEST
