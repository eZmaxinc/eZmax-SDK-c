#ifndef userlogintype_get_autocomplete_v2_response_m_payload_TEST
#define userlogintype_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userlogintype_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userlogintype_get_autocomplete_v2_response_m_payload.h"
userlogintype_get_autocomplete_v2_response_m_payload_t* instantiate_userlogintype_get_autocomplete_v2_response_m_payload(int include_optional);



userlogintype_get_autocomplete_v2_response_m_payload_t* instantiate_userlogintype_get_autocomplete_v2_response_m_payload(int include_optional) {
  userlogintype_get_autocomplete_v2_response_m_payload_t* userlogintype_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    userlogintype_get_autocomplete_v2_response_m_payload = userlogintype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    userlogintype_get_autocomplete_v2_response_m_payload = userlogintype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return userlogintype_get_autocomplete_v2_response_m_payload;
}


#ifdef userlogintype_get_autocomplete_v2_response_m_payload_MAIN

void test_userlogintype_get_autocomplete_v2_response_m_payload(int include_optional) {
    userlogintype_get_autocomplete_v2_response_m_payload_t* userlogintype_get_autocomplete_v2_response_m_payload_1 = instantiate_userlogintype_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonuserlogintype_get_autocomplete_v2_response_m_payload_1 = userlogintype_get_autocomplete_v2_response_m_payload_convertToJSON(userlogintype_get_autocomplete_v2_response_m_payload_1);
	printf("userlogintype_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonuserlogintype_get_autocomplete_v2_response_m_payload_1));
	userlogintype_get_autocomplete_v2_response_m_payload_t* userlogintype_get_autocomplete_v2_response_m_payload_2 = userlogintype_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonuserlogintype_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonuserlogintype_get_autocomplete_v2_response_m_payload_2 = userlogintype_get_autocomplete_v2_response_m_payload_convertToJSON(userlogintype_get_autocomplete_v2_response_m_payload_2);
	printf("repeating userlogintype_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonuserlogintype_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_userlogintype_get_autocomplete_v2_response_m_payload(1);
  test_userlogintype_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // userlogintype_get_autocomplete_v2_response_m_payload_MAIN
#endif // userlogintype_get_autocomplete_v2_response_m_payload_TEST
