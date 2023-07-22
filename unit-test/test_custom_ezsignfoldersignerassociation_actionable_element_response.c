#ifndef custom_ezsignfoldersignerassociation_actionable_element_response_TEST
#define custom_ezsignfoldersignerassociation_actionable_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignfoldersignerassociation_actionable_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignfoldersignerassociation_actionable_element_response.h"
custom_ezsignfoldersignerassociation_actionable_element_response_t* instantiate_custom_ezsignfoldersignerassociation_actionable_element_response(int include_optional);

#include "test_ezsignsignergroup_response_compound.c"
#include "test_ezsignfoldersignerassociation_response_compound_user.c"
#include "test_usergroup_response_compound.c"
#include "test_ezsignsigner_response_compound.c"


custom_ezsignfoldersignerassociation_actionable_element_response_t* instantiate_custom_ezsignfoldersignerassociation_actionable_element_response(int include_optional) {
  custom_ezsignfoldersignerassociation_actionable_element_response_t* custom_ezsignfoldersignerassociation_actionable_element_response = NULL;
  if (include_optional) {
    custom_ezsignfoldersignerassociation_actionable_element_response = custom_ezsignfoldersignerassociation_actionable_element_response_create(
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
      instantiate_ezsignsigner_response_compound(0),
      1,
      1
    );
  } else {
    custom_ezsignfoldersignerassociation_actionable_element_response = custom_ezsignfoldersignerassociation_actionable_element_response_create(
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
      NULL,
      1,
      1
    );
  }

  return custom_ezsignfoldersignerassociation_actionable_element_response;
}


#ifdef custom_ezsignfoldersignerassociation_actionable_element_response_MAIN

void test_custom_ezsignfoldersignerassociation_actionable_element_response(int include_optional) {
    custom_ezsignfoldersignerassociation_actionable_element_response_t* custom_ezsignfoldersignerassociation_actionable_element_response_1 = instantiate_custom_ezsignfoldersignerassociation_actionable_element_response(include_optional);

	cJSON* jsoncustom_ezsignfoldersignerassociation_actionable_element_response_1 = custom_ezsignfoldersignerassociation_actionable_element_response_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_1);
	printf("custom_ezsignfoldersignerassociation_actionable_element_response :\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociation_actionable_element_response_1));
	custom_ezsignfoldersignerassociation_actionable_element_response_t* custom_ezsignfoldersignerassociation_actionable_element_response_2 = custom_ezsignfoldersignerassociation_actionable_element_response_parseFromJSON(jsoncustom_ezsignfoldersignerassociation_actionable_element_response_1);
	cJSON* jsoncustom_ezsignfoldersignerassociation_actionable_element_response_2 = custom_ezsignfoldersignerassociation_actionable_element_response_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_2);
	printf("repeating custom_ezsignfoldersignerassociation_actionable_element_response:\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociation_actionable_element_response_2));
}

int main() {
  test_custom_ezsignfoldersignerassociation_actionable_element_response(1);
  test_custom_ezsignfoldersignerassociation_actionable_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignfoldersignerassociation_actionable_element_response_MAIN
#endif // custom_ezsignfoldersignerassociation_actionable_element_response_TEST
