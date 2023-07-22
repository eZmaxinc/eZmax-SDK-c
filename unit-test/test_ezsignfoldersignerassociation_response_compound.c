#ifndef ezsignfoldersignerassociation_response_compound_TEST
#define ezsignfoldersignerassociation_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_response_compound.h"
ezsignfoldersignerassociation_response_compound_t* instantiate_ezsignfoldersignerassociation_response_compound(int include_optional);

#include "test_ezsignsignergroup_response_compound.c"
#include "test_ezsignfoldersignerassociation_response_compound_user.c"
#include "test_usergroup_response_compound.c"
#include "test_ezsignsigner_response_compound.c"


ezsignfoldersignerassociation_response_compound_t* instantiate_ezsignfoldersignerassociation_response_compound(int include_optional) {
  ezsignfoldersignerassociation_response_compound_t* ezsignfoldersignerassociation_response_compound = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_response_compound = ezsignfoldersignerassociation_response_compound_create(
      20,
      33,
      1,
      1,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
       // false, not to have infinite recursion
      instantiate_ezsignsignergroup_response_compound(0),
       // false, not to have infinite recursion
      instantiate_ezsignfoldersignerassociation_response_compound_user(0),
       // false, not to have infinite recursion
      instantiate_usergroup_response_compound(0),
       // false, not to have infinite recursion
      instantiate_ezsignsigner_response_compound(0)
    );
  } else {
    ezsignfoldersignerassociation_response_compound = ezsignfoldersignerassociation_response_compound_create(
      20,
      33,
      1,
      1,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return ezsignfoldersignerassociation_response_compound;
}


#ifdef ezsignfoldersignerassociation_response_compound_MAIN

void test_ezsignfoldersignerassociation_response_compound(int include_optional) {
    ezsignfoldersignerassociation_response_compound_t* ezsignfoldersignerassociation_response_compound_1 = instantiate_ezsignfoldersignerassociation_response_compound(include_optional);

	cJSON* jsonezsignfoldersignerassociation_response_compound_1 = ezsignfoldersignerassociation_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_1);
	printf("ezsignfoldersignerassociation_response_compound :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_compound_1));
	ezsignfoldersignerassociation_response_compound_t* ezsignfoldersignerassociation_response_compound_2 = ezsignfoldersignerassociation_response_compound_parseFromJSON(jsonezsignfoldersignerassociation_response_compound_1);
	cJSON* jsonezsignfoldersignerassociation_response_compound_2 = ezsignfoldersignerassociation_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_2);
	printf("repeating ezsignfoldersignerassociation_response_compound:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_compound_2));
}

int main() {
  test_ezsignfoldersignerassociation_response_compound(1);
  test_ezsignfoldersignerassociation_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_response_compound_MAIN
#endif // ezsignfoldersignerassociation_response_compound_TEST
