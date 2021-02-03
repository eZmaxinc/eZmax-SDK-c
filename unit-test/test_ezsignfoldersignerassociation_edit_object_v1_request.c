#ifndef ezsignfoldersignerassociation_edit_object_v1_request_TEST
#define ezsignfoldersignerassociation_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_edit_object_v1_request.h"
ezsignfoldersignerassociation_edit_object_v1_request_t* instantiate_ezsignfoldersignerassociation_edit_object_v1_request(int include_optional);

#include "test_ezsignfoldersignerassociation_request.c"


ezsignfoldersignerassociation_edit_object_v1_request_t* instantiate_ezsignfoldersignerassociation_edit_object_v1_request(int include_optional) {
  ezsignfoldersignerassociation_edit_object_v1_request_t* ezsignfoldersignerassociation_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_edit_object_v1_request = ezsignfoldersignerassociation_edit_object_v1_request_create(
      {"fkiUserID":48,"fkiEzsignfolderID":85}
    );
  } else {
    ezsignfoldersignerassociation_edit_object_v1_request = ezsignfoldersignerassociation_edit_object_v1_request_create(
      {"fkiUserID":48,"fkiEzsignfolderID":85}
    );
  }

  return ezsignfoldersignerassociation_edit_object_v1_request;
}


#ifdef ezsignfoldersignerassociation_edit_object_v1_request_MAIN

void test_ezsignfoldersignerassociation_edit_object_v1_request(int include_optional) {
    ezsignfoldersignerassociation_edit_object_v1_request_t* ezsignfoldersignerassociation_edit_object_v1_request_1 = instantiate_ezsignfoldersignerassociation_edit_object_v1_request(include_optional);

	cJSON* jsonezsignfoldersignerassociation_edit_object_v1_request_1 = ezsignfoldersignerassociation_edit_object_v1_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_request_1);
	printf("ezsignfoldersignerassociation_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_edit_object_v1_request_1));
	ezsignfoldersignerassociation_edit_object_v1_request_t* ezsignfoldersignerassociation_edit_object_v1_request_2 = ezsignfoldersignerassociation_edit_object_v1_request_parseFromJSON(jsonezsignfoldersignerassociation_edit_object_v1_request_1);
	cJSON* jsonezsignfoldersignerassociation_edit_object_v1_request_2 = ezsignfoldersignerassociation_edit_object_v1_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_request_2);
	printf("repeating ezsignfoldersignerassociation_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_edit_object_v1_request_2));
}

int main() {
  test_ezsignfoldersignerassociation_edit_object_v1_request(1);
  test_ezsignfoldersignerassociation_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_edit_object_v1_request_MAIN
#endif // ezsignfoldersignerassociation_edit_object_v1_request_TEST
