#ifndef ezdoctemplatedocument_create_object_v1_response_m_payload_TEST
#define ezdoctemplatedocument_create_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_create_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_create_object_v1_response_m_payload.h"
ezdoctemplatedocument_create_object_v1_response_m_payload_t* instantiate_ezdoctemplatedocument_create_object_v1_response_m_payload(int include_optional);



ezdoctemplatedocument_create_object_v1_response_m_payload_t* instantiate_ezdoctemplatedocument_create_object_v1_response_m_payload(int include_optional) {
  ezdoctemplatedocument_create_object_v1_response_m_payload_t* ezdoctemplatedocument_create_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezdoctemplatedocument_create_object_v1_response_m_payload = ezdoctemplatedocument_create_object_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    ezdoctemplatedocument_create_object_v1_response_m_payload = ezdoctemplatedocument_create_object_v1_response_m_payload_create(
      list_createList()
    );
  }

  return ezdoctemplatedocument_create_object_v1_response_m_payload;
}


#ifdef ezdoctemplatedocument_create_object_v1_response_m_payload_MAIN

void test_ezdoctemplatedocument_create_object_v1_response_m_payload(int include_optional) {
    ezdoctemplatedocument_create_object_v1_response_m_payload_t* ezdoctemplatedocument_create_object_v1_response_m_payload_1 = instantiate_ezdoctemplatedocument_create_object_v1_response_m_payload(include_optional);

	cJSON* jsonezdoctemplatedocument_create_object_v1_response_m_payload_1 = ezdoctemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezdoctemplatedocument_create_object_v1_response_m_payload_1);
	printf("ezdoctemplatedocument_create_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_create_object_v1_response_m_payload_1));
	ezdoctemplatedocument_create_object_v1_response_m_payload_t* ezdoctemplatedocument_create_object_v1_response_m_payload_2 = ezdoctemplatedocument_create_object_v1_response_m_payload_parseFromJSON(jsonezdoctemplatedocument_create_object_v1_response_m_payload_1);
	cJSON* jsonezdoctemplatedocument_create_object_v1_response_m_payload_2 = ezdoctemplatedocument_create_object_v1_response_m_payload_convertToJSON(ezdoctemplatedocument_create_object_v1_response_m_payload_2);
	printf("repeating ezdoctemplatedocument_create_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_create_object_v1_response_m_payload_2));
}

int main() {
  test_ezdoctemplatedocument_create_object_v1_response_m_payload(1);
  test_ezdoctemplatedocument_create_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_create_object_v1_response_m_payload_MAIN
#endif // ezdoctemplatedocument_create_object_v1_response_m_payload_TEST
