#ifndef ezsignfoldersignerassociation_request_compound_TEST
#define ezsignfoldersignerassociation_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_request_compound.h"
ezsignfoldersignerassociation_request_compound_t* instantiate_ezsignfoldersignerassociation_request_compound(int include_optional);

#include "test_ezsignsigner_request_compound.c"


ezsignfoldersignerassociation_request_compound_t* instantiate_ezsignfoldersignerassociation_request_compound(int include_optional) {
  ezsignfoldersignerassociation_request_compound_t* ezsignfoldersignerassociation_request_compound = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_request_compound = ezsignfoldersignerassociation_request_compound_create(
      20,
      70,
      27,
      33,
      1,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
       // false, not to have infinite recursion
      instantiate_ezsignsigner_request_compound(0)
    );
  } else {
    ezsignfoldersignerassociation_request_compound = ezsignfoldersignerassociation_request_compound_create(
      20,
      70,
      27,
      33,
      1,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      NULL
    );
  }

  return ezsignfoldersignerassociation_request_compound;
}


#ifdef ezsignfoldersignerassociation_request_compound_MAIN

void test_ezsignfoldersignerassociation_request_compound(int include_optional) {
    ezsignfoldersignerassociation_request_compound_t* ezsignfoldersignerassociation_request_compound_1 = instantiate_ezsignfoldersignerassociation_request_compound(include_optional);

	cJSON* jsonezsignfoldersignerassociation_request_compound_1 = ezsignfoldersignerassociation_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound_1);
	printf("ezsignfoldersignerassociation_request_compound :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_request_compound_1));
	ezsignfoldersignerassociation_request_compound_t* ezsignfoldersignerassociation_request_compound_2 = ezsignfoldersignerassociation_request_compound_parseFromJSON(jsonezsignfoldersignerassociation_request_compound_1);
	cJSON* jsonezsignfoldersignerassociation_request_compound_2 = ezsignfoldersignerassociation_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound_2);
	printf("repeating ezsignfoldersignerassociation_request_compound:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_request_compound_2));
}

int main() {
  test_ezsignfoldersignerassociation_request_compound(1);
  test_ezsignfoldersignerassociation_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_request_compound_MAIN
#endif // ezsignfoldersignerassociation_request_compound_TEST
