#ifndef contacttitle_get_autocomplete_v2_response_m_payload_TEST
#define contacttitle_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacttitle_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacttitle_get_autocomplete_v2_response_m_payload.h"
contacttitle_get_autocomplete_v2_response_m_payload_t* instantiate_contacttitle_get_autocomplete_v2_response_m_payload(int include_optional);



contacttitle_get_autocomplete_v2_response_m_payload_t* instantiate_contacttitle_get_autocomplete_v2_response_m_payload(int include_optional) {
  contacttitle_get_autocomplete_v2_response_m_payload_t* contacttitle_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    contacttitle_get_autocomplete_v2_response_m_payload = contacttitle_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    contacttitle_get_autocomplete_v2_response_m_payload = contacttitle_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return contacttitle_get_autocomplete_v2_response_m_payload;
}


#ifdef contacttitle_get_autocomplete_v2_response_m_payload_MAIN

void test_contacttitle_get_autocomplete_v2_response_m_payload(int include_optional) {
    contacttitle_get_autocomplete_v2_response_m_payload_t* contacttitle_get_autocomplete_v2_response_m_payload_1 = instantiate_contacttitle_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsoncontacttitle_get_autocomplete_v2_response_m_payload_1 = contacttitle_get_autocomplete_v2_response_m_payload_convertToJSON(contacttitle_get_autocomplete_v2_response_m_payload_1);
	printf("contacttitle_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsoncontacttitle_get_autocomplete_v2_response_m_payload_1));
	contacttitle_get_autocomplete_v2_response_m_payload_t* contacttitle_get_autocomplete_v2_response_m_payload_2 = contacttitle_get_autocomplete_v2_response_m_payload_parseFromJSON(jsoncontacttitle_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsoncontacttitle_get_autocomplete_v2_response_m_payload_2 = contacttitle_get_autocomplete_v2_response_m_payload_convertToJSON(contacttitle_get_autocomplete_v2_response_m_payload_2);
	printf("repeating contacttitle_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsoncontacttitle_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_contacttitle_get_autocomplete_v2_response_m_payload(1);
  test_contacttitle_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacttitle_get_autocomplete_v2_response_m_payload_MAIN
#endif // contacttitle_get_autocomplete_v2_response_m_payload_TEST
