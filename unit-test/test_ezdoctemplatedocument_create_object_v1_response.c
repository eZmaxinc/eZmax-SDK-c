#ifndef ezdoctemplatedocument_create_object_v1_response_TEST
#define ezdoctemplatedocument_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_create_object_v1_response.h"
ezdoctemplatedocument_create_object_v1_response_t* instantiate_ezdoctemplatedocument_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezdoctemplatedocument_create_object_v1_response_m_payload.c"


ezdoctemplatedocument_create_object_v1_response_t* instantiate_ezdoctemplatedocument_create_object_v1_response(int include_optional) {
  ezdoctemplatedocument_create_object_v1_response_t* ezdoctemplatedocument_create_object_v1_response = NULL;
  if (include_optional) {
    ezdoctemplatedocument_create_object_v1_response = ezdoctemplatedocument_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezdoctemplatedocument_create_object_v1_response_m_payload(0)
    );
  } else {
    ezdoctemplatedocument_create_object_v1_response = ezdoctemplatedocument_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezdoctemplatedocument_create_object_v1_response;
}


#ifdef ezdoctemplatedocument_create_object_v1_response_MAIN

void test_ezdoctemplatedocument_create_object_v1_response(int include_optional) {
    ezdoctemplatedocument_create_object_v1_response_t* ezdoctemplatedocument_create_object_v1_response_1 = instantiate_ezdoctemplatedocument_create_object_v1_response(include_optional);

	cJSON* jsonezdoctemplatedocument_create_object_v1_response_1 = ezdoctemplatedocument_create_object_v1_response_convertToJSON(ezdoctemplatedocument_create_object_v1_response_1);
	printf("ezdoctemplatedocument_create_object_v1_response :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_create_object_v1_response_1));
	ezdoctemplatedocument_create_object_v1_response_t* ezdoctemplatedocument_create_object_v1_response_2 = ezdoctemplatedocument_create_object_v1_response_parseFromJSON(jsonezdoctemplatedocument_create_object_v1_response_1);
	cJSON* jsonezdoctemplatedocument_create_object_v1_response_2 = ezdoctemplatedocument_create_object_v1_response_convertToJSON(ezdoctemplatedocument_create_object_v1_response_2);
	printf("repeating ezdoctemplatedocument_create_object_v1_response:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_create_object_v1_response_2));
}

int main() {
  test_ezdoctemplatedocument_create_object_v1_response(1);
  test_ezdoctemplatedocument_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_create_object_v1_response_MAIN
#endif // ezdoctemplatedocument_create_object_v1_response_TEST
