#ifndef custom_ezsignfoldersignerassociationmessage_request_TEST
#define custom_ezsignfoldersignerassociationmessage_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignfoldersignerassociationmessage_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignfoldersignerassociationmessage_request.h"
custom_ezsignfoldersignerassociationmessage_request_t* instantiate_custom_ezsignfoldersignerassociationmessage_request(int include_optional);



custom_ezsignfoldersignerassociationmessage_request_t* instantiate_custom_ezsignfoldersignerassociationmessage_request(int include_optional) {
  custom_ezsignfoldersignerassociationmessage_request_t* custom_ezsignfoldersignerassociationmessage_request = NULL;
  if (include_optional) {
    custom_ezsignfoldersignerassociationmessage_request = custom_ezsignfoldersignerassociationmessage_request_create(
      20,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  } else {
    custom_ezsignfoldersignerassociationmessage_request = custom_ezsignfoldersignerassociationmessage_request_create(
      20,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  }

  return custom_ezsignfoldersignerassociationmessage_request;
}


#ifdef custom_ezsignfoldersignerassociationmessage_request_MAIN

void test_custom_ezsignfoldersignerassociationmessage_request(int include_optional) {
    custom_ezsignfoldersignerassociationmessage_request_t* custom_ezsignfoldersignerassociationmessage_request_1 = instantiate_custom_ezsignfoldersignerassociationmessage_request(include_optional);

	cJSON* jsoncustom_ezsignfoldersignerassociationmessage_request_1 = custom_ezsignfoldersignerassociationmessage_request_convertToJSON(custom_ezsignfoldersignerassociationmessage_request_1);
	printf("custom_ezsignfoldersignerassociationmessage_request :\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociationmessage_request_1));
	custom_ezsignfoldersignerassociationmessage_request_t* custom_ezsignfoldersignerassociationmessage_request_2 = custom_ezsignfoldersignerassociationmessage_request_parseFromJSON(jsoncustom_ezsignfoldersignerassociationmessage_request_1);
	cJSON* jsoncustom_ezsignfoldersignerassociationmessage_request_2 = custom_ezsignfoldersignerassociationmessage_request_convertToJSON(custom_ezsignfoldersignerassociationmessage_request_2);
	printf("repeating custom_ezsignfoldersignerassociationmessage_request:\n%s\n", cJSON_Print(jsoncustom_ezsignfoldersignerassociationmessage_request_2));
}

int main() {
  test_custom_ezsignfoldersignerassociationmessage_request(1);
  test_custom_ezsignfoldersignerassociationmessage_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignfoldersignerassociationmessage_request_MAIN
#endif // custom_ezsignfoldersignerassociationmessage_request_TEST
