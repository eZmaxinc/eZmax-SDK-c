#ifndef ezsignfoldersignerassociation_reassign_v1_request_TEST
#define ezsignfoldersignerassociation_reassign_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_reassign_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_reassign_v1_request.h"
ezsignfoldersignerassociation_reassign_v1_request_t* instantiate_ezsignfoldersignerassociation_reassign_v1_request(int include_optional);



ezsignfoldersignerassociation_reassign_v1_request_t* instantiate_ezsignfoldersignerassociation_reassign_v1_request(int include_optional) {
  ezsignfoldersignerassociation_reassign_v1_request_t* ezsignfoldersignerassociation_reassign_v1_request = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_reassign_v1_request = ezsignfoldersignerassociation_reassign_v1_request_create(
      20
    );
  } else {
    ezsignfoldersignerassociation_reassign_v1_request = ezsignfoldersignerassociation_reassign_v1_request_create(
      20
    );
  }

  return ezsignfoldersignerassociation_reassign_v1_request;
}


#ifdef ezsignfoldersignerassociation_reassign_v1_request_MAIN

void test_ezsignfoldersignerassociation_reassign_v1_request(int include_optional) {
    ezsignfoldersignerassociation_reassign_v1_request_t* ezsignfoldersignerassociation_reassign_v1_request_1 = instantiate_ezsignfoldersignerassociation_reassign_v1_request(include_optional);

	cJSON* jsonezsignfoldersignerassociation_reassign_v1_request_1 = ezsignfoldersignerassociation_reassign_v1_request_convertToJSON(ezsignfoldersignerassociation_reassign_v1_request_1);
	printf("ezsignfoldersignerassociation_reassign_v1_request :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_reassign_v1_request_1));
	ezsignfoldersignerassociation_reassign_v1_request_t* ezsignfoldersignerassociation_reassign_v1_request_2 = ezsignfoldersignerassociation_reassign_v1_request_parseFromJSON(jsonezsignfoldersignerassociation_reassign_v1_request_1);
	cJSON* jsonezsignfoldersignerassociation_reassign_v1_request_2 = ezsignfoldersignerassociation_reassign_v1_request_convertToJSON(ezsignfoldersignerassociation_reassign_v1_request_2);
	printf("repeating ezsignfoldersignerassociation_reassign_v1_request:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_reassign_v1_request_2));
}

int main() {
  test_ezsignfoldersignerassociation_reassign_v1_request(1);
  test_ezsignfoldersignerassociation_reassign_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_reassign_v1_request_MAIN
#endif // ezsignfoldersignerassociation_reassign_v1_request_TEST
