#ifndef ezsignsignergroup_response_compound_TEST
#define ezsignsignergroup_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignergroup_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignergroup_response_compound.h"
ezsignsignergroup_response_compound_t* instantiate_ezsignsignergroup_response_compound(int include_optional);

#include "test_multilingual_ezsignsignergroup_description.c"


ezsignsignergroup_response_compound_t* instantiate_ezsignsignergroup_response_compound(int include_optional) {
  ezsignsignergroup_response_compound_t* ezsignsignergroup_response_compound = NULL;
  if (include_optional) {
    ezsignsignergroup_response_compound = ezsignsignergroup_response_compound_create(
      27,
       // false, not to have infinite recursion
      instantiate_multilingual_ezsignsignergroup_description(0),
      "HR"
    );
  } else {
    ezsignsignergroup_response_compound = ezsignsignergroup_response_compound_create(
      27,
      NULL,
      "HR"
    );
  }

  return ezsignsignergroup_response_compound;
}


#ifdef ezsignsignergroup_response_compound_MAIN

void test_ezsignsignergroup_response_compound(int include_optional) {
    ezsignsignergroup_response_compound_t* ezsignsignergroup_response_compound_1 = instantiate_ezsignsignergroup_response_compound(include_optional);

	cJSON* jsonezsignsignergroup_response_compound_1 = ezsignsignergroup_response_compound_convertToJSON(ezsignsignergroup_response_compound_1);
	printf("ezsignsignergroup_response_compound :\n%s\n", cJSON_Print(jsonezsignsignergroup_response_compound_1));
	ezsignsignergroup_response_compound_t* ezsignsignergroup_response_compound_2 = ezsignsignergroup_response_compound_parseFromJSON(jsonezsignsignergroup_response_compound_1);
	cJSON* jsonezsignsignergroup_response_compound_2 = ezsignsignergroup_response_compound_convertToJSON(ezsignsignergroup_response_compound_2);
	printf("repeating ezsignsignergroup_response_compound:\n%s\n", cJSON_Print(jsonezsignsignergroup_response_compound_2));
}

int main() {
  test_ezsignsignergroup_response_compound(1);
  test_ezsignsignergroup_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignergroup_response_compound_MAIN
#endif // ezsignsignergroup_response_compound_TEST
