#ifndef ezdoctemplatedocument_edit_object_v1_request_TEST
#define ezdoctemplatedocument_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_edit_object_v1_request.h"
ezdoctemplatedocument_edit_object_v1_request_t* instantiate_ezdoctemplatedocument_edit_object_v1_request(int include_optional);

#include "test_ezdoctemplatedocument_request_compound.c"


ezdoctemplatedocument_edit_object_v1_request_t* instantiate_ezdoctemplatedocument_edit_object_v1_request(int include_optional) {
  ezdoctemplatedocument_edit_object_v1_request_t* ezdoctemplatedocument_edit_object_v1_request = NULL;
  if (include_optional) {
    ezdoctemplatedocument_edit_object_v1_request = ezdoctemplatedocument_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezdoctemplatedocument_request_compound(0)
    );
  } else {
    ezdoctemplatedocument_edit_object_v1_request = ezdoctemplatedocument_edit_object_v1_request_create(
      NULL
    );
  }

  return ezdoctemplatedocument_edit_object_v1_request;
}


#ifdef ezdoctemplatedocument_edit_object_v1_request_MAIN

void test_ezdoctemplatedocument_edit_object_v1_request(int include_optional) {
    ezdoctemplatedocument_edit_object_v1_request_t* ezdoctemplatedocument_edit_object_v1_request_1 = instantiate_ezdoctemplatedocument_edit_object_v1_request(include_optional);

	cJSON* jsonezdoctemplatedocument_edit_object_v1_request_1 = ezdoctemplatedocument_edit_object_v1_request_convertToJSON(ezdoctemplatedocument_edit_object_v1_request_1);
	printf("ezdoctemplatedocument_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_edit_object_v1_request_1));
	ezdoctemplatedocument_edit_object_v1_request_t* ezdoctemplatedocument_edit_object_v1_request_2 = ezdoctemplatedocument_edit_object_v1_request_parseFromJSON(jsonezdoctemplatedocument_edit_object_v1_request_1);
	cJSON* jsonezdoctemplatedocument_edit_object_v1_request_2 = ezdoctemplatedocument_edit_object_v1_request_convertToJSON(ezdoctemplatedocument_edit_object_v1_request_2);
	printf("repeating ezdoctemplatedocument_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_edit_object_v1_request_2));
}

int main() {
  test_ezdoctemplatedocument_edit_object_v1_request(1);
  test_ezdoctemplatedocument_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_edit_object_v1_request_MAIN
#endif // ezdoctemplatedocument_edit_object_v1_request_TEST
