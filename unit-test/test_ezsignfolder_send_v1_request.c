#ifndef ezsignfolder_send_v1_request_TEST
#define ezsignfolder_send_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_send_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_send_v1_request.h"
ezsignfolder_send_v1_request_t* instantiate_ezsignfolder_send_v1_request(int include_optional);



ezsignfolder_send_v1_request_t* instantiate_ezsignfolder_send_v1_request(int include_optional) {
  ezsignfolder_send_v1_request_t* ezsignfolder_send_v1_request = NULL;
  if (include_optional) {
    ezsignfolder_send_v1_request = ezsignfolder_send_v1_request_create(
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  } else {
    ezsignfolder_send_v1_request = ezsignfolder_send_v1_request_create(
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary"
    );
  }

  return ezsignfolder_send_v1_request;
}


#ifdef ezsignfolder_send_v1_request_MAIN

void test_ezsignfolder_send_v1_request(int include_optional) {
    ezsignfolder_send_v1_request_t* ezsignfolder_send_v1_request_1 = instantiate_ezsignfolder_send_v1_request(include_optional);

	cJSON* jsonezsignfolder_send_v1_request_1 = ezsignfolder_send_v1_request_convertToJSON(ezsignfolder_send_v1_request_1);
	printf("ezsignfolder_send_v1_request :\n%s\n", cJSON_Print(jsonezsignfolder_send_v1_request_1));
	ezsignfolder_send_v1_request_t* ezsignfolder_send_v1_request_2 = ezsignfolder_send_v1_request_parseFromJSON(jsonezsignfolder_send_v1_request_1);
	cJSON* jsonezsignfolder_send_v1_request_2 = ezsignfolder_send_v1_request_convertToJSON(ezsignfolder_send_v1_request_2);
	printf("repeating ezsignfolder_send_v1_request:\n%s\n", cJSON_Print(jsonezsignfolder_send_v1_request_2));
}

int main() {
  test_ezsignfolder_send_v1_request(1);
  test_ezsignfolder_send_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_send_v1_request_MAIN
#endif // ezsignfolder_send_v1_request_TEST
