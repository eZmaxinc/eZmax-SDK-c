#ifndef usergroupdelegation_request_compound_TEST
#define usergroupdelegation_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usergroupdelegation_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usergroupdelegation_request_compound.h"
usergroupdelegation_request_compound_t* instantiate_usergroupdelegation_request_compound(int include_optional);



usergroupdelegation_request_compound_t* instantiate_usergroupdelegation_request_compound(int include_optional) {
  usergroupdelegation_request_compound_t* usergroupdelegation_request_compound = NULL;
  if (include_optional) {
    usergroupdelegation_request_compound = usergroupdelegation_request_compound_create(
      141,
      2,
      70
    );
  } else {
    usergroupdelegation_request_compound = usergroupdelegation_request_compound_create(
      141,
      2,
      70
    );
  }

  return usergroupdelegation_request_compound;
}


#ifdef usergroupdelegation_request_compound_MAIN

void test_usergroupdelegation_request_compound(int include_optional) {
    usergroupdelegation_request_compound_t* usergroupdelegation_request_compound_1 = instantiate_usergroupdelegation_request_compound(include_optional);

	cJSON* jsonusergroupdelegation_request_compound_1 = usergroupdelegation_request_compound_convertToJSON(usergroupdelegation_request_compound_1);
	printf("usergroupdelegation_request_compound :\n%s\n", cJSON_Print(jsonusergroupdelegation_request_compound_1));
	usergroupdelegation_request_compound_t* usergroupdelegation_request_compound_2 = usergroupdelegation_request_compound_parseFromJSON(jsonusergroupdelegation_request_compound_1);
	cJSON* jsonusergroupdelegation_request_compound_2 = usergroupdelegation_request_compound_convertToJSON(usergroupdelegation_request_compound_2);
	printf("repeating usergroupdelegation_request_compound:\n%s\n", cJSON_Print(jsonusergroupdelegation_request_compound_2));
}

int main() {
  test_usergroupdelegation_request_compound(1);
  test_usergroupdelegation_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // usergroupdelegation_request_compound_MAIN
#endif // usergroupdelegation_request_compound_TEST
