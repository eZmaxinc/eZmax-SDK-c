#ifndef ezsignfoldersignerassociation_request_TEST
#define ezsignfoldersignerassociation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfoldersignerassociation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfoldersignerassociation_request.h"
ezsignfoldersignerassociation_request_t* instantiate_ezsignfoldersignerassociation_request(int include_optional);



ezsignfoldersignerassociation_request_t* instantiate_ezsignfoldersignerassociation_request(int include_optional) {
  ezsignfoldersignerassociation_request_t* ezsignfoldersignerassociation_request = NULL;
  if (include_optional) {
    ezsignfoldersignerassociation_request = ezsignfoldersignerassociation_request_create(
      20,
      70,
      27,
      33,
      1,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  } else {
    ezsignfoldersignerassociation_request = ezsignfoldersignerassociation_request_create(
      20,
      70,
      27,
      33,
      1,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  }

  return ezsignfoldersignerassociation_request;
}


#ifdef ezsignfoldersignerassociation_request_MAIN

void test_ezsignfoldersignerassociation_request(int include_optional) {
    ezsignfoldersignerassociation_request_t* ezsignfoldersignerassociation_request_1 = instantiate_ezsignfoldersignerassociation_request(include_optional);

	cJSON* jsonezsignfoldersignerassociation_request_1 = ezsignfoldersignerassociation_request_convertToJSON(ezsignfoldersignerassociation_request_1);
	printf("ezsignfoldersignerassociation_request :\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_request_1));
	ezsignfoldersignerassociation_request_t* ezsignfoldersignerassociation_request_2 = ezsignfoldersignerassociation_request_parseFromJSON(jsonezsignfoldersignerassociation_request_1);
	cJSON* jsonezsignfoldersignerassociation_request_2 = ezsignfoldersignerassociation_request_convertToJSON(ezsignfoldersignerassociation_request_2);
	printf("repeating ezsignfoldersignerassociation_request:\n%s\n", cJSON_Print(jsonezsignfoldersignerassociation_request_2));
}

int main() {
  test_ezsignfoldersignerassociation_request(1);
  test_ezsignfoldersignerassociation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfoldersignerassociation_request_MAIN
#endif // ezsignfoldersignerassociation_request_TEST
