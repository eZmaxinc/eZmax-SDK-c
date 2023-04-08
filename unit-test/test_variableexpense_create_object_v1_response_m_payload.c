#ifndef variableexpense_create_object_v1_response_m_payload_TEST
#define variableexpense_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_create_object_v1_response_m_payload.h"
variableexpense_create_object_v1_response_m_payload_t* instantiate_variableexpense_create_object_v1_response_m_payload(int include_optional);



variableexpense_create_object_v1_response_m_payload_t* instantiate_variableexpense_create_object_v1_response_m_payload(int include_optional) {
  variableexpense_create_object_v1_response_m_payload_t* variableexpense_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    variableexpense_create_object_v1_response_m_payload = variableexpense_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    variableexpense_create_object_v1_response_m_payload = variableexpense_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return variableexpense_create_object_v1_response_m_payload;
}


#ifdef variableexpense_create_object_v1_response_m_payload_MAIN

void test_variableexpense_create_object_v1_response_m_payload(int include_optional) {
    variableexpense_create_object_v1_response_m_payload_t* variableexpense_create_object_v1_response_m_payload_1 = instantiate_variableexpense_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonvariableexpense_create_object_v1_response_m_payload_1 = variableexpense_create_object_v1_response_m_payload_convertToJSON(variableexpense_create_object_v1_response_m_payload_1);
	printf("variableexpense_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_response_m_payload_1));
	variableexpense_create_object_v1_response_m_payload_t* variableexpense_create_object_v1_response_m_payload_2 = variableexpense_create_object_v1_response_m_payload_parseFromJSON(jsonvariableexpense_create_object_v1_response_m_payload_1);
	cJSON* jsonvariableexpense_create_object_v1_response_m_payload_2 = variableexpense_create_object_v1_response_m_payload_convertToJSON(variableexpense_create_object_v1_response_m_payload_2);
	printf("repeating variableexpense_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_response_m_payload_2));
}

int main() {
  test_variableexpense_create_object_v1_response_m_payload(1);
  test_variableexpense_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_create_object_v1_response_m_payload_MAIN
#endif // variableexpense_create_object_v1_response_m_payload_TEST
