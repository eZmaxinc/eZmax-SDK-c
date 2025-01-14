#ifndef buyercontract_get_communicationsenders_v1_response_m_payload_TEST
#define buyercontract_get_communicationsenders_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define buyercontract_get_communicationsenders_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/buyercontract_get_communicationsenders_v1_response_m_payload.h"
buyercontract_get_communicationsenders_v1_response_m_payload_t* instantiate_buyercontract_get_communicationsenders_v1_response_m_payload(int include_optional);



buyercontract_get_communicationsenders_v1_response_m_payload_t* instantiate_buyercontract_get_communicationsenders_v1_response_m_payload(int include_optional) {
  buyercontract_get_communicationsenders_v1_response_m_payload_t* buyercontract_get_communicationsenders_v1_response_m_payload = NULL;
  if (include_optional) {
    buyercontract_get_communicationsenders_v1_response_m_payload = buyercontract_get_communicationsenders_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    buyercontract_get_communicationsenders_v1_response_m_payload = buyercontract_get_communicationsenders_v1_response_m_payload_create(
      list_createList()
    );
  }

  return buyercontract_get_communicationsenders_v1_response_m_payload;
}


#ifdef buyercontract_get_communicationsenders_v1_response_m_payload_MAIN

void test_buyercontract_get_communicationsenders_v1_response_m_payload(int include_optional) {
    buyercontract_get_communicationsenders_v1_response_m_payload_t* buyercontract_get_communicationsenders_v1_response_m_payload_1 = instantiate_buyercontract_get_communicationsenders_v1_response_m_payload(include_optional);

	cJSON* jsonbuyercontract_get_communicationsenders_v1_response_m_payload_1 = buyercontract_get_communicationsenders_v1_response_m_payload_convertToJSON(buyercontract_get_communicationsenders_v1_response_m_payload_1);
	printf("buyercontract_get_communicationsenders_v1_response_m_payload :\n%s\n", cJSON_Print(jsonbuyercontract_get_communicationsenders_v1_response_m_payload_1));
	buyercontract_get_communicationsenders_v1_response_m_payload_t* buyercontract_get_communicationsenders_v1_response_m_payload_2 = buyercontract_get_communicationsenders_v1_response_m_payload_parseFromJSON(jsonbuyercontract_get_communicationsenders_v1_response_m_payload_1);
	cJSON* jsonbuyercontract_get_communicationsenders_v1_response_m_payload_2 = buyercontract_get_communicationsenders_v1_response_m_payload_convertToJSON(buyercontract_get_communicationsenders_v1_response_m_payload_2);
	printf("repeating buyercontract_get_communicationsenders_v1_response_m_payload:\n%s\n", cJSON_Print(jsonbuyercontract_get_communicationsenders_v1_response_m_payload_2));
}

int main() {
  test_buyercontract_get_communicationsenders_v1_response_m_payload(1);
  test_buyercontract_get_communicationsenders_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // buyercontract_get_communicationsenders_v1_response_m_payload_MAIN
#endif // buyercontract_get_communicationsenders_v1_response_m_payload_TEST
