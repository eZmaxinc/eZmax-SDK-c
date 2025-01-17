#ifndef custom_communicationsender_response_TEST
#define custom_communicationsender_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_communicationsender_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_communicationsender_response.h"
custom_communicationsender_response_t* instantiate_custom_communicationsender_response(int include_optional);

#include "test_custom_contact_name_response.c"
#include "test_email_response_compound.c"
#include "test_phone_response_compound.c"
#include "test_phone_response_compound.c"


custom_communicationsender_response_t* instantiate_custom_communicationsender_response(int include_optional) {
  custom_communicationsender_response_t* custom_communicationsender_response = NULL;
  if (include_optional) {
    custom_communicationsender_response = custom_communicationsender_response_create(
      1,
      26,
      70,
      47,
      47,
      ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_"User",
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
    custom_communicationsender_response = custom_communicationsender_response_create(
      1,
      26,
      70,
      47,
      47,
      ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_"User",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return custom_communicationsender_response;
}


#ifdef custom_communicationsender_response_MAIN

void test_custom_communicationsender_response(int include_optional) {
    custom_communicationsender_response_t* custom_communicationsender_response_1 = instantiate_custom_communicationsender_response(include_optional);

	cJSON* jsoncustom_communicationsender_response_1 = custom_communicationsender_response_convertToJSON(custom_communicationsender_response_1);
	printf("custom_communicationsender_response :\n%s\n", cJSON_Print(jsoncustom_communicationsender_response_1));
	custom_communicationsender_response_t* custom_communicationsender_response_2 = custom_communicationsender_response_parseFromJSON(jsoncustom_communicationsender_response_1);
	cJSON* jsoncustom_communicationsender_response_2 = custom_communicationsender_response_convertToJSON(custom_communicationsender_response_2);
	printf("repeating custom_communicationsender_response:\n%s\n", cJSON_Print(jsoncustom_communicationsender_response_2));
}

int main() {
  test_custom_communicationsender_response(1);
  test_custom_communicationsender_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_communicationsender_response_MAIN
#endif // custom_communicationsender_response_TEST
