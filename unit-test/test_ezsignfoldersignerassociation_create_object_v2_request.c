#ifndef ezsignfoldersignerassociation_create_object_v2_request_TEST
#define ezsignfoldersignerassociation_create_object_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_create_object_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_create_object_v2_request.h"
ezsignfoldersignerassociation_create_object_v2_request_t* instantiate_ezsignfoldersignerassociation_create_object_v2_request(int include_optional);



ezsignfoldersignerassociation_create_object_v2_request_t* instantiate_ezsignfoldersignerassociation_create_object_v2_request(int include_optional) {
  ezsignfoldersignerassociation_create_object_v2_request_t* ezsignfoldersignerassociation_create_object_v2_request = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_create_object_v2_request = ezsignfoldersignerassociation_create_object_v2_request_create(
      list_createList()
    );
  } else {
    ezsignfoldersignerassociation_create_object_v2_request = ezsignfoldersignerassociation_create_object_v2_request_create(
      list_createList()
    );
  }

  return ezsignfoldersignerassociation_create_object_v2_request;
}


#ifdef ezsignfoldersignerassociation_create_object_v2_request_MAIN

void test_ezsignfoldersignerassociation_create_object_v2_request(int include_optional) {
    ezsignfoldersignerassociation_create_object_v2_request_t* ezsignfoldersignerassociation_create_object_v2_request_1 = instantiate_ezsignfoldersignerassociation_create_object_v2_request(include_optional);

	cJSON* jsonezsignfoldersignerassociation_create_object_v2_request_1 = ezsignfoldersignerassociation_create_object_v2_request_convertToJSON(ezsignfoldersignerassociation_create_object_v2_request_1);
	printf("ezsignfoldersignerassociation_create_object_v2_request :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_create_object_v2_request_1));
	ezsignfoldersignerassociation_create_object_v2_request_t* ezsignfoldersignerassociation_create_object_v2_request_2 = ezsignfoldersignerassociation_create_object_v2_request_parseFromJSON(jsonezsignfoldersignerassociation_create_object_v2_request_1);
	cJSON* jsonezsignfoldersignerassociation_create_object_v2_request_2 = ezsignfoldersignerassociation_create_object_v2_request_convertToJSON(ezsignfoldersignerassociation_create_object_v2_request_2);
	printf("repeating ezsignfoldersignerassociation_create_object_v2_request:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_create_object_v2_request_2));
}

int main() {
  test_ezsignfoldersignerassociation_create_object_v2_request(1);
  test_ezsignfoldersignerassociation_create_object_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_create_object_v2_request_MAIN
#endif // ezsignfoldersignerassociation_create_object_v2_request_TEST
