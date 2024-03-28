#ifndef module_get_autocomplete_v2_response_m_payload_TEST
#define module_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define module_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/module_get_autocomplete_v2_response_m_payload.h"
module_get_autocomplete_v2_response_m_payload_t* instantiate_module_get_autocomplete_v2_response_m_payload(int include_optional);



module_get_autocomplete_v2_response_m_payload_t* instantiate_module_get_autocomplete_v2_response_m_payload(int include_optional) {
  module_get_autocomplete_v2_response_m_payload_t* module_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    module_get_autocomplete_v2_response_m_payload = module_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    module_get_autocomplete_v2_response_m_payload = module_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return module_get_autocomplete_v2_response_m_payload;
}


#ifdef module_get_autocomplete_v2_response_m_payload_MAIN

void test_module_get_autocomplete_v2_response_m_payload(int include_optional) {
    module_get_autocomplete_v2_response_m_payload_t* module_get_autocomplete_v2_response_m_payload_1 = instantiate_module_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonmodule_get_autocomplete_v2_response_m_payload_1 = module_get_autocomplete_v2_response_m_payload_convertToJSON(module_get_autocomplete_v2_response_m_payload_1);
	printf("module_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonmodule_get_autocomplete_v2_response_m_payload_1));
	module_get_autocomplete_v2_response_m_payload_t* module_get_autocomplete_v2_response_m_payload_2 = module_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonmodule_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonmodule_get_autocomplete_v2_response_m_payload_2 = module_get_autocomplete_v2_response_m_payload_convertToJSON(module_get_autocomplete_v2_response_m_payload_2);
	printf("repeating module_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonmodule_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_module_get_autocomplete_v2_response_m_payload(1);
  test_module_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // module_get_autocomplete_v2_response_m_payload_MAIN
#endif // module_get_autocomplete_v2_response_m_payload_TEST
