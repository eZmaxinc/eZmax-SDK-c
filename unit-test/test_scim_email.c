#ifndef scim_email_TEST
#define scim_email_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scim_email_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scim_email.h"
scim_email_t* instantiate_scim_email(int include_optional);



scim_email_t* instantiate_scim_email(int include_optional) {
  scim_email_t* scim_email = NULL;
  if (include_optional) {
    scim_email = scim_email_create(
      "email@example.com",
      1
    );
  } else {
    scim_email = scim_email_create(
      "email@example.com",
      1
    );
  }

  return scim_email;
}


#ifdef scim_email_MAIN

void test_scim_email(int include_optional) {
    scim_email_t* scim_email_1 = instantiate_scim_email(include_optional);

	cJSON* jsonscim_email_1 = scim_email_convertToJSON(scim_email_1);
	printf("scim_email :\n%s\n", cJSON_Print(jsonscim_email_1));
	scim_email_t* scim_email_2 = scim_email_parseFromJSON(jsonscim_email_1);
	cJSON* jsonscim_email_2 = scim_email_convertToJSON(scim_email_2);
	printf("repeating scim_email:\n%s\n", cJSON_Print(jsonscim_email_2));
}

int main() {
  test_scim_email(1);
  test_scim_email(0);

  printf("Hello world \n");
  return 0;
}

#endif // scim_email_MAIN
#endif // scim_email_TEST
