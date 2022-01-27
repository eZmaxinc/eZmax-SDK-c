#ifndef ezsignfoldersignerassociation_response_TEST
#define ezsignfoldersignerassociation_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_response.h"
ezsignfoldersignerassociation_response_t* instantiate_ezsignfoldersignerassociation_response(int include_optional);



ezsignfoldersignerassociation_response_t* instantiate_ezsignfoldersignerassociation_response(int include_optional) {
  ezsignfoldersignerassociation_response_t* ezsignfoldersignerassociation_response = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_response = ezsignfoldersignerassociation_response_create(
      20,
      33,
      1
    );
  } else {
    ezsignfoldersignerassociation_response = ezsignfoldersignerassociation_response_create(
      20,
      33,
      1
    );
  }

  return ezsignfoldersignerassociation_response;
}


#ifdef ezsignfoldersignerassociation_response_MAIN

void test_ezsignfoldersignerassociation_response(int include_optional) {
    ezsignfoldersignerassociation_response_t* ezsignfoldersignerassociation_response_1 = instantiate_ezsignfoldersignerassociation_response(include_optional);

	cJSON* jsonezsignfoldersignerassociation_response_1 = ezsignfoldersignerassociation_response_convertToJSON(ezsignfoldersignerassociation_response_1);
	printf("ezsignfoldersignerassociation_response :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_1));
	ezsignfoldersignerassociation_response_t* ezsignfoldersignerassociation_response_2 = ezsignfoldersignerassociation_response_parseFromJSON(jsonezsignfoldersignerassociation_response_1);
	cJSON* jsonezsignfoldersignerassociation_response_2 = ezsignfoldersignerassociation_response_convertToJSON(ezsignfoldersignerassociation_response_2);
	printf("repeating ezsignfoldersignerassociation_response:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_2));
}

int main() {
  test_ezsignfoldersignerassociation_response(1);
  test_ezsignfoldersignerassociation_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_response_MAIN
#endif // ezsignfoldersignerassociation_response_TEST
