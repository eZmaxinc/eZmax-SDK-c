#ifndef ezdoctemplatetype_get_autocomplete_v2_response_TEST
#define ezdoctemplatetype_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatetype_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatetype_get_autocomplete_v2_response.h"
ezdoctemplatetype_get_autocomplete_v2_response_t* instantiate_ezdoctemplatetype_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezdoctemplatetype_get_autocomplete_v2_response_m_payload.c"


ezdoctemplatetype_get_autocomplete_v2_response_t* instantiate_ezdoctemplatetype_get_autocomplete_v2_response(int include_optional) {
  ezdoctemplatetype_get_autocomplete_v2_response_t* ezdoctemplatetype_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    ezdoctemplatetype_get_autocomplete_v2_response = ezdoctemplatetype_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezdoctemplatetype_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    ezdoctemplatetype_get_autocomplete_v2_response = ezdoctemplatetype_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezdoctemplatetype_get_autocomplete_v2_response;
}


#ifdef ezdoctemplatetype_get_autocomplete_v2_response_MAIN

void test_ezdoctemplatetype_get_autocomplete_v2_response(int include_optional) {
    ezdoctemplatetype_get_autocomplete_v2_response_t* ezdoctemplatetype_get_autocomplete_v2_response_1 = instantiate_ezdoctemplatetype_get_autocomplete_v2_response(include_optional);

	cJSON* jsonezdoctemplatetype_get_autocomplete_v2_response_1 = ezdoctemplatetype_get_autocomplete_v2_response_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response_1);
	printf("ezdoctemplatetype_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonezdoctemplatetype_get_autocomplete_v2_response_1));
	ezdoctemplatetype_get_autocomplete_v2_response_t* ezdoctemplatetype_get_autocomplete_v2_response_2 = ezdoctemplatetype_get_autocomplete_v2_response_parseFromJSON(jsonezdoctemplatetype_get_autocomplete_v2_response_1);
	cJSON* jsonezdoctemplatetype_get_autocomplete_v2_response_2 = ezdoctemplatetype_get_autocomplete_v2_response_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response_2);
	printf("repeating ezdoctemplatetype_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonezdoctemplatetype_get_autocomplete_v2_response_2));
}

int main() {
  test_ezdoctemplatetype_get_autocomplete_v2_response(1);
  test_ezdoctemplatetype_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatetype_get_autocomplete_v2_response_MAIN
#endif // ezdoctemplatetype_get_autocomplete_v2_response_TEST
