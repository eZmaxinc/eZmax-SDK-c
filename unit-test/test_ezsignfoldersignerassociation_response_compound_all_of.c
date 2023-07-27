#ifndef ezsignfoldersignerassociation_response_compound_all_of_TEST
#define ezsignfoldersignerassociation_response_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_response_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_response_compound_all_of.h"
ezsignfoldersignerassociation_response_compound_all_of_t* instantiate_ezsignfoldersignerassociation_response_compound_all_of(int include_optional);

#include "test_ezsignsignergroup_response_compound.c"
#include "test_ezsignfoldersignerassociation_response_compound_user.c"
#include "test_ezsignsigner_response_compound.c"


ezsignfoldersignerassociation_response_compound_all_of_t* instantiate_ezsignfoldersignerassociation_response_compound_all_of(int include_optional) {
  ezsignfoldersignerassociation_response_compound_all_of_t* ezsignfoldersignerassociation_response_compound_all_of = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_response_compound_all_of = ezsignfoldersignerassociation_response_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsignsignergroup_response_compound(0),
       // false, not to have infinite recursion
      instantiate_ezsignfoldersignerassociation_response_compound_user(0),
       // false, not to have infinite recursion
      instantiate_ezsignsigner_response_compound(0)
    );
  } else {
    ezsignfoldersignerassociation_response_compound_all_of = ezsignfoldersignerassociation_response_compound_all_of_create(
      NULL,
      NULL,
      NULL
    );
  }

  return ezsignfoldersignerassociation_response_compound_all_of;
}


#ifdef ezsignfoldersignerassociation_response_compound_all_of_MAIN

void test_ezsignfoldersignerassociation_response_compound_all_of(int include_optional) {
    ezsignfoldersignerassociation_response_compound_all_of_t* ezsignfoldersignerassociation_response_compound_all_of_1 = instantiate_ezsignfoldersignerassociation_response_compound_all_of(include_optional);

	cJSON* jsonezsignfoldersignerassociation_response_compound_all_of_1 = ezsignfoldersignerassociation_response_compound_all_of_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of_1);
	printf("ezsignfoldersignerassociation_response_compound_all_of :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_compound_all_of_1));
	ezsignfoldersignerassociation_response_compound_all_of_t* ezsignfoldersignerassociation_response_compound_all_of_2 = ezsignfoldersignerassociation_response_compound_all_of_parseFromJSON(jsonezsignfoldersignerassociation_response_compound_all_of_1);
	cJSON* jsonezsignfoldersignerassociation_response_compound_all_of_2 = ezsignfoldersignerassociation_response_compound_all_of_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of_2);
	printf("repeating ezsignfoldersignerassociation_response_compound_all_of:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_compound_all_of_2));
}

int main() {
  test_ezsignfoldersignerassociation_response_compound_all_of(1);
  test_ezsignfoldersignerassociation_response_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_response_compound_all_of_MAIN
#endif // ezsignfoldersignerassociation_response_compound_all_of_TEST
