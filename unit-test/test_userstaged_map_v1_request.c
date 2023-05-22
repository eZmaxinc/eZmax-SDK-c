#ifndef userstaged_map_v1_request_TEST
#define userstaged_map_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define userstaged_map_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/userstaged_map_v1_request.h"
userstaged_map_v1_request_t* instantiate_userstaged_map_v1_request(int include_optional);



userstaged_map_v1_request_t* instantiate_userstaged_map_v1_request(int include_optional) {
  userstaged_map_v1_request_t* userstaged_map_v1_request = NULL;
  if (include_optional) {
    userstaged_map_v1_request = userstaged_map_v1_request_create(
      70
    );
  } else {
    userstaged_map_v1_request = userstaged_map_v1_request_create(
      70
    );
  }

  return userstaged_map_v1_request;
}


#ifdef userstaged_map_v1_request_MAIN

void test_userstaged_map_v1_request(int include_optional) {
    userstaged_map_v1_request_t* userstaged_map_v1_request_1 = instantiate_userstaged_map_v1_request(include_optional);

	cJSON* jsonuserstaged_map_v1_request_1 = userstaged_map_v1_request_convertToJSON(userstaged_map_v1_request_1);
	printf("userstaged_map_v1_request :\n%s\n", cJSON_Print(jsonuserstaged_map_v1_request_1));
	userstaged_map_v1_request_t* userstaged_map_v1_request_2 = userstaged_map_v1_request_parseFromJSON(jsonuserstaged_map_v1_request_1);
	cJSON* jsonuserstaged_map_v1_request_2 = userstaged_map_v1_request_convertToJSON(userstaged_map_v1_request_2);
	printf("repeating userstaged_map_v1_request:\n%s\n", cJSON_Print(jsonuserstaged_map_v1_request_2));
}

int main() {
  test_userstaged_map_v1_request(1);
  test_userstaged_map_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // userstaged_map_v1_request_MAIN
#endif // userstaged_map_v1_request_TEST
