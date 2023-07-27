#ifndef custom_ezsignfoldersignerassociationmine_response_TEST
#define custom_ezsignfoldersignerassociationmine_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignfoldersignerassociationmine_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignfoldersignerassociationmine_response.h"
custom_ezsignfoldersignerassociationmine_response_t* instantiate_custom_ezsignfoldersignerassociationmine_response(int include_optional);



custom_ezsignfoldersignerassociationmine_response_t* instantiate_custom_ezsignfoldersignerassociationmine_response(int include_optional) {
  custom_ezsignfoldersignerassociationmine_response_t* custom_ezsignfoldersignerassociationmine_response = NULL;
  if (include_optional) {
    custom_ezsignfoldersignerassociationmine_response = custom_ezsignfoldersignerassociationmine_response_create(
      20,
      33
    );
  } else {
    custom_ezsignfoldersignerassociationmine_response = custom_ezsignfoldersignerassociationmine_response_create(
      20,
      33
    );
  }

  return custom_ezsignfoldersignerassociationmine_response;
}


#ifdef custom_ezsignfoldersignerassociationmine_response_MAIN

void test_custom_ezsignfoldersignerassociationmine_response(int include_optional) {
    custom_ezsignfoldersignerassociationmine_response_t* custom_ezsignfoldersignerassociationmine_response_1 = instantiate_custom_ezsignfoldersignerassociationmine_response(include_optional);

	cJSON* jsoncustom_ezsignfoldersignerassociationmine_response_1 = custom_ezsignfoldersignerassociationmine_response_convertToJSON(custom_ezsignfoldersignerassociationmine_response_1);
	printf("custom_ezsignfoldersignerassociationmine_response :\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociationmine_response_1));
	custom_ezsignfoldersignerassociationmine_response_t* custom_ezsignfoldersignerassociationmine_response_2 = custom_ezsignfoldersignerassociationmine_response_parseFromJSON(jsoncustom_ezsignfoldersignerassociationmine_response_1);
	cJSON* jsoncustom_ezsignfoldersignerassociationmine_response_2 = custom_ezsignfoldersignerassociationmine_response_convertToJSON(custom_ezsignfoldersignerassociationmine_response_2);
	printf("repeating custom_ezsignfoldersignerassociationmine_response:\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociationmine_response_2));
}

int main() {
  test_custom_ezsignfoldersignerassociationmine_response(1);
  test_custom_ezsignfoldersignerassociationmine_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignfoldersignerassociationmine_response_MAIN
#endif // custom_ezsignfoldersignerassociationmine_response_TEST
