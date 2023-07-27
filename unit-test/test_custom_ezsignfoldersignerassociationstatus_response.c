#ifndef custom_ezsignfoldersignerassociationstatus_response_TEST
#define custom_ezsignfoldersignerassociationstatus_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignfoldersignerassociationstatus_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignfoldersignerassociationstatus_response.h"
custom_ezsignfoldersignerassociationstatus_response_t* instantiate_custom_ezsignfoldersignerassociationstatus_response(int include_optional);



custom_ezsignfoldersignerassociationstatus_response_t* instantiate_custom_ezsignfoldersignerassociationstatus_response(int include_optional) {
  custom_ezsignfoldersignerassociationstatus_response_t* custom_ezsignfoldersignerassociationstatus_response = NULL;
  if (include_optional) {
    custom_ezsignfoldersignerassociationstatus_response = custom_ezsignfoldersignerassociationstatus_response_create(
      20,
      "Doe",
      "John",
      "John Doe",
      list_createList()
    );
  } else {
    custom_ezsignfoldersignerassociationstatus_response = custom_ezsignfoldersignerassociationstatus_response_create(
      20,
      "Doe",
      "John",
      "John Doe",
      list_createList()
    );
  }

  return custom_ezsignfoldersignerassociationstatus_response;
}


#ifdef custom_ezsignfoldersignerassociationstatus_response_MAIN

void test_custom_ezsignfoldersignerassociationstatus_response(int include_optional) {
    custom_ezsignfoldersignerassociationstatus_response_t* custom_ezsignfoldersignerassociationstatus_response_1 = instantiate_custom_ezsignfoldersignerassociationstatus_response(include_optional);

	cJSON* jsoncustom_ezsignfoldersignerassociationstatus_response_1 = custom_ezsignfoldersignerassociationstatus_response_convertToJSON(custom_ezsignfoldersignerassociationstatus_response_1);
	printf("custom_ezsignfoldersignerassociationstatus_response :\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociationstatus_response_1));
	custom_ezsignfoldersignerassociationstatus_response_t* custom_ezsignfoldersignerassociationstatus_response_2 = custom_ezsignfoldersignerassociationstatus_response_parseFromJSON(jsoncustom_ezsignfoldersignerassociationstatus_response_1);
	cJSON* jsoncustom_ezsignfoldersignerassociationstatus_response_2 = custom_ezsignfoldersignerassociationstatus_response_convertToJSON(custom_ezsignfoldersignerassociationstatus_response_2);
	printf("repeating custom_ezsignfoldersignerassociationstatus_response:\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociationstatus_response_2));
}

int main() {
  test_custom_ezsignfoldersignerassociationstatus_response(1);
  test_custom_ezsignfoldersignerassociationstatus_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignfoldersignerassociationstatus_response_MAIN
#endif // custom_ezsignfoldersignerassociationstatus_response_TEST
