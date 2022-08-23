#ifndef ezsignfoldersignerassociation_response_compound_user_TEST
#define ezsignfoldersignerassociation_response_compound_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_response_compound_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_response_compound_user.h"
ezsignfoldersignerassociation_response_compound_user_t* instantiate_ezsignfoldersignerassociation_response_compound_user(int include_optional);



ezsignfoldersignerassociation_response_compound_user_t* instantiate_ezsignfoldersignerassociation_response_compound_user(int include_optional) {
  ezsignfoldersignerassociation_response_compound_user_t* ezsignfoldersignerassociation_response_compound_user = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_response_compound_user = ezsignfoldersignerassociation_response_compound_user_create(
      70,
      2,
      "John",
      "Doe",
      "email@example.com"
    );
  } else {
    ezsignfoldersignerassociation_response_compound_user = ezsignfoldersignerassociation_response_compound_user_create(
      70,
      2,
      "John",
      "Doe",
      "email@example.com"
    );
  }

  return ezsignfoldersignerassociation_response_compound_user;
}


#ifdef ezsignfoldersignerassociation_response_compound_user_MAIN

void test_ezsignfoldersignerassociation_response_compound_user(int include_optional) {
    ezsignfoldersignerassociation_response_compound_user_t* ezsignfoldersignerassociation_response_compound_user_1 = instantiate_ezsignfoldersignerassociation_response_compound_user(include_optional);

	cJSON* jsonezsignfoldersignerassociation_response_compound_user_1 = ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_response_compound_user_1);
	printf("ezsignfoldersignerassociation_response_compound_user :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_compound_user_1));
	ezsignfoldersignerassociation_response_compound_user_t* ezsignfoldersignerassociation_response_compound_user_2 = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(jsonezsignfoldersignerassociation_response_compound_user_1);
	cJSON* jsonezsignfoldersignerassociation_response_compound_user_2 = ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_response_compound_user_2);
	printf("repeating ezsignfoldersignerassociation_response_compound_user:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_response_compound_user_2));
}

int main() {
  test_ezsignfoldersignerassociation_response_compound_user(1);
  test_ezsignfoldersignerassociation_response_compound_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_response_compound_user_MAIN
#endif // ezsignfoldersignerassociation_response_compound_user_TEST
