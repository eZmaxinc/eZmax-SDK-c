#ifndef ezdoctemplatetype_get_autocomplete_v2_response_m_payload_TEST
#define ezdoctemplatetype_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatetype_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatetype_get_autocomplete_v2_response_m_payload.h"
ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t* instantiate_ezdoctemplatetype_get_autocomplete_v2_response_m_payload(int include_optional);



ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t* instantiate_ezdoctemplatetype_get_autocomplete_v2_response_m_payload(int include_optional) {
  ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t* ezdoctemplatetype_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    ezdoctemplatetype_get_autocomplete_v2_response_m_payload = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    ezdoctemplatetype_get_autocomplete_v2_response_m_payload = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return ezdoctemplatetype_get_autocomplete_v2_response_m_payload;
}


#ifdef ezdoctemplatetype_get_autocomplete_v2_response_m_payload_MAIN

void test_ezdoctemplatetype_get_autocomplete_v2_response_m_payload(int include_optional) {
    ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t* ezdoctemplatetype_get_autocomplete_v2_response_m_payload_1 = instantiate_ezdoctemplatetype_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonezdoctemplatetype_get_autocomplete_v2_response_m_payload_1 = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response_m_payload_1);
	printf("ezdoctemplatetype_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezdoctemplatetype_get_autocomplete_v2_response_m_payload_1));
	ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t* ezdoctemplatetype_get_autocomplete_v2_response_m_payload_2 = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonezdoctemplatetype_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonezdoctemplatetype_get_autocomplete_v2_response_m_payload_2 = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response_m_payload_2);
	printf("repeating ezdoctemplatetype_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezdoctemplatetype_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_ezdoctemplatetype_get_autocomplete_v2_response_m_payload(1);
  test_ezdoctemplatetype_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatetype_get_autocomplete_v2_response_m_payload_MAIN
#endif // ezdoctemplatetype_get_autocomplete_v2_response_m_payload_TEST
