#ifndef ezsignsignergroup_response_TEST
#define ezsignsignergroup_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_response.h"
ezsignsignergroup_response_t* instantiate_ezsignsignergroup_response(int include_optional);



ezsignsignergroup_response_t* instantiate_ezsignsignergroup_response(int include_optional) {
  ezsignsignergroup_response_t* ezsignsignergroup_response = NULL;
  if (include_optional) {
    ezsignsignergroup_response = ezsignsignergroup_response_create(
      27
    );
  } else {
    ezsignsignergroup_response = ezsignsignergroup_response_create(
      27
    );
  }

  return ezsignsignergroup_response;
}


#ifdef ezsignsignergroup_response_MAIN

void test_ezsignsignergroup_response(int include_optional) {
    ezsignsignergroup_response_t* ezsignsignergroup_response_1 = instantiate_ezsignsignergroup_response(include_optional);

	cJSON* jsonezsignsignergroup_response_1 = ezsignsignergroup_response_convertToJSON(ezsignsignergroup_response_1);
	printf("ezsignsignergroup_response :\n%s\n", cJSON_Print(jsonezsignsignergroup_response_1));
	ezsignsignergroup_response_t* ezsignsignergroup_response_2 = ezsignsignergroup_response_parseFromJSON(jsonezsignsignergroup_response_1);
	cJSON* jsonezsignsignergroup_response_2 = ezsignsignergroup_response_convertToJSON(ezsignsignergroup_response_2);
	printf("repeating ezsignsignergroup_response:\n%s\n", cJSON_Print(jsonezsignsignergroup_response_2));
}

int main() {
  test_ezsignsignergroup_response(1);
  test_ezsignsignergroup_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_response_MAIN
#endif // ezsignsignergroup_response_TEST
