#ifndef ezsignfoldersignerassociation_patch_object_v1_request_TEST
#define ezsignfoldersignerassociation_patch_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_patch_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_patch_object_v1_request.h"
ezsignfoldersignerassociation_patch_object_v1_request_t* instantiate_ezsignfoldersignerassociation_patch_object_v1_request(int include_optional);

#include "test_ezsignfoldersignerassociation_request_patch.c"


ezsignfoldersignerassociation_patch_object_v1_request_t* instantiate_ezsignfoldersignerassociation_patch_object_v1_request(int include_optional) {
  ezsignfoldersignerassociation_patch_object_v1_request_t* ezsignfoldersignerassociation_patch_object_v1_request = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_patch_object_v1_request = ezsignfoldersignerassociation_patch_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_ezsignfoldersignerassociation_request_patch(0)
    );
  } else {
    ezsignfoldersignerassociation_patch_object_v1_request = ezsignfoldersignerassociation_patch_object_v1_request_create(
      NULL
    );
  }

  return ezsignfoldersignerassociation_patch_object_v1_request;
}


#ifdef ezsignfoldersignerassociation_patch_object_v1_request_MAIN

void test_ezsignfoldersignerassociation_patch_object_v1_request(int include_optional) {
    ezsignfoldersignerassociation_patch_object_v1_request_t* ezsignfoldersignerassociation_patch_object_v1_request_1 = instantiate_ezsignfoldersignerassociation_patch_object_v1_request(include_optional);

	cJSON* jsonezsignfoldersignerassociation_patch_object_v1_request_1 = ezsignfoldersignerassociation_patch_object_v1_request_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_request_1);
	printf("ezsignfoldersignerassociation_patch_object_v1_request :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_patch_object_v1_request_1));
	ezsignfoldersignerassociation_patch_object_v1_request_t* ezsignfoldersignerassociation_patch_object_v1_request_2 = ezsignfoldersignerassociation_patch_object_v1_request_parseFromJSON(jsonezsignfoldersignerassociation_patch_object_v1_request_1);
	cJSON* jsonezsignfoldersignerassociation_patch_object_v1_request_2 = ezsignfoldersignerassociation_patch_object_v1_request_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_request_2);
	printf("repeating ezsignfoldersignerassociation_patch_object_v1_request:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_patch_object_v1_request_2));
}

int main() {
  test_ezsignfoldersignerassociation_patch_object_v1_request(1);
  test_ezsignfoldersignerassociation_patch_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_patch_object_v1_request_MAIN
#endif // ezsignfoldersignerassociation_patch_object_v1_request_TEST
