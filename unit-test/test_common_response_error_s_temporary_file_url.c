#ifndef common_response_error_s_temporary_file_url_TEST
#define common_response_error_s_temporary_file_url_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_error_s_temporary_file_url_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_error_s_temporary_file_url.h"
common_response_error_s_temporary_file_url_t* instantiate_common_response_error_s_temporary_file_url(int include_optional);



common_response_error_s_temporary_file_url_t* instantiate_common_response_error_s_temporary_file_url(int include_optional) {
  common_response_error_s_temporary_file_url_t* common_response_error_s_temporary_file_url = NULL;
  if (include_optional) {
    common_response_error_s_temporary_file_url = common_response_error_s_temporary_file_url_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_common_response_error_s_temporary_file_url__"BADREQUEST",
      list_createList(),
      "http://www.example.com/document.pdf"
    );
  } else {
    common_response_error_s_temporary_file_url = common_response_error_s_temporary_file_url_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_common_response_error_s_temporary_file_url__"BADREQUEST",
      list_createList(),
      "http://www.example.com/document.pdf"
    );
  }

  return common_response_error_s_temporary_file_url;
}


#ifdef common_response_error_s_temporary_file_url_MAIN

void test_common_response_error_s_temporary_file_url(int include_optional) {
    common_response_error_s_temporary_file_url_t* common_response_error_s_temporary_file_url_1 = instantiate_common_response_error_s_temporary_file_url(include_optional);

	cJSON* jsoncommon_response_error_s_temporary_file_url_1 = common_response_error_s_temporary_file_url_convertToJSON(common_response_error_s_temporary_file_url_1);
	printf("common_response_error_s_temporary_file_url :\n%s\n", cJSON_Print(jsoncommon_response_error_s_temporary_file_url_1));
	common_response_error_s_temporary_file_url_t* common_response_error_s_temporary_file_url_2 = common_response_error_s_temporary_file_url_parseFromJSON(jsoncommon_response_error_s_temporary_file_url_1);
	cJSON* jsoncommon_response_error_s_temporary_file_url_2 = common_response_error_s_temporary_file_url_convertToJSON(common_response_error_s_temporary_file_url_2);
	printf("repeating common_response_error_s_temporary_file_url:\n%s\n", cJSON_Print(jsoncommon_response_error_s_temporary_file_url_2));
}

int main() {
  test_common_response_error_s_temporary_file_url(1);
  test_common_response_error_s_temporary_file_url(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_error_s_temporary_file_url_MAIN
#endif // common_response_error_s_temporary_file_url_TEST
