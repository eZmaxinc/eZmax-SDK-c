#ifndef custom_communicationrecipientsrecipient_response_TEST
#define custom_communicationrecipientsrecipient_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_communicationrecipientsrecipient_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_communicationrecipientsrecipient_response.h"
custom_communicationrecipientsrecipient_response_t* instantiate_custom_communicationrecipientsrecipient_response(int include_optional);

#include "test_custom_contact_name_response.c"
#include "test_email_response_compound.c"
#include "test_phone_response_compound.c"
#include "test_phone_response_compound.c"


custom_communicationrecipientsrecipient_response_t* instantiate_custom_communicationrecipientsrecipient_response(int include_optional) {
  custom_communicationrecipientsrecipient_response_t* custom_communicationrecipientsrecipient_response = NULL;
  if (include_optional) {
    custom_communicationrecipientsrecipient_response = custom_communicationrecipientsrecipient_response_create(
      1,
      26,
      21,
      18,
      31,
      89,
      50,
      70,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_"User",
       // false, not to have infinite recursion
      instantiate_custom_contact_name_response(0),
       // false, not to have infinite recursion
      instantiate_email_response_compound(0),
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0),
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0)
    );
  } else {
    custom_communicationrecipientsrecipient_response = custom_communicationrecipientsrecipient_response_create(
      1,
      26,
      21,
      18,
      31,
      89,
      50,
      70,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_"User",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return custom_communicationrecipientsrecipient_response;
}


#ifdef custom_communicationrecipientsrecipient_response_MAIN

void test_custom_communicationrecipientsrecipient_response(int include_optional) {
    custom_communicationrecipientsrecipient_response_t* custom_communicationrecipientsrecipient_response_1 = instantiate_custom_communicationrecipientsrecipient_response(include_optional);

	cJSON* jsoncustom_communicationrecipientsrecipient_response_1 = custom_communicationrecipientsrecipient_response_convertToJSON(custom_communicationrecipientsrecipient_response_1);
	printf("custom_communicationrecipientsrecipient_response :\n%s\n", cJSON_Print(jsoncustom_communicationrecipientsrecipient_response_1));
	custom_communicationrecipientsrecipient_response_t* custom_communicationrecipientsrecipient_response_2 = custom_communicationrecipientsrecipient_response_parseFromJSON(jsoncustom_communicationrecipientsrecipient_response_1);
	cJSON* jsoncustom_communicationrecipientsrecipient_response_2 = custom_communicationrecipientsrecipient_response_convertToJSON(custom_communicationrecipientsrecipient_response_2);
	printf("repeating custom_communicationrecipientsrecipient_response:\n%s\n", cJSON_Print(jsoncustom_communicationrecipientsrecipient_response_2));
}

int main() {
  test_custom_communicationrecipientsrecipient_response(1);
  test_custom_communicationrecipientsrecipient_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_communicationrecipientsrecipient_response_MAIN
#endif // custom_communicationrecipientsrecipient_response_TEST
