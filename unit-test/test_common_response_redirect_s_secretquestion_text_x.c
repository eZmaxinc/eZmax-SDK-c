#ifndef common_response_redirect_s_secretquestion_text_x_TEST
#define common_response_redirect_s_secretquestion_text_x_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_redirect_s_secretquestion_text_x_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_redirect_s_secretquestion_text_x.h"
common_response_redirect_s_secretquestion_text_x_t* instantiate_common_response_redirect_s_secretquestion_text_x(int include_optional);



common_response_redirect_s_secretquestion_text_x_t* instantiate_common_response_redirect_s_secretquestion_text_x(int include_optional) {
  common_response_redirect_s_secretquestion_text_x_t* common_response_redirect_s_secretquestion_text_x = NULL;
  if (include_optional) {
    common_response_redirect_s_secretquestion_text_x = common_response_redirect_s_secretquestion_text_x_create(
      "The name of the hospital in which you were born"
    );
  } else {
    common_response_redirect_s_secretquestion_text_x = common_response_redirect_s_secretquestion_text_x_create(
      "The name of the hospital in which you were born"
    );
  }

  return common_response_redirect_s_secretquestion_text_x;
}


#ifdef common_response_redirect_s_secretquestion_text_x_MAIN

void test_common_response_redirect_s_secretquestion_text_x(int include_optional) {
    common_response_redirect_s_secretquestion_text_x_t* common_response_redirect_s_secretquestion_text_x_1 = instantiate_common_response_redirect_s_secretquestion_text_x(include_optional);

	cJSON* jsoncommon_response_redirect_s_secretquestion_text_x_1 = common_response_redirect_s_secretquestion_text_x_convertToJSON(common_response_redirect_s_secretquestion_text_x_1);
	printf("common_response_redirect_s_secretquestion_text_x :\n%s\n", cJSON_Print(jsoncommon_response_redirect_s_secretquestion_text_x_1));
	common_response_redirect_s_secretquestion_text_x_t* common_response_redirect_s_secretquestion_text_x_2 = common_response_redirect_s_secretquestion_text_x_parseFromJSON(jsoncommon_response_redirect_s_secretquestion_text_x_1);
	cJSON* jsoncommon_response_redirect_s_secretquestion_text_x_2 = common_response_redirect_s_secretquestion_text_x_convertToJSON(common_response_redirect_s_secretquestion_text_x_2);
	printf("repeating common_response_redirect_s_secretquestion_text_x:\n%s\n", cJSON_Print(jsoncommon_response_redirect_s_secretquestion_text_x_2));
}

int main() {
  test_common_response_redirect_s_secretquestion_text_x(1);
  test_common_response_redirect_s_secretquestion_text_x(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_redirect_s_secretquestion_text_x_MAIN
#endif // common_response_redirect_s_secretquestion_text_x_TEST
