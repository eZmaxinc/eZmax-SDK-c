#ifndef unused_ezsigndocument_edit_object_v1_request_TEST
#define unused_ezsigndocument_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unused_ezsigndocument_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unused_ezsigndocument_edit_object_v1_request.h"
unused_ezsigndocument_edit_object_v1_request_t* instantiate_unused_ezsigndocument_edit_object_v1_request(int include_optional);

#include "test_ezsigndocument_request.c"


unused_ezsigndocument_edit_object_v1_request_t* instantiate_unused_ezsigndocument_edit_object_v1_request(int include_optional) {
  unused_ezsigndocument_edit_object_v1_request_t* unused_ezsigndocument_edit_object_v1_request = NULL;
  if (include_optional) {
    unused_ezsigndocument_edit_object_v1_request = unused_ezsigndocument_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsigndocument_request(0)
    );
  } else {
    unused_ezsigndocument_edit_object_v1_request = unused_ezsigndocument_edit_object_v1_request_create(
      NULL
    );
  }

  return unused_ezsigndocument_edit_object_v1_request;
}


#ifdef unused_ezsigndocument_edit_object_v1_request_MAIN

void test_unused_ezsigndocument_edit_object_v1_request(int include_optional) {
    unused_ezsigndocument_edit_object_v1_request_t* unused_ezsigndocument_edit_object_v1_request_1 = instantiate_unused_ezsigndocument_edit_object_v1_request(include_optional);

	cJSON* jsonunused_ezsigndocument_edit_object_v1_request_1 = unused_ezsigndocument_edit_object_v1_request_convertToJSON(unused_ezsigndocument_edit_object_v1_request_1);
	printf("unused_ezsigndocument_edit_object_v1_request :\n%s\n", cJSON_Print(jsonunused_ezsigndocument_edit_object_v1_request_1));
	unused_ezsigndocument_edit_object_v1_request_t* unused_ezsigndocument_edit_object_v1_request_2 = unused_ezsigndocument_edit_object_v1_request_parseFromJSON(jsonunused_ezsigndocument_edit_object_v1_request_1);
	cJSON* jsonunused_ezsigndocument_edit_object_v1_request_2 = unused_ezsigndocument_edit_object_v1_request_convertToJSON(unused_ezsigndocument_edit_object_v1_request_2);
	printf("repeating unused_ezsigndocument_edit_object_v1_request:\n%s\n", cJSON_Print(jsonunused_ezsigndocument_edit_object_v1_request_2));
}

int main() {
  test_unused_ezsigndocument_edit_object_v1_request(1);
  test_unused_ezsigndocument_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // unused_ezsigndocument_edit_object_v1_request_MAIN
#endif // unused_ezsigndocument_edit_object_v1_request_TEST
