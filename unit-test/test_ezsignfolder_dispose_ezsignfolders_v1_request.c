#ifndef ezsignfolder_dispose_ezsignfolders_v1_request_TEST
#define ezsignfolder_dispose_ezsignfolders_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_dispose_ezsignfolders_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_dispose_ezsignfolders_v1_request.h"
ezsignfolder_dispose_ezsignfolders_v1_request_t* instantiate_ezsignfolder_dispose_ezsignfolders_v1_request(int include_optional);



ezsignfolder_dispose_ezsignfolders_v1_request_t* instantiate_ezsignfolder_dispose_ezsignfolders_v1_request(int include_optional) {
  ezsignfolder_dispose_ezsignfolders_v1_request_t* ezsignfolder_dispose_ezsignfolders_v1_request = NULL;
  if (include_optional) {
    ezsignfolder_dispose_ezsignfolders_v1_request = ezsignfolder_dispose_ezsignfolders_v1_request_create(
      list_createList()
    );
  } else {
    ezsignfolder_dispose_ezsignfolders_v1_request = ezsignfolder_dispose_ezsignfolders_v1_request_create(
      list_createList()
    );
  }

  return ezsignfolder_dispose_ezsignfolders_v1_request;
}


#ifdef ezsignfolder_dispose_ezsignfolders_v1_request_MAIN

void test_ezsignfolder_dispose_ezsignfolders_v1_request(int include_optional) {
    ezsignfolder_dispose_ezsignfolders_v1_request_t* ezsignfolder_dispose_ezsignfolders_v1_request_1 = instantiate_ezsignfolder_dispose_ezsignfolders_v1_request(include_optional);

	cJSON* jsonezsignfolder_dispose_ezsignfolders_v1_request_1 = ezsignfolder_dispose_ezsignfolders_v1_request_convertToJSON(ezsignfolder_dispose_ezsignfolders_v1_request_1);
	printf("ezsignfolder_dispose_ezsignfolders_v1_request :\n%s\n", cJSON_Print(jsonezsignfolder_dispose_ezsignfolders_v1_request_1));
	ezsignfolder_dispose_ezsignfolders_v1_request_t* ezsignfolder_dispose_ezsignfolders_v1_request_2 = ezsignfolder_dispose_ezsignfolders_v1_request_parseFromJSON(jsonezsignfolder_dispose_ezsignfolders_v1_request_1);
	cJSON* jsonezsignfolder_dispose_ezsignfolders_v1_request_2 = ezsignfolder_dispose_ezsignfolders_v1_request_convertToJSON(ezsignfolder_dispose_ezsignfolders_v1_request_2);
	printf("repeating ezsignfolder_dispose_ezsignfolders_v1_request:\n%s\n", cJSON_Print(jsonezsignfolder_dispose_ezsignfolders_v1_request_2));
}

int main() {
  test_ezsignfolder_dispose_ezsignfolders_v1_request(1);
  test_ezsignfolder_dispose_ezsignfolders_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_dispose_ezsignfolders_v1_request_MAIN
#endif // ezsignfolder_dispose_ezsignfolders_v1_request_TEST
