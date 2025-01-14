#ifndef supply_create_object_v1_response_m_payload_TEST
#define supply_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_create_object_v1_response_m_payload.h"
supply_create_object_v1_response_m_payload_t* instantiate_supply_create_object_v1_response_m_payload(int include_optional);



supply_create_object_v1_response_m_payload_t* instantiate_supply_create_object_v1_response_m_payload(int include_optional) {
  supply_create_object_v1_response_m_payload_t* supply_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    supply_create_object_v1_response_m_payload = supply_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    supply_create_object_v1_response_m_payload = supply_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return supply_create_object_v1_response_m_payload;
}


#ifdef supply_create_object_v1_response_m_payload_MAIN

void test_supply_create_object_v1_response_m_payload(int include_optional) {
    supply_create_object_v1_response_m_payload_t* supply_create_object_v1_response_m_payload_1 = instantiate_supply_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonsupply_create_object_v1_response_m_payload_1 = supply_create_object_v1_response_m_payload_convertToJSON(supply_create_object_v1_response_m_payload_1);
	printf("supply_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonsupply_create_object_v1_response_m_payload_1));
	supply_create_object_v1_response_m_payload_t* supply_create_object_v1_response_m_payload_2 = supply_create_object_v1_response_m_payload_parseFromJSON(jsonsupply_create_object_v1_response_m_payload_1);
	cJSON* jsonsupply_create_object_v1_response_m_payload_2 = supply_create_object_v1_response_m_payload_convertToJSON(supply_create_object_v1_response_m_payload_2);
	printf("repeating supply_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonsupply_create_object_v1_response_m_payload_2));
}

int main() {
  test_supply_create_object_v1_response_m_payload(1);
  test_supply_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_create_object_v1_response_m_payload_MAIN
#endif // supply_create_object_v1_response_m_payload_TEST
