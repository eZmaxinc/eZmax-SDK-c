#ifndef glaccountcontainer_get_autocomplete_v2_response_m_payload_TEST
#define glaccountcontainer_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define glaccountcontainer_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/glaccountcontainer_get_autocomplete_v2_response_m_payload.h"
glaccountcontainer_get_autocomplete_v2_response_m_payload_t* instantiate_glaccountcontainer_get_autocomplete_v2_response_m_payload(int include_optional);



glaccountcontainer_get_autocomplete_v2_response_m_payload_t* instantiate_glaccountcontainer_get_autocomplete_v2_response_m_payload(int include_optional) {
  glaccountcontainer_get_autocomplete_v2_response_m_payload_t* glaccountcontainer_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    glaccountcontainer_get_autocomplete_v2_response_m_payload = glaccountcontainer_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    glaccountcontainer_get_autocomplete_v2_response_m_payload = glaccountcontainer_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return glaccountcontainer_get_autocomplete_v2_response_m_payload;
}


#ifdef glaccountcontainer_get_autocomplete_v2_response_m_payload_MAIN

void test_glaccountcontainer_get_autocomplete_v2_response_m_payload(int include_optional) {
    glaccountcontainer_get_autocomplete_v2_response_m_payload_t* glaccountcontainer_get_autocomplete_v2_response_m_payload_1 = instantiate_glaccountcontainer_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonglaccountcontainer_get_autocomplete_v2_response_m_payload_1 = glaccountcontainer_get_autocomplete_v2_response_m_payload_convertToJSON(glaccountcontainer_get_autocomplete_v2_response_m_payload_1);
	printf("glaccountcontainer_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonglaccountcontainer_get_autocomplete_v2_response_m_payload_1));
	glaccountcontainer_get_autocomplete_v2_response_m_payload_t* glaccountcontainer_get_autocomplete_v2_response_m_payload_2 = glaccountcontainer_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonglaccountcontainer_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonglaccountcontainer_get_autocomplete_v2_response_m_payload_2 = glaccountcontainer_get_autocomplete_v2_response_m_payload_convertToJSON(glaccountcontainer_get_autocomplete_v2_response_m_payload_2);
	printf("repeating glaccountcontainer_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonglaccountcontainer_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_glaccountcontainer_get_autocomplete_v2_response_m_payload(1);
  test_glaccountcontainer_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // glaccountcontainer_get_autocomplete_v2_response_m_payload_MAIN
#endif // glaccountcontainer_get_autocomplete_v2_response_m_payload_TEST
