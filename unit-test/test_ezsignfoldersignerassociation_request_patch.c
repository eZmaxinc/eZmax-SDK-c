#ifndef ezsignfoldersignerassociation_request_patch_TEST
#define ezsignfoldersignerassociation_request_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_request_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_request_patch.h"
ezsignfoldersignerassociation_request_patch_t* instantiate_ezsignfoldersignerassociation_request_patch(int include_optional);



ezsignfoldersignerassociation_request_patch_t* instantiate_ezsignfoldersignerassociation_request_patch(int include_optional) {
  ezsignfoldersignerassociation_request_patch_t* ezsignfoldersignerassociation_request_patch = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_request_patch = ezsignfoldersignerassociation_request_patch_create(
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  } else {
    ezsignfoldersignerassociation_request_patch = ezsignfoldersignerassociation_request_patch_create(
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  }

  return ezsignfoldersignerassociation_request_patch;
}


#ifdef ezsignfoldersignerassociation_request_patch_MAIN

void test_ezsignfoldersignerassociation_request_patch(int include_optional) {
    ezsignfoldersignerassociation_request_patch_t* ezsignfoldersignerassociation_request_patch_1 = instantiate_ezsignfoldersignerassociation_request_patch(include_optional);

	cJSON* jsonezsignfoldersignerassociation_request_patch_1 = ezsignfoldersignerassociation_request_patch_convertToJSON(ezsignfoldersignerassociation_request_patch_1);
	printf("ezsignfoldersignerassociation_request_patch :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_request_patch_1));
	ezsignfoldersignerassociation_request_patch_t* ezsignfoldersignerassociation_request_patch_2 = ezsignfoldersignerassociation_request_patch_parseFromJSON(jsonezsignfoldersignerassociation_request_patch_1);
	cJSON* jsonezsignfoldersignerassociation_request_patch_2 = ezsignfoldersignerassociation_request_patch_convertToJSON(ezsignfoldersignerassociation_request_patch_2);
	printf("repeating ezsignfoldersignerassociation_request_patch:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_request_patch_2));
}

int main() {
  test_ezsignfoldersignerassociation_request_patch(1);
  test_ezsignfoldersignerassociation_request_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_request_patch_MAIN
#endif // ezsignfoldersignerassociation_request_patch_TEST
