#ifndef custom_communicationattachment_request_TEST
#define custom_communicationattachment_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_communicationattachment_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_communicationattachment_request.h"
custom_communicationattachment_request_t* instantiate_custom_communicationattachment_request(int include_optional);

#include "test_communicationattachment_request_compound.c"
#include "test_common_file.c"


custom_communicationattachment_request_t* instantiate_custom_communicationattachment_request(int include_optional) {
  custom_communicationattachment_request_t* custom_communicationattachment_request = NULL;
  if (include_optional) {
    custom_communicationattachment_request = custom_communicationattachment_request_create(
       // false, not to have infinite recursion
      instantiate_communicationattachment_request_compound(0),
       // false, not to have infinite recursion
      instantiate_common_file(0)
    );
  } else {
    custom_communicationattachment_request = custom_communicationattachment_request_create(
      NULL,
      NULL
    );
  }

  return custom_communicationattachment_request;
}


#ifdef custom_communicationattachment_request_MAIN

void test_custom_communicationattachment_request(int include_optional) {
    custom_communicationattachment_request_t* custom_communicationattachment_request_1 = instantiate_custom_communicationattachment_request(include_optional);

	cJSON* jsoncustom_communicationattachment_request_1 = custom_communicationattachment_request_convertToJSON(custom_communicationattachment_request_1);
	printf("custom_communicationattachment_request :\n%s\n", cJSON_Print(jsoncustom_communicationattachment_request_1));
	custom_communicationattachment_request_t* custom_communicationattachment_request_2 = custom_communicationattachment_request_parseFromJSON(jsoncustom_communicationattachment_request_1);
	cJSON* jsoncustom_communicationattachment_request_2 = custom_communicationattachment_request_convertToJSON(custom_communicationattachment_request_2);
	printf("repeating custom_communicationattachment_request:\n%s\n", cJSON_Print(jsoncustom_communicationattachment_request_2));
}

int main() {
  test_custom_communicationattachment_request(1);
  test_custom_communicationattachment_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_communicationattachment_request_MAIN
#endif // custom_communicationattachment_request_TEST
