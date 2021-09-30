#ifndef ezsigndocument_apply_ezsigntemplate_v2_request_TEST
#define ezsigndocument_apply_ezsigntemplate_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_apply_ezsigntemplate_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_apply_ezsigntemplate_v2_request.h"
ezsigndocument_apply_ezsigntemplate_v2_request_t* instantiate_ezsigndocument_apply_ezsigntemplate_v2_request(int include_optional);



ezsigndocument_apply_ezsigntemplate_v2_request_t* instantiate_ezsigndocument_apply_ezsigntemplate_v2_request(int include_optional) {
  ezsigndocument_apply_ezsigntemplate_v2_request_t* ezsigndocument_apply_ezsigntemplate_v2_request = NULL;
  if (include_optional) {
    ezsigndocument_apply_ezsigntemplate_v2_request = ezsigndocument_apply_ezsigntemplate_v2_request_create(
      36,
      list_create(),
      list_create()
    );
  } else {
    ezsigndocument_apply_ezsigntemplate_v2_request = ezsigndocument_apply_ezsigntemplate_v2_request_create(
      36,
      list_create(),
      list_create()
    );
  }

  return ezsigndocument_apply_ezsigntemplate_v2_request;
}


#ifdef ezsigndocument_apply_ezsigntemplate_v2_request_MAIN

void test_ezsigndocument_apply_ezsigntemplate_v2_request(int include_optional) {
    ezsigndocument_apply_ezsigntemplate_v2_request_t* ezsigndocument_apply_ezsigntemplate_v2_request_1 = instantiate_ezsigndocument_apply_ezsigntemplate_v2_request(include_optional);

	cJSON* jsonezsigndocument_apply_ezsigntemplate_v2_request_1 = ezsigndocument_apply_ezsigntemplate_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_request_1);
	printf("ezsigndocument_apply_ezsigntemplate_v2_request :\n%s\n", cJSON_Print(jsonezsigndocument_apply_ezsigntemplate_v2_request_1));
	ezsigndocument_apply_ezsigntemplate_v2_request_t* ezsigndocument_apply_ezsigntemplate_v2_request_2 = ezsigndocument_apply_ezsigntemplate_v2_request_parseFromJSON(jsonezsigndocument_apply_ezsigntemplate_v2_request_1);
	cJSON* jsonezsigndocument_apply_ezsigntemplate_v2_request_2 = ezsigndocument_apply_ezsigntemplate_v2_request_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_request_2);
	printf("repeating ezsigndocument_apply_ezsigntemplate_v2_request:\n%s\n", cJSON_Print(jsonezsigndocument_apply_ezsigntemplate_v2_request_2));
}

int main() {
  test_ezsigndocument_apply_ezsigntemplate_v2_request(1);
  test_ezsigndocument_apply_ezsigntemplate_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_apply_ezsigntemplate_v2_request_MAIN
#endif // ezsigndocument_apply_ezsigntemplate_v2_request_TEST
