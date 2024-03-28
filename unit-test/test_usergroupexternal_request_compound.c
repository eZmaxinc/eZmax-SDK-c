#ifndef usergroupexternal_request_compound_TEST
#define usergroupexternal_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupexternal_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupexternal_request_compound.h"
usergroupexternal_request_compound_t* instantiate_usergroupexternal_request_compound(int include_optional);



usergroupexternal_request_compound_t* instantiate_usergroupexternal_request_compound(int include_optional) {
  usergroupexternal_request_compound_t* usergroupexternal_request_compound = NULL;
  if (include_optional) {
    usergroupexternal_request_compound = usergroupexternal_request_compound_create(
      16,
      "Administrators",
      "5140-1542"
    );
  } else {
    usergroupexternal_request_compound = usergroupexternal_request_compound_create(
      16,
      "Administrators",
      "5140-1542"
    );
  }

  return usergroupexternal_request_compound;
}


#ifdef usergroupexternal_request_compound_MAIN

void test_usergroupexternal_request_compound(int include_optional) {
    usergroupexternal_request_compound_t* usergroupexternal_request_compound_1 = instantiate_usergroupexternal_request_compound(include_optional);

	cJSON* jsonusergroupexternal_request_compound_1 = usergroupexternal_request_compound_convertToJSON(usergroupexternal_request_compound_1);
	printf("usergroupexternal_request_compound :\n%s\n", cJSON_Print(jsonusergroupexternal_request_compound_1));
	usergroupexternal_request_compound_t* usergroupexternal_request_compound_2 = usergroupexternal_request_compound_parseFromJSON(jsonusergroupexternal_request_compound_1);
	cJSON* jsonusergroupexternal_request_compound_2 = usergroupexternal_request_compound_convertToJSON(usergroupexternal_request_compound_2);
	printf("repeating usergroupexternal_request_compound:\n%s\n", cJSON_Print(jsonusergroupexternal_request_compound_2));
}

int main() {
  test_usergroupexternal_request_compound(1);
  test_usergroupexternal_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupexternal_request_compound_MAIN
#endif // usergroupexternal_request_compound_TEST
