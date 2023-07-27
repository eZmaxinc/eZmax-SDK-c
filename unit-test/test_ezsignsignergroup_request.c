#ifndef ezsignsignergroup_request_TEST
#define ezsignsignergroup_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_request.h"
ezsignsignergroup_request_t* instantiate_ezsignsignergroup_request(int include_optional);

#include "test_multilingual_ezsignsignergroup_description.c"


ezsignsignergroup_request_t* instantiate_ezsignsignergroup_request(int include_optional) {
  ezsignsignergroup_request_t* ezsignsignergroup_request = NULL;
  if (include_optional) {
    ezsignsignergroup_request = ezsignsignergroup_request_create(
      27,
      33,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignsignergroup_description(0)
    );
  } else {
    ezsignsignergroup_request = ezsignsignergroup_request_create(
      27,
      33,
      NULL
    );
  }

  return ezsignsignergroup_request;
}


#ifdef ezsignsignergroup_request_MAIN

void test_ezsignsignergroup_request(int include_optional) {
    ezsignsignergroup_request_t* ezsignsignergroup_request_1 = instantiate_ezsignsignergroup_request(include_optional);

	cJSON* jsonezsignsignergroup_request_1 = ezsignsignergroup_request_convertToJSON(ezsignsignergroup_request_1);
	printf("ezsignsignergroup_request :\n%s\n", cJSON_Print(jsonezsignsignergroup_request_1));
	ezsignsignergroup_request_t* ezsignsignergroup_request_2 = ezsignsignergroup_request_parseFromJSON(jsonezsignsignergroup_request_1);
	cJSON* jsonezsignsignergroup_request_2 = ezsignsignergroup_request_convertToJSON(ezsignsignergroup_request_2);
	printf("repeating ezsignsignergroup_request:\n%s\n", cJSON_Print(jsonezsignsignergroup_request_2));
}

int main() {
  test_ezsignsignergroup_request(1);
  test_ezsignsignergroup_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_request_MAIN
#endif // ezsignsignergroup_request_TEST
