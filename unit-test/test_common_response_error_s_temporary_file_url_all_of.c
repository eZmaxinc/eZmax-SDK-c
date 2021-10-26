#ifndef common_response_error_s_temporary_file_url_all_of_TEST
#define common_response_error_s_temporary_file_url_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_error_s_temporary_file_url_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_error_s_temporary_file_url_all_of.h"
common_response_error_s_temporary_file_url_all_of_t* instantiate_common_response_error_s_temporary_file_url_all_of(int include_optional);



common_response_error_s_temporary_file_url_all_of_t* instantiate_common_response_error_s_temporary_file_url_all_of(int include_optional) {
  common_response_error_s_temporary_file_url_all_of_t* common_response_error_s_temporary_file_url_all_of = NULL;
  if (include_optional) {
    common_response_error_s_temporary_file_url_all_of = common_response_error_s_temporary_file_url_all_of_create(
      "http://www.example.com/document.pdf"
    );
  } else {
    common_response_error_s_temporary_file_url_all_of = common_response_error_s_temporary_file_url_all_of_create(
      "http://www.example.com/document.pdf"
    );
  }

  return common_response_error_s_temporary_file_url_all_of;
}


#ifdef common_response_error_s_temporary_file_url_all_of_MAIN

void test_common_response_error_s_temporary_file_url_all_of(int include_optional) {
    common_response_error_s_temporary_file_url_all_of_t* common_response_error_s_temporary_file_url_all_of_1 = instantiate_common_response_error_s_temporary_file_url_all_of(include_optional);

	cJSON* jsoncommon_response_error_s_temporary_file_url_all_of_1 = common_response_error_s_temporary_file_url_all_of_convertToJSON(common_response_error_s_temporary_file_url_all_of_1);
	printf("common_response_error_s_temporary_file_url_all_of :\n%s\n", cJSON_Print(jsoncommon_response_error_s_temporary_file_url_all_of_1));
	common_response_error_s_temporary_file_url_all_of_t* common_response_error_s_temporary_file_url_all_of_2 = common_response_error_s_temporary_file_url_all_of_parseFromJSON(jsoncommon_response_error_s_temporary_file_url_all_of_1);
	cJSON* jsoncommon_response_error_s_temporary_file_url_all_of_2 = common_response_error_s_temporary_file_url_all_of_convertToJSON(common_response_error_s_temporary_file_url_all_of_2);
	printf("repeating common_response_error_s_temporary_file_url_all_of:\n%s\n", cJSON_Print(jsoncommon_response_error_s_temporary_file_url_all_of_2));
}

int main() {
  test_common_response_error_s_temporary_file_url_all_of(1);
  test_common_response_error_s_temporary_file_url_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_error_s_temporary_file_url_all_of_MAIN
#endif // common_response_error_s_temporary_file_url_all_of_TEST
