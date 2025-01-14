#ifndef ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_TEST
#define ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatefieldtypecategory_get_autocomplete_v2_response.h"
ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t* instantiate_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload.c"


ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t* instantiate_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response(int include_optional) {
  ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t* ezdoctemplatefieldtypecategory_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response = ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response = ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezdoctemplatefieldtypecategory_get_autocomplete_v2_response;
}


#ifdef ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_MAIN

void test_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response(int include_optional) {
    ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t* ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_1 = instantiate_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response(include_optional);

	cJSON* jsonezdoctemplatefieldtypecategory_get_autocomplete_v2_response_1 = ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_convertToJSON(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_1);
	printf("ezdoctemplatefieldtypecategory_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonezdoctemplatefieldtypecategory_get_autocomplete_v2_response_1));
	ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_t* ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_2 = ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_parseFromJSON(jsonezdoctemplatefieldtypecategory_get_autocomplete_v2_response_1);
	cJSON* jsonezdoctemplatefieldtypecategory_get_autocomplete_v2_response_2 = ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_convertToJSON(ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_2);
	printf("repeating ezdoctemplatefieldtypecategory_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonezdoctemplatefieldtypecategory_get_autocomplete_v2_response_2));
}

int main() {
  test_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response(1);
  test_ezdoctemplatefieldtypecategory_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_MAIN
#endif // ezdoctemplatefieldtypecategory_get_autocomplete_v2_response_TEST
