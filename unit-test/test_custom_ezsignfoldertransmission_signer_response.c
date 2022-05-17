#ifndef custom_ezsignfoldertransmission_signer_response_TEST
#define custom_ezsignfoldertransmission_signer_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_ezsignfoldertransmission_signer_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_ezsignfoldertransmission_signer_response.h"
custom_ezsignfoldertransmission_signer_response_t* instantiate_custom_ezsignfoldertransmission_signer_response(int include_optional);



custom_ezsignfoldertransmission_signer_response_t* instantiate_custom_ezsignfoldertransmission_signer_response(int include_optional) {
  custom_ezsignfoldertransmission_signer_response_t* custom_ezsignfoldertransmission_signer_response = NULL;
  if (include_optional) {
    custom_ezsignfoldertransmission_signer_response = custom_ezsignfoldertransmission_signer_response_create(
      70,
      "John",
      "Doe"
    );
  } else {
    custom_ezsignfoldertransmission_signer_response = custom_ezsignfoldertransmission_signer_response_create(
      70,
      "John",
      "Doe"
    );
  }

  return custom_ezsignfoldertransmission_signer_response;
}


#ifdef custom_ezsignfoldertransmission_signer_response_MAIN

void test_custom_ezsignfoldertransmission_signer_response(int include_optional) {
    custom_ezsignfoldertransmission_signer_response_t* custom_ezsignfoldertransmission_signer_response_1 = instantiate_custom_ezsignfoldertransmission_signer_response(include_optional);

	cJSON* jsoncustom_ezsignfoldertransmission_signer_response_1 = custom_ezsignfoldertransmission_signer_response_convertToJSON(custom_ezsignfoldertransmission_signer_response_1);
	printf("custom_ezsignfoldertransmission_signer_response :\n%s\n", cJSON_Print(jsoncustom_ezsignfoldertransmission_signer_response_1));
	custom_ezsignfoldertransmission_signer_response_t* custom_ezsignfoldertransmission_signer_response_2 = custom_ezsignfoldertransmission_signer_response_parseFromJSON(jsoncustom_ezsignfoldertransmission_signer_response_1);
	cJSON* jsoncustom_ezsignfoldertransmission_signer_response_2 = custom_ezsignfoldertransmission_signer_response_convertToJSON(custom_ezsignfoldertransmission_signer_response_2);
	printf("repeating custom_ezsignfoldertransmission_signer_response:\n%s\n", cJSON_Print(jsoncustom_ezsignfoldertransmission_signer_response_2));
}

int main() {
  test_custom_ezsignfoldertransmission_signer_response(1);
  test_custom_ezsignfoldertransmission_signer_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_ezsignfoldertransmission_signer_response_MAIN
#endif // custom_ezsignfoldertransmission_signer_response_TEST
