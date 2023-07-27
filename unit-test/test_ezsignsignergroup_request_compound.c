#ifndef ezsignsignergroup_request_compound_TEST
#define ezsignsignergroup_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_request_compound.h"
ezsignsignergroup_request_compound_t* instantiate_ezsignsignergroup_request_compound(int include_optional);

#include "test_multilingual_ezsignsignergroup_description.c"


ezsignsignergroup_request_compound_t* instantiate_ezsignsignergroup_request_compound(int include_optional) {
  ezsignsignergroup_request_compound_t* ezsignsignergroup_request_compound = NULL;
  if (include_optional) {
    ezsignsignergroup_request_compound = ezsignsignergroup_request_compound_create(
      27,
      33,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignsignergroup_description(0)
    );
  } else {
    ezsignsignergroup_request_compound = ezsignsignergroup_request_compound_create(
      27,
      33,
      NULL
    );
  }

  return ezsignsignergroup_request_compound;
}


#ifdef ezsignsignergroup_request_compound_MAIN

void test_ezsignsignergroup_request_compound(int include_optional) {
    ezsignsignergroup_request_compound_t* ezsignsignergroup_request_compound_1 = instantiate_ezsignsignergroup_request_compound(include_optional);

	cJSON* jsonezsignsignergroup_request_compound_1 = ezsignsignergroup_request_compound_convertToJSON(ezsignsignergroup_request_compound_1);
	printf("ezsignsignergroup_request_compound :\n%s\n", cJSON_Print(jsonezsignsignergroup_request_compound_1));
	ezsignsignergroup_request_compound_t* ezsignsignergroup_request_compound_2 = ezsignsignergroup_request_compound_parseFromJSON(jsonezsignsignergroup_request_compound_1);
	cJSON* jsonezsignsignergroup_request_compound_2 = ezsignsignergroup_request_compound_convertToJSON(ezsignsignergroup_request_compound_2);
	printf("repeating ezsignsignergroup_request_compound:\n%s\n", cJSON_Print(jsonezsignsignergroup_request_compound_2));
}

int main() {
  test_ezsignsignergroup_request_compound(1);
  test_ezsignsignergroup_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_request_compound_MAIN
#endif // ezsignsignergroup_request_compound_TEST
