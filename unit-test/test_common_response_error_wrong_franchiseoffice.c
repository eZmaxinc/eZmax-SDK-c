#ifndef common_response_error_wrong_franchiseoffice_TEST
#define common_response_error_wrong_franchiseoffice_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_error_wrong_franchiseoffice_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_error_wrong_franchiseoffice.h"
common_response_error_wrong_franchiseoffice_t* instantiate_common_response_error_wrong_franchiseoffice(int include_optional);



common_response_error_wrong_franchiseoffice_t* instantiate_common_response_error_wrong_franchiseoffice(int include_optional) {
  common_response_error_wrong_franchiseoffice_t* common_response_error_wrong_franchiseoffice = NULL;
  if (include_optional) {
    common_response_error_wrong_franchiseoffice = common_response_error_wrong_franchiseoffice_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_common_response_error_wrong_franchiseoffice__"BADREQUEST",
      list_createList(),
      117,
      "Default",
      50,
      "Default"
    );
  } else {
    common_response_error_wrong_franchiseoffice = common_response_error_wrong_franchiseoffice_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_common_response_error_wrong_franchiseoffice__"BADREQUEST",
      list_createList(),
      117,
      "Default",
      50,
      "Default"
    );
  }

  return common_response_error_wrong_franchiseoffice;
}


#ifdef common_response_error_wrong_franchiseoffice_MAIN

void test_common_response_error_wrong_franchiseoffice(int include_optional) {
    common_response_error_wrong_franchiseoffice_t* common_response_error_wrong_franchiseoffice_1 = instantiate_common_response_error_wrong_franchiseoffice(include_optional);

	cJSON* jsoncommon_response_error_wrong_franchiseoffice_1 = common_response_error_wrong_franchiseoffice_convertToJSON(common_response_error_wrong_franchiseoffice_1);
	printf("common_response_error_wrong_franchiseoffice :\n%s\n", cJSON_Print(jsoncommon_response_error_wrong_franchiseoffice_1));
	common_response_error_wrong_franchiseoffice_t* common_response_error_wrong_franchiseoffice_2 = common_response_error_wrong_franchiseoffice_parseFromJSON(jsoncommon_response_error_wrong_franchiseoffice_1);
	cJSON* jsoncommon_response_error_wrong_franchiseoffice_2 = common_response_error_wrong_franchiseoffice_convertToJSON(common_response_error_wrong_franchiseoffice_2);
	printf("repeating common_response_error_wrong_franchiseoffice:\n%s\n", cJSON_Print(jsoncommon_response_error_wrong_franchiseoffice_2));
}

int main() {
  test_common_response_error_wrong_franchiseoffice(1);
  test_common_response_error_wrong_franchiseoffice(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_error_wrong_franchiseoffice_MAIN
#endif // common_response_error_wrong_franchiseoffice_TEST
