#ifndef franchisereferalincome_create_object_v1_response_m_payload_TEST
#define franchisereferalincome_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisereferalincome_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisereferalincome_create_object_v1_response_m_payload.h"
franchisereferalincome_create_object_v1_response_m_payload_t* instantiate_franchisereferalincome_create_object_v1_response_m_payload(int include_optional);



franchisereferalincome_create_object_v1_response_m_payload_t* instantiate_franchisereferalincome_create_object_v1_response_m_payload(int include_optional) {
  franchisereferalincome_create_object_v1_response_m_payload_t* franchisereferalincome_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    franchisereferalincome_create_object_v1_response_m_payload = franchisereferalincome_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    franchisereferalincome_create_object_v1_response_m_payload = franchisereferalincome_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return franchisereferalincome_create_object_v1_response_m_payload;
}


#ifdef franchisereferalincome_create_object_v1_response_m_payload_MAIN

void test_franchisereferalincome_create_object_v1_response_m_payload(int include_optional) {
    franchisereferalincome_create_object_v1_response_m_payload_t* franchisereferalincome_create_object_v1_response_m_payload_1 = instantiate_franchisereferalincome_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonfranchisereferalincome_create_object_v1_response_m_payload_1 = franchisereferalincome_create_object_v1_response_m_payload_convertToJSON(franchisereferalincome_create_object_v1_response_m_payload_1);
	printf("franchisereferalincome_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v1_response_m_payload_1));
	franchisereferalincome_create_object_v1_response_m_payload_t* franchisereferalincome_create_object_v1_response_m_payload_2 = franchisereferalincome_create_object_v1_response_m_payload_parseFromJSON(jsonfranchisereferalincome_create_object_v1_response_m_payload_1);
	cJSON* jsonfranchisereferalincome_create_object_v1_response_m_payload_2 = franchisereferalincome_create_object_v1_response_m_payload_convertToJSON(franchisereferalincome_create_object_v1_response_m_payload_2);
	printf("repeating franchisereferalincome_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v1_response_m_payload_2));
}

int main() {
  test_franchisereferalincome_create_object_v1_response_m_payload(1);
  test_franchisereferalincome_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisereferalincome_create_object_v1_response_m_payload_MAIN
#endif // franchisereferalincome_create_object_v1_response_m_payload_TEST
