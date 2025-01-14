#ifndef tranqcontract_get_communicationsenders_v1_response_m_payload_TEST
#define tranqcontract_get_communicationsenders_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tranqcontract_get_communicationsenders_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tranqcontract_get_communicationsenders_v1_response_m_payload.h"
tranqcontract_get_communicationsenders_v1_response_m_payload_t* instantiate_tranqcontract_get_communicationsenders_v1_response_m_payload(int include_optional);



tranqcontract_get_communicationsenders_v1_response_m_payload_t* instantiate_tranqcontract_get_communicationsenders_v1_response_m_payload(int include_optional) {
  tranqcontract_get_communicationsenders_v1_response_m_payload_t* tranqcontract_get_communicationsenders_v1_response_m_payload = NULL;
  if (include_optional) {
    tranqcontract_get_communicationsenders_v1_response_m_payload = tranqcontract_get_communicationsenders_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    tranqcontract_get_communicationsenders_v1_response_m_payload = tranqcontract_get_communicationsenders_v1_response_m_payload_create(
      list_createList()
    );
  }

  return tranqcontract_get_communicationsenders_v1_response_m_payload;
}


#ifdef tranqcontract_get_communicationsenders_v1_response_m_payload_MAIN

void test_tranqcontract_get_communicationsenders_v1_response_m_payload(int include_optional) {
    tranqcontract_get_communicationsenders_v1_response_m_payload_t* tranqcontract_get_communicationsenders_v1_response_m_payload_1 = instantiate_tranqcontract_get_communicationsenders_v1_response_m_payload(include_optional);

	cJSON* jsontranqcontract_get_communicationsenders_v1_response_m_payload_1 = tranqcontract_get_communicationsenders_v1_response_m_payload_convertToJSON(tranqcontract_get_communicationsenders_v1_response_m_payload_1);
	printf("tranqcontract_get_communicationsenders_v1_response_m_payload :\n%s\n", cJSON_Print(jsontranqcontract_get_communicationsenders_v1_response_m_payload_1));
	tranqcontract_get_communicationsenders_v1_response_m_payload_t* tranqcontract_get_communicationsenders_v1_response_m_payload_2 = tranqcontract_get_communicationsenders_v1_response_m_payload_parseFromJSON(jsontranqcontract_get_communicationsenders_v1_response_m_payload_1);
	cJSON* jsontranqcontract_get_communicationsenders_v1_response_m_payload_2 = tranqcontract_get_communicationsenders_v1_response_m_payload_convertToJSON(tranqcontract_get_communicationsenders_v1_response_m_payload_2);
	printf("repeating tranqcontract_get_communicationsenders_v1_response_m_payload:\n%s\n", cJSON_Print(jsontranqcontract_get_communicationsenders_v1_response_m_payload_2));
}

int main() {
  test_tranqcontract_get_communicationsenders_v1_response_m_payload(1);
  test_tranqcontract_get_communicationsenders_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // tranqcontract_get_communicationsenders_v1_response_m_payload_MAIN
#endif // tranqcontract_get_communicationsenders_v1_response_m_payload_TEST
