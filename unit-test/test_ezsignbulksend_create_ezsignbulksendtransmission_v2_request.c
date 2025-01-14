#ifndef ezsignbulksend_create_ezsignbulksendtransmission_v2_request_TEST
#define ezsignbulksend_create_ezsignbulksendtransmission_v2_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignbulksend_create_ezsignbulksendtransmission_v2_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignbulksend_create_ezsignbulksendtransmission_v2_request.h"
ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t* instantiate_ezsignbulksend_create_ezsignbulksendtransmission_v2_request(int include_optional);



ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t* instantiate_ezsignbulksend_create_ezsignbulksendtransmission_v2_request(int include_optional) {
  ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t* ezsignbulksend_create_ezsignbulksendtransmission_v2_request = NULL;
  if (include_optional) {
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create(
      2,
      1,
      "Test eZsign Bulk Send Transmission #1",
      "2020-12-31 23:59:59",
      30,
      30,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      "YQ=="
    );
  } else {
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create(
      2,
      1,
      "Test eZsign Bulk Send Transmission #1",
      "2020-12-31 23:59:59",
      30,
      30,
      "Hi John,

This is the document I need you to review.

Could you sign it before Monday please.

Best Regards.

Mary",
      "YQ=="
    );
  }

  return ezsignbulksend_create_ezsignbulksendtransmission_v2_request;
}


#ifdef ezsignbulksend_create_ezsignbulksendtransmission_v2_request_MAIN

void test_ezsignbulksend_create_ezsignbulksendtransmission_v2_request(int include_optional) {
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t* ezsignbulksend_create_ezsignbulksendtransmission_v2_request_1 = instantiate_ezsignbulksend_create_ezsignbulksendtransmission_v2_request(include_optional);

	cJSON* jsonezsignbulksend_create_ezsignbulksendtransmission_v2_request_1 = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_1);
	printf("ezsignbulksend_create_ezsignbulksendtransmission_v2_request :\n%s\n", cJSON_Print(jsonezsignbulksend_create_ezsignbulksendtransmission_v2_request_1));
	ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t* ezsignbulksend_create_ezsignbulksendtransmission_v2_request_2 = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_parseFromJSON(jsonezsignbulksend_create_ezsignbulksendtransmission_v2_request_1);
	cJSON* jsonezsignbulksend_create_ezsignbulksendtransmission_v2_request_2 = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_2);
	printf("repeating ezsignbulksend_create_ezsignbulksendtransmission_v2_request:\n%s\n", cJSON_Print(jsonezsignbulksend_create_ezsignbulksendtransmission_v2_request_2));
}

int main() {
  test_ezsignbulksend_create_ezsignbulksendtransmission_v2_request(1);
  test_ezsignbulksend_create_ezsignbulksendtransmission_v2_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignbulksend_create_ezsignbulksendtransmission_v2_request_MAIN
#endif // ezsignbulksend_create_ezsignbulksendtransmission_v2_request_TEST
