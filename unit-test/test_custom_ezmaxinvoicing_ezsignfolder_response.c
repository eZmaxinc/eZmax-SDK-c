#ifndef custom_ezmaxinvoicing_ezsignfolder_response_TEST
#define custom_ezmaxinvoicing_ezsignfolder_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezmaxinvoicing_ezsignfolder_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezmaxinvoicing_ezsignfolder_response.h"
custom_ezmaxinvoicing_ezsignfolder_response_t* instantiate_custom_ezmaxinvoicing_ezsignfolder_response(int include_optional);



custom_ezmaxinvoicing_ezsignfolder_response_t* instantiate_custom_ezmaxinvoicing_ezsignfolder_response(int include_optional) {
  custom_ezmaxinvoicing_ezsignfolder_response_t* custom_ezmaxinvoicing_ezsignfolder_response = NULL;
  if (include_optional) {
    custom_ezmaxinvoicing_ezsignfolder_response = custom_ezmaxinvoicing_ezsignfolder_response_create(
      33,
      1,
      "Test eZsign Folder",
      true,
      true,
      true,
      1
    );
  } else {
    custom_ezmaxinvoicing_ezsignfolder_response = custom_ezmaxinvoicing_ezsignfolder_response_create(
      33,
      1,
      "Test eZsign Folder",
      true,
      true,
      true,
      1
    );
  }

  return custom_ezmaxinvoicing_ezsignfolder_response;
}


#ifdef custom_ezmaxinvoicing_ezsignfolder_response_MAIN

void test_custom_ezmaxinvoicing_ezsignfolder_response(int include_optional) {
    custom_ezmaxinvoicing_ezsignfolder_response_t* custom_ezmaxinvoicing_ezsignfolder_response_1 = instantiate_custom_ezmaxinvoicing_ezsignfolder_response(include_optional);

	cJSON* jsoncustom_ezmaxinvoicing_ezsignfolder_response_1 = custom_ezmaxinvoicing_ezsignfolder_response_convertToJSON(custom_ezmaxinvoicing_ezsignfolder_response_1);
	printf("custom_ezmaxinvoicing_ezsignfolder_response :\n%s\n", cJSON_Print(jsoncustom_ezmaxinvoicing_ezsignfolder_response_1));
	custom_ezmaxinvoicing_ezsignfolder_response_t* custom_ezmaxinvoicing_ezsignfolder_response_2 = custom_ezmaxinvoicing_ezsignfolder_response_parseFromJSON(jsoncustom_ezmaxinvoicing_ezsignfolder_response_1);
	cJSON* jsoncustom_ezmaxinvoicing_ezsignfolder_response_2 = custom_ezmaxinvoicing_ezsignfolder_response_convertToJSON(custom_ezmaxinvoicing_ezsignfolder_response_2);
	printf("repeating custom_ezmaxinvoicing_ezsignfolder_response:\n%s\n", cJSON_Print(jsoncustom_ezmaxinvoicing_ezsignfolder_response_2));
}

int main() {
  test_custom_ezmaxinvoicing_ezsignfolder_response(1);
  test_custom_ezmaxinvoicing_ezsignfolder_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezmaxinvoicing_ezsignfolder_response_MAIN
#endif // custom_ezmaxinvoicing_ezsignfolder_response_TEST
