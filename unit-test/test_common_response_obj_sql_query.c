#ifndef common_response_obj_sql_query_TEST
#define common_response_obj_sql_query_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_obj_sql_query_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response_obj_sql_query.h"
common_response_obj_sql_query_t* instantiate_common_response_obj_sql_query(int include_optional);



common_response_obj_sql_query_t* instantiate_common_response_obj_sql_query(int include_optional) {
  common_response_obj_sql_query_t* common_response_obj_sql_query = NULL;
  if (include_optional) {
    common_response_obj_sql_query = common_response_obj_sql_query_create(
      "0",
      1.337
    );
  } else {
    common_response_obj_sql_query = common_response_obj_sql_query_create(
      "0",
      1.337
    );
  }

  return common_response_obj_sql_query;
}


#ifdef common_response_obj_sql_query_MAIN

void test_common_response_obj_sql_query(int include_optional) {
    common_response_obj_sql_query_t* common_response_obj_sql_query_1 = instantiate_common_response_obj_sql_query(include_optional);

	cJSON* jsoncommon_response_obj_sql_query_1 = common_response_obj_sql_query_convertToJSON(common_response_obj_sql_query_1);
	printf("common_response_obj_sql_query :\n%s\n", cJSON_Print(jsoncommon_response_obj_sql_query_1));
	common_response_obj_sql_query_t* common_response_obj_sql_query_2 = common_response_obj_sql_query_parseFromJSON(jsoncommon_response_obj_sql_query_1);
	cJSON* jsoncommon_response_obj_sql_query_2 = common_response_obj_sql_query_convertToJSON(common_response_obj_sql_query_2);
	printf("repeating common_response_obj_sql_query:\n%s\n", cJSON_Print(jsoncommon_response_obj_sql_query_2));
}

int main() {
  test_common_response_obj_sql_query(1);
  test_common_response_obj_sql_query(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_obj_sql_query_MAIN
#endif // common_response_obj_sql_query_TEST
